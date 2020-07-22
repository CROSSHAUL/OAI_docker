FROM base-nfapi

VOLUME ["/dev/bus/usb"]
VOLUME ["/config_files"]

ENV USER=root
ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /openairinterface5g/

COPY rcc.band7.tm1.nfapi.conf ./ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf 

RUN /bin/bash -c "source oaienv;./cmake_targets/build_oai --eNB"

COPY ran.sh ./ran.sh

RUN chmod +x ran.sh

#ENTRYPOINT [ "./cmake_targets/tools/make_agent_cache; "] 

