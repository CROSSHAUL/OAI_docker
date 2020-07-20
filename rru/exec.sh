#!/bin/bash

echo "Initializing UEs ..."
cd enb/cmake_targets/ran_build/build/ && sudo -E ./lte-softmodem -O /enb/ci-scripts/conf_files/rru.fdd.band7.conf
