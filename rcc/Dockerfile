FROM laboraufg/enb-openairsim:latest

COPY rcc.band7.tm1.nfapi.conf /enb/ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf
COPY rcc.band7.tm1.if4p5.lo.25PRB.usrpb210.conf /enb/ci-scripts/conf_files/rcc.band7.tm1.if4p5.lo.25PRB.usrpb210.conf
COPY exec.sh /exec.sh
ENTRYPOINT ["/exec.sh"]
