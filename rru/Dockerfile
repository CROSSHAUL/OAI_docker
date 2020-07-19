FROM oaisim-base

RUN git clone https://github.com/LMicol/oaisim_folder.git enb_folder
RUN cd enb_folder && git checkout master

RUN adduser l2nfapi
RUN adduser l2nfapi sudo
RUN echo "l2nfapi      ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers
USER l2nfapi
USER root
COPY rru.fdd.band7.conf /enb_folder/ci-scripts/conf_files/rru.fdd.band7.conf
RUN DEBIAN_FRONTEND=noninteractive apt install -y tzdata
RUN cd enb_folder/cmake_targets && sudo ./build_oai --eNB --mu -I -c
COPY exec.sh /exec.sh
RUN chmod +x /exec.sh
ENTRYPOINT ["/exec.sh"]

