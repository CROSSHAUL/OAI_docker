FROM laboraufg/enb-openairsim:latest

ENV USER=root
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install \
    linux-image-$(uname -r) \
    linux-headers-$(uname -r) \
    software-properties-common \
    git \
    wget \
    build-essential \
    sudo psmisc vim -yq
    
RUN /bin/bash -c "source /root/enb/oaienv && /root/enb/cmake_targets/build_oai -I --eNB --install-system-files --install-optional-packages"
RUN /bin/bash -c "source oaienv;./cmake_targets/build_oai --eNB"
