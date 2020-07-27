FROM crosshaul:latest

COPY rcc.band7.tm1.nfapi.conf /root/enb/ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf
COPY exec.sh ./exec.sh

ENTRYPOINT ["/exec.sh"]
