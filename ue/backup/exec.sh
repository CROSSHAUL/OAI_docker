#!/bin/bash

cd /root/ue/cmake_targets/ran_build/build/ && ./lte-uesoftmodem -O /root/ue/ci-scripts/conf_files/ue.nfapi.conf --L2-emul 3 --num-ues 1 --nums_ue_thread 1 --nokrnmod 1 > ue.log 2>&1
