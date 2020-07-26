#!/bin/bash

sudo ln -sf /proc/1/fd/1 ./oai.txt

sleep 5
sudo -E ./targets/bin/lte-softmodem.Rel15 -O ./ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf> ./oai.txt 2>&1 &

exit 0
