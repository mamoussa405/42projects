FROM alpine
ARG ip
ENV FTP_IP=$ip
RUN echo "http://dl-cdn.alpinelinux.org/alpine/edge/testing" >> /etc/apk/repositories
RUN apk update
RUN apk add pure-ftpd
RUN adduser -D mamoussa
RUN echo "mamoussa:password" | chpasswd
COPY pure-ftpd.pem /etc/ssl/private
COPY set.sh /
EXPOSE 21 28000
ENTRYPOINT ["sh","set.sh"]