FROM laboraufg/ue-openairsim

# ENV USER=root
# ENV DEBIAN_FRONTEND=noninteractive

# RUN apt-get update && apt-get install \
#     linux-image-$(uname -r) \
#     linux-headers-$(uname -r) \
#     software-properties-common \
#     git \
#     wget \
#     build-essential \
#     sudo psmisc vim -yq

## Base image already handles following line
# RUN /bin/bash -c "sed -i '102i\ host=NULL;\' /root/ue/openair3/NAS/UE/API/USER/user_api.c"
# RUN /bin/bash -c "source oaienv; /root/ue/cmake_targets/build_oai -I --UE --install-system-files --install-optional-packages"
# RUN /bin/bash -c "source oaienv; /root/ue/cmake_targets/build_oai --UE"

RUN apt-get update && apt-get install net-tools iputils-ping curl

COPY ue.nfapi.conf /root/ue/ci-scripts/conf_files/ue.nfapi.conf
COPY ue_eurecom_test_sfr.conf /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf

COPY register_ue.sh /root/register_ue.sh

COPY exec.sh /exec.sh
ENTRYPOINT ["/exec.sh"]
