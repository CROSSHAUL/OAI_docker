FROM base-ran-nfapi

VOLUME ["/config_files"]

ENV USER=root
ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /openairinterface5g/

RUN /bin/bash -c "sed -i '102i\ host=NULL;\' ./openair3/NAS/UE/API/USER/user_api.c "

RUN /bin/bash -c "source oaienv; ./cmake_targets/build_oai --UE"

COPY ue_eurecom_test_sfr.conf ./openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf

RUN /bin/bash -c "./targets/bin/conf2uedata -c ./openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf -o ."

COPY ran.sh ./ran.sh

RUN chmod +x ran.sh

