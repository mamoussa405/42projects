mkdir /run/openrc
touch /run/openrc/softlevel
rc-status
rc-service mariadb start
mariadb -u root -e "CREATE USER 'mamoussa'@'%' IDENTIFIED BY 'mamoussa'"
mariadb -u root -e "CREATE DATABASE wordpdata;"
mariadb -u root -e "GRANT ALL ON *.* TO 'mamoussa'@'%';FLUSH PRIVILEGES;"
sed -i "s/MINIKUBE/$ip/g" wordpdata.sql
mysql -u root wordpdata < /wordpdata.sql
rc-service mariadb start
tail -f /dev/null