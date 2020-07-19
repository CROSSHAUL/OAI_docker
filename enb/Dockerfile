FROM laboraufg/enb-openairsim:latest

COPY rcc.band7.tm1.nfapi.conf /enb/ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf

COPY exec.sh /exec.sh
ENTRYPOINT ["/exec.sh"]
