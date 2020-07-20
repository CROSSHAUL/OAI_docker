#!/bin/bash

echo "Initializing UEs ..."
cd /root/enb/cmake_targets/ran_build/build/ && sudo -E ./lte-softmodem -O /root/enb/ci-scripts/conf_files/rcc.band7.tm1.nfapi.conf
