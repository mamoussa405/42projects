FROM alpine
ENV INFLUXDB_VERSION 1.5.3
ENV TELEGRAF_VERSION 1.6.3
RUN apk add --no-cache su-exec  \
&& wget https://dl.influxdata.com/influxdb/releases/influxdb-${INFLUXDB_VERSION}-static_linux_amd64.tar.gz \
&& wget https://dl.influxdata.com/telegraf/releases/telegraf-${TELEGRAF_VERSION}-static_linux_amd64.tar.gz \
&& addgroup influxdb \
&& adduser -s /bin/false -G influxdb -S -D influxdb \
&& tar -xzf influxdb-${INFLUXDB_VERSION}-static_linux_amd64.tar.gz \
&& tar -xzf telegraf-${TELEGRAF_VERSION}-static_linux_amd64.tar.gz \
&& chmod +x influxdb-*/* \
&& chmod +x telegraf/* \
&& cp -a influxdb-*/* /usr/bin/ \
&& cp telegraf/telegraf /usr/bin/ \
&& rm -rf *.tar.gz* influxdb-*/ \
&& rm -rf *.tar.gz* telegraf/ \
&& mkdir /var/lib/influxdb \
&& mkdir /etc/telegraf/ \
&& mkdir /etc/influxdb/
RUN apk add openrc influxdb
RUN apk add supervisor
COPY influxdb.conf /etc/influxdb/
COPY supervisord.conf /etc/
COPY telegraf.conf /etc/telegraf/
COPY influxdb-run.sh /
EXPOSE 8086
ENTRYPOINT [ "sh", "influxdb-run.sh"]