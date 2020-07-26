FROM laboraufg/enb-openairsim:latest

ENV USER=root
ENV DEBIAN_FRONTEND=noninteractive

COPY rcc.band7.tm1.nfapi.conf ./ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf 
RUN /bin/bash -c "source /root/enb/oaienv && /root/enb/cmake_targets/build_oai -I --eNB --install-system-files --install-optional-packages"

RUN /bin/bash -c "source oaienv;./cmake_targets/build_oai --eNB"

COPY exec.sh ./exec.sh

ENTRYPOINT ["/exec.sh"]
#ENTRYPOINT [ "./cmake_targets/tools/make_agent_cache; "] 

