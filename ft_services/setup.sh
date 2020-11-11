#!bin/bash
minikube delete
minikube start --extra-config=apiserver.service-node-port-range=1-65535
minikube ssh 'sudo mkdir /data/ftp; sudo chmod 777 /data/ftp'
minikube ssh 'sudo mkdir /data/mysql; sudo chmod 777 /data/mysql'
minikube ssh 'sudo mkdir /data/influxdb; sudo chmod 777 /data/influxdb'
eval $(minikube docker-env)
docker build -t nginx-image -f srcs/nginx/Dockerfile srcs/nginx/.
docker build -t ftpserver --build-arg ip=$(minikube ip) -f srcs/ftps/Dockerfile srcs/ftps/.
docker build -t wordpress -f srcs/wordpress/Dockerfile srcs/wordpress/.
docker build -t mysql --build-arg ip=$(minikube ip) -f  srcs/mysql/Dockerfile srcs/mysql/.
docker build -t phpmyadmin -f srcs/phpmyadmin/Dockerfile srcs/phpmyadmin/.
docker build -t grafana -f srcs/grafana/Dockerfile srcs/grafana/.
docker build -t influx -f srcs/influxdb/Dockerfile srcs/influxdb/.
kubectl create -f srcs/nginx/nginx-deployment.yml
kubectl create -f srcs/nginx/ingress-controler.yml
kubectl create -f srcs/ftps/ftp_deployment.yml
kubectl create -f srcs/wordpress/deployment.yml
kubectl create -f srcs/mysql/deployment.yml
kubectl create -f srcs/phpmyadmin/deployment.yml
kubectl create -f srcs/grafana/deployment.yml
kubectl create -f srcs/influxdb/deployment.yml
minikube addons enable ingress
sleep 25
kubectl cp srcs/mysql/sc.sh $(kubectl get pods | grep "mysql*" | grep -v pause| awk '{print $1}'):/var/lib/
kubectl exec -i $(kubectl get pods | grep "mysql*" | grep -v pause| awk '{print $1}') -- sh /var/lib/sc.sh