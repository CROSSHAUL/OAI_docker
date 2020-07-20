FROM laboraufg/enb-openairsim:latest

COPY rru.fdd.band7.conf /enb/ci-scripts/conf_files/rru.fdd.band7.conf
COPY exec.sh /exec.sh
ENTRYPOINT ["/exec.sh"]
