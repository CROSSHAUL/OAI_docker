#!/bin/bash

sudo ln -sf /proc/1/fd/1 ./oai.txt

sleep 5
sudo -E /root/enb/targets/bin/lte-softmodem.Rel15 -O /root/enb/ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf

exit 0
