FROM alpine
ENV GRAFANA_VERSION 6.6.2
RUN apk update
RUN apk add --no-cache su-exec ca-certificates openssl curl
RUN apk add --no-cache --virtual .build-deps fontconfig
RUN wget https://dl.grafana.com/oss/release/grafana-${GRAFANA_VERSION}.linux-amd64.tar.gz \
&& wget -q -O /etc/apk/keys/sgerrand.rsa.pub https://alpine-pkgs.sgerrand.com/sgerrand.rsa.pub \
&& wget https://github.com/sgerrand/alpine-pkg-glibc/releases/download/2.30-r0/glibc-2.30-r0.apk \
&& apk add glibc-2.30-r0.apk
RUN addgroup grafana \
   && adduser -s /bin/false -G grafana -S -D grafana
COPY run.sh /
RUN tar -zxvf grafana-${GRAFANA_VERSION}.linux-amd64.tar.gz \
&& mv grafana-${GRAFANA_VERSION} /grafana \
&& mkdir -p /var/lib/grafana/dashboards /var/lib/grafana/data /var/lib/grafana/logs /var/lib/grafana/plugins \
&&  ln -s /grafana/plugins /var/lib/grafana/plugins \
&& mv /grafana/bin/* /usr/bin/ \
&& grafana-cli plugins update-all
COPY defaults /grafana/conf
COPY grafana.db /grafana/data/
EXPOSE 3000
ENTRYPOINT [ "sh", "/run.sh"]