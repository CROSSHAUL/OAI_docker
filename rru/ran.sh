#!/bin/bash

sudo ln -sf /proc/1/fd/1 ./oai.txt

sleep 5s

sudo -E ./targets/bin/lte-uesoftmodem.Rel15 -O ./ci-scripts/conf_files/ue.nfapi.conf --L2-emul 3 --num-ues 6 --nokrnmod 1 > ./oai.txt 2>&1 &

exit 0

