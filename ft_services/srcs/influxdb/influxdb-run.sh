#!bin/bash
chown -R influxdb:influxdb /var/lib/influxdb
exec su-exec influxdb /usr/bin/influxd &
influx -execute="CREATE USER mamoussa WITH PASSWORD '0000' WITH ALL PRIVILEGES"
killall influxd
supervisord --nodaemon --configuration /etc/supervisord.conf