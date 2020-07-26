FROM laboraufg/ue-openairsim


COPY ue.nfapi.conf /root/ue/ci-scripts/conf_files/ue.nfapi.conf
COPY ue_eurecom_test_sfr.conf /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf

COPY register_ue /root/register_ue
RUN chmod +x /root/register_ue /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf

COPY script.sh /root/script.sh

RUN sudo /root/script.sh
RUN cd /root/ue/targets/bin && sudo ./conf2uedata -c /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf -o /root/ue/cmake_targets/ran_build/build/

COPY exec.sh /exec.sh
ENTRYPOINT ["/exec.sh"]
