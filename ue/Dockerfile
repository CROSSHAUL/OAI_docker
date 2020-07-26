FROM laboraufg/ue-openairsim


COPY ue.nfapi.conf /root/ue/ci-scripts/conf_files/ue.nfapi.conf
COPY ue_eurecom_test_sfr.conf /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf

COPY register_ue.sh /root/register_ue.sh

COPY exec.sh /exec.sh
ENTRYPOINT ["/exec.sh"]
