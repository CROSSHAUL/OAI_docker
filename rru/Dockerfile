FROM laboraufg/enb-openairsim:latest

ENV USER=root
ENV DEBIAN_FRONTEND=noninteractive

COPY rru.fdd.band7.conf /root/enb/ci-scripts/conf_files/rru.fdd.band7.conf
COPY exec.sh /exec.sh

RUN apt-get update && apt-get install linux-image-$(uname -r) linux-headers-$(uname -r) software-properties-common git wget git build-essential sudo psmisc vim -yq
RUN apt-get update && apt-get install -y --no-install-recommends apt-utils
RUN /bin/bash -c "source /root/enb/oaienv && /root/enb/cmake_targets/build_oai -I --eNB --install-system-files --install-optional-packages"

ENTRYPOINT ["/exec.sh"]
