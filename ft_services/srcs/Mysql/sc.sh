mysql_install_db --user=mysql --datadir=/var/lib/mysql
rc-status
rc-service mariadb start
mysql -u root -e "CREATE USER 'mamoussa'@'%' IDENTIFIED BY 'mamoussa'"
mysql --user=root -e "CREATE DATABASE wordpdata; use wordpdata"
mysql -u root -e "GRANT ALL ON *.* TO 'mamoussa'@'%'; FLUSH PRIVILEGES;"
mysql -u root wordpdata < /wordpdata.sql
rc-service mariadb start