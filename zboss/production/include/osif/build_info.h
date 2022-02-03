/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */
#ifndef ZBOSS_BUILD_INFO_H__
#define ZBOSS_BUILD_INFO_H__

/**
 * This is an autogenerated file.
 * Please use release scripts to update it's contents.
 *
 * Repositories:
 * platform_ncs       7bd1f421d0573dd51d8724d369ae33c59993c0d1 https://bitbucket.dsr-corporation.com/scm/ZOI/platform_ncs.git
 * zboss-stack-src    95c0139f226020ff026e84fa898d4b22904f3476 https://bitbucket.dsr-corporation.com/scm/zoi/zboss_stable
 * zboss-stack-doc    232d41efb7190a13269b99826c80fe43db222bab https://bitbucket.dsr-corporation.com/scm/zoi/zboss_doc
 * nrf                7b0f72fd0bd58336916245aa40c0006d4331980c https://github.com/nrfconnect/sdk-nrf
 * zephyr             d9cc0d37bf45a544ccc7bb0df159d470b836724d https://github.com/nrfconnect/sdk-zephyr
 * mcuboot            296af282cc269f4983dc6814180109e5f5808a1a https://github.com/nrfconnect/sdk-mcuboot
 * mbedtls-nrf        68dfba636301bd618bc9b5c1a946f358ad8714ee https://github.com/nrfconnect/sdk-mbedtls
 * nrfxlib            943bf88606f0df8b705e38182c10a8cf959dba45 https://github.com/nrfconnect/sdk-nrfxlib
 * trusted-firmware-m b599a2e3b93b256ccb886d3368ab9948845ebac4 https://github.com/nrfconnect/sdk-trusted-firmware-m
 * tfm-mcuboot        4aa516e7281fc6f9a2dce0b0efda9acc580fa254 https://github.com/nrfconnect/sdk-mcuboot
 * matter             c0da86c97e5761dfbc828ab76ef18150b7215f23 https://github.com/nrfconnect/sdk-connectedhomeip
 * cjson              c6af068b7f05207b28d68880740e4b9ec1e4b50a https://github.com/nrfconnect/sdk-cjson
 * cmock              9d092898ef26ece140d9225e037274b64d4f851e https://github.com/ThrowTheSwitch/cmock
 * unity              74cde089e65c3435ce9aa87d5c69f4f16b7f6ade https://github.com/ThrowTheSwitch/unity
 * Alexa-Gadgets-Embedded-Sample-Code face92d8c62184832793f518bb1f19379538c5c1 https://github.com/alexa/Alexa-Gadgets-Embedded-Sample-Code
 * cddl-gen           1c2656daa87ebf4cd3c45ee8eafa336260d589bc https://github.com/NordicSemiconductor/cddl-gen
 * memfault-firmware-sdk 8585f81453af37cd97c47816cc61395cbabdf1fe https://github.com/memfault/memfault-firmware-sdk
 * canopennode        1052dae561497bef901f931ef75e117c9224aecd https://github.com/zephyrproject-rtos/canopennode
 * civetweb           094aeb41bb93e9199d24d665ee43e9e05d6d7b1c https://github.com/zephyrproject-rtos/civetweb
 * cmsis              b0612c97c1401feeb4160add6462c3627fe90fc7 https://github.com/zephyrproject-rtos/cmsis
 * edtt               c94f63865a803b18a2ab9eca70d2a9ab881130f6 https://github.com/zephyrproject-rtos/edtt
 * fatfs              94fcd6bfb3801ac0a5e12ea2f52187e0a688b90e https://github.com/zephyrproject-rtos/fatfs
 * hal_nordic         a42b016d7c7610489f5f8c79773fedc05ba352ee https://github.com/zephyrproject-rtos/hal_nordic
 * hal_st             575de9d461aa6f430cf62c58a053675377e700f3 https://github.com/zephyrproject-rtos/hal_st
 * libmetal           f237c9d420a51cc43bc37d744e41191ad613f348 https://github.com/zephyrproject-rtos/libmetal
 * littlefs           33509ed9c3d369cdb9d909cd40c5eea8f64a902c https://github.com/zephyrproject-rtos/littlefs
 * loramac-node       12019623bbad9eb54fe51066847a7cbd4b4eac57 https://github.com/zephyrproject-rtos/loramac-node
 * lvgl               783c1f78c8e39751fe89d0883c8bce7336f55e94 https://github.com/zephyrproject-rtos/lvgl
 * lz4                8e303c264fc21c2116dc612658003a22e933124d https://github.com/zephyrproject-rtos/lz4
 * mbedtls            3e3e58a92de76069730c63e0d524f40fea948a61 https://github.com/zephyrproject-rtos/mbedtls
 * mipi-sys-t         75e671550ac1acb502f315fe4952514dc73f7bfb https://github.com/zephyrproject-rtos/mipi-sys-t
 * nanopb             d148bd26718e4c10414f07a7eb1bd24c62e56c5d https://github.com/zephyrproject-rtos/nanopb
 * net-tools          f49bd1354616fae4093bf36e5eaee43c51a55127 https://github.com/zephyrproject-rtos/net-tools
 * nrf_hw_models      b8cea37dbdc8fc58cc14b4e19fa850877a9da520 https://github.com/zephyrproject-rtos/nrf_hw_models
 * open-amp           cfd050ff38a9d028dc211690b2ec35971128e45e https://github.com/zephyrproject-rtos/open-amp
 * openthread         41bc49da49736fbdfdfa231f7b2311f29dcc4979 https://github.com/zephyrproject-rtos/openthread
 * segger             3a52ab222133193802d3c3b4d21730b9b1f1d2f6 https://github.com/zephyrproject-rtos/segger
 * tinycbor           40daca97b478989884bffb5226e9ab73ca54b8c4 https://github.com/zephyrproject-rtos/tinycbor
 * tinycrypt          3e9a49d2672ec01435ffbf0d788db6d95ef28de0 https://github.com/zephyrproject-rtos/tinycrypt
 * TraceRecorderSource 36c577727642457b0db7274298a4b96558374832 https://github.com/zephyrproject-rtos/TraceRecorderSource
 * tf-m-tests         52814181f0fde6d1422fac204d42cde30c62e40e https://github.com/zephyrproject-rtos/tf-m-tests
 * psa-arch-tests     186cba2543dff73d0cda5509d26f02a0b39ee66e https://github.com/zephyrproject-rtos/psa-arch-tests
 * zscilib            12bfe3f0a9fcbfe3edab7eabc9678b6c62875d34 https://github.com/zephyrproject-rtos/zscilib
 */


/** ZBOSS build tag */
#define ZBOSS_BUILD_TAG "zoi_release-3.11.1.0"

/** ZBOSS platform build tag */
#define ZBOSS_PLATFORM_BUILD_TAG "v3.11.1.0+v5.1.1"

/** ZBOSS build date (UTC) */
#define ZBOSS_BUILD_DATE 20220128

/** ZBOSS build time (UTC) */
#define ZBOSS_BUILD_TIME 115808


#endif /* ZBOSS_BUILD_INFO_H__ */