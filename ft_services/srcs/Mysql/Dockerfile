FROM alpine
ARG ip
ENV ip=$ip
RUN apk update \
    && apk add mariadb mariadb-client \
    && apk add openrc
RUN mysql_install_db --user=mysql --datadir="/var/lib/mysql"
COPY mariadb-server.cnf /etc/my.cnf.d/
COPY conf.sh /
COPY wordpdata.sql /
ENTRYPOINT ["sh", "conf.sh"]