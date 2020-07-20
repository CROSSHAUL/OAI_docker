#!/bin/bash

echo "Initializing UEs ..."
ifconfig
sleep 5
sudo -E /root/enb/targets/bin/lte-softmodem.Rel15 -O /root/enb/ci-scripts/conf_files/rru.fdd.band7.conf
