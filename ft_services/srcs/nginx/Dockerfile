FROM alpine
RUN mkdir /run/nginx/
RUN apk update
RUN apk add nginx \
&& adduser mamoussa -D \
&& echo "mamoussa:mamoussa" | chpasswd \
&& echo "root:root" | chpasswd \
&& apk add openrc \
&& apk add openssh \
&& mkdir /root/.ssh \
&& chmod 0700 /root/.ssh \
&& ssh-keygen -A
RUN apk add supervisor
COPY default.conf /etc/nginx/conf.d
COPY sshd_config /etc/ssh/
COPY supervisord.conf /etc/
COPY ssh-run.sh /
RUN  echo "<h1>Hello Word!</h1>" > /var/www/localhost/htdocs/index.html \
EXPOSE 80 443 22
ENTRYPOINT ["sh","ssh-run.sh"]