#!/bin/bash

echo "configuring UE data"
sudo /root/ue/targets/bin/conf2uedata \
    -c /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf \
    -o /root/ue/cmake_targets/ran_build/build/

export FREE5G_WEB_URL=192.188.2.11:3000
export NUM_UES=3

echo "registering UEs"
/root/register_ue.sh /root/ue/openair3/NAS/TOOLS/ue_eurecom_test_sfr.conf

echo "running UE"
/root/ue/cmake_targets/ran_build/build/lte-uesoftmodem \
    -O /root/ue/ci-scripts/conf_files/ue.nfapi.conf \
    --L2-emul 3 \
    --num-ues $NUM_UES \
    --nums_ue_thread 1 \
    --nokrnmod 1
