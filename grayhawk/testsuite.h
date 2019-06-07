/** @file
 *    @brief MAVLink comm protocol testsuite generated from grayhawk.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef GRAYHAWK_TESTSUITE_H
#define GRAYHAWK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_standard(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_grayhawk(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_standard(system_id, component_id, last_msg);
    mavlink_test_grayhawk(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"
#include "../standard/testsuite.h"


static void mavlink_test_gh_network_switch_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gh_network_switch_status_t packet_in = {
        { 5, 6, 7, 8, 9, 10 },151,218,29,96,163,230,41
    };
    mavlink_gh_network_switch_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.port1_status = packet_in.port1_status;
        packet1.port2_status = packet_in.port2_status;
        packet1.port3_status = packet_in.port3_status;
        packet1.port4_status = packet_in.port4_status;
        packet1.port5_status = packet_in.port5_status;
        packet1.port6_status = packet_in.port6_status;
        packet1.port7_status = packet_in.port7_status;
        
        mav_array_memcpy(packet1.mac_address, packet_in.mac_address, sizeof(uint8_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gh_network_switch_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gh_network_switch_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gh_network_switch_status_pack(system_id, component_id, &msg , packet1.mac_address , packet1.port1_status , packet1.port2_status , packet1.port3_status , packet1.port4_status , packet1.port5_status , packet1.port6_status , packet1.port7_status );
    mavlink_msg_gh_network_switch_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gh_network_switch_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mac_address , packet1.port1_status , packet1.port2_status , packet1.port3_status , packet1.port4_status , packet1.port5_status , packet1.port6_status , packet1.port7_status );
    mavlink_msg_gh_network_switch_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gh_network_switch_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gh_network_switch_status_send(MAVLINK_COMM_1 , packet1.mac_address , packet1.port1_status , packet1.port2_status , packet1.port3_status , packet1.port4_status , packet1.port5_status , packet1.port6_status , packet1.port7_status );
    mavlink_msg_gh_network_switch_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_grayhawk(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_gh_network_switch_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GRAYHAWK_TESTSUITE_H
