#!/bin/bash

echo "Initializing UEs ..."
cd enb/cmake_targets/ran_build/build/ && sudo -E ./lte-softmodem -O /enb/ci-scripts/conf_files/rcc.band7.tm1.if4p5.lo.25PRB.usrpb210.conf
