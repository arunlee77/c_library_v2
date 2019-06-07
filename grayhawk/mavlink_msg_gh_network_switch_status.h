#pragma once
// MESSAGE GH_NETWORK_SWITCH_STATUS PACKING

#define MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS 48000

MAVPACKED(
typedef struct __mavlink_gh_network_switch_status_t {
 uint8_t mac_address[6]; /*<  Switch MAC address*/
 uint8_t port1_status; /*<  Port 1 status*/
 uint8_t port2_status; /*<  Port 2 status*/
 uint8_t port3_status; /*<  Port 3 status*/
 uint8_t port4_status; /*<  Port 4 status*/
 uint8_t port5_status; /*<  Port 5 status*/
 uint8_t port6_status; /*<  Port 6 status*/
 uint8_t port7_status; /*<  Port 7 status*/
}) mavlink_gh_network_switch_status_t;

#define MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN 13
#define MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN 13
#define MAVLINK_MSG_ID_48000_LEN 13
#define MAVLINK_MSG_ID_48000_MIN_LEN 13

#define MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC 172
#define MAVLINK_MSG_ID_48000_CRC 172

#define MAVLINK_MSG_GH_NETWORK_SWITCH_STATUS_FIELD_MAC_ADDRESS_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GH_NETWORK_SWITCH_STATUS { \
    48000, \
    "GH_NETWORK_SWITCH_STATUS", \
    8, \
    {  { "mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 0, offsetof(mavlink_gh_network_switch_status_t, mac_address) }, \
         { "port1_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_gh_network_switch_status_t, port1_status) }, \
         { "port2_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_gh_network_switch_status_t, port2_status) }, \
         { "port3_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gh_network_switch_status_t, port3_status) }, \
         { "port4_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_gh_network_switch_status_t, port4_status) }, \
         { "port5_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_gh_network_switch_status_t, port5_status) }, \
         { "port6_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_gh_network_switch_status_t, port6_status) }, \
         { "port7_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_gh_network_switch_status_t, port7_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GH_NETWORK_SWITCH_STATUS { \
    "GH_NETWORK_SWITCH_STATUS", \
    8, \
    {  { "mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 0, offsetof(mavlink_gh_network_switch_status_t, mac_address) }, \
         { "port1_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_gh_network_switch_status_t, port1_status) }, \
         { "port2_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_gh_network_switch_status_t, port2_status) }, \
         { "port3_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gh_network_switch_status_t, port3_status) }, \
         { "port4_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_gh_network_switch_status_t, port4_status) }, \
         { "port5_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_gh_network_switch_status_t, port5_status) }, \
         { "port6_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_gh_network_switch_status_t, port6_status) }, \
         { "port7_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_gh_network_switch_status_t, port7_status) }, \
         } \
}
#endif

/**
 * @brief Pack a gh_network_switch_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mac_address  Switch MAC address
 * @param port1_status  Port 1 status
 * @param port2_status  Port 2 status
 * @param port3_status  Port 3 status
 * @param port4_status  Port 4 status
 * @param port5_status  Port 5 status
 * @param port6_status  Port 6 status
 * @param port7_status  Port 7 status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gh_network_switch_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *mac_address, uint8_t port1_status, uint8_t port2_status, uint8_t port3_status, uint8_t port4_status, uint8_t port5_status, uint8_t port6_status, uint8_t port7_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN];
    _mav_put_uint8_t(buf, 6, port1_status);
    _mav_put_uint8_t(buf, 7, port2_status);
    _mav_put_uint8_t(buf, 8, port3_status);
    _mav_put_uint8_t(buf, 9, port4_status);
    _mav_put_uint8_t(buf, 10, port5_status);
    _mav_put_uint8_t(buf, 11, port6_status);
    _mav_put_uint8_t(buf, 12, port7_status);
    _mav_put_uint8_t_array(buf, 0, mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN);
#else
    mavlink_gh_network_switch_status_t packet;
    packet.port1_status = port1_status;
    packet.port2_status = port2_status;
    packet.port3_status = port3_status;
    packet.port4_status = port4_status;
    packet.port5_status = port5_status;
    packet.port6_status = port6_status;
    packet.port7_status = port7_status;
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
}

/**
 * @brief Pack a gh_network_switch_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mac_address  Switch MAC address
 * @param port1_status  Port 1 status
 * @param port2_status  Port 2 status
 * @param port3_status  Port 3 status
 * @param port4_status  Port 4 status
 * @param port5_status  Port 5 status
 * @param port6_status  Port 6 status
 * @param port7_status  Port 7 status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gh_network_switch_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *mac_address,uint8_t port1_status,uint8_t port2_status,uint8_t port3_status,uint8_t port4_status,uint8_t port5_status,uint8_t port6_status,uint8_t port7_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN];
    _mav_put_uint8_t(buf, 6, port1_status);
    _mav_put_uint8_t(buf, 7, port2_status);
    _mav_put_uint8_t(buf, 8, port3_status);
    _mav_put_uint8_t(buf, 9, port4_status);
    _mav_put_uint8_t(buf, 10, port5_status);
    _mav_put_uint8_t(buf, 11, port6_status);
    _mav_put_uint8_t(buf, 12, port7_status);
    _mav_put_uint8_t_array(buf, 0, mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN);
#else
    mavlink_gh_network_switch_status_t packet;
    packet.port1_status = port1_status;
    packet.port2_status = port2_status;
    packet.port3_status = port3_status;
    packet.port4_status = port4_status;
    packet.port5_status = port5_status;
    packet.port6_status = port6_status;
    packet.port7_status = port7_status;
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
}

/**
 * @brief Encode a gh_network_switch_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gh_network_switch_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gh_network_switch_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gh_network_switch_status_t* gh_network_switch_status)
{
    return mavlink_msg_gh_network_switch_status_pack(system_id, component_id, msg, gh_network_switch_status->mac_address, gh_network_switch_status->port1_status, gh_network_switch_status->port2_status, gh_network_switch_status->port3_status, gh_network_switch_status->port4_status, gh_network_switch_status->port5_status, gh_network_switch_status->port6_status, gh_network_switch_status->port7_status);
}

/**
 * @brief Encode a gh_network_switch_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gh_network_switch_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gh_network_switch_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gh_network_switch_status_t* gh_network_switch_status)
{
    return mavlink_msg_gh_network_switch_status_pack_chan(system_id, component_id, chan, msg, gh_network_switch_status->mac_address, gh_network_switch_status->port1_status, gh_network_switch_status->port2_status, gh_network_switch_status->port3_status, gh_network_switch_status->port4_status, gh_network_switch_status->port5_status, gh_network_switch_status->port6_status, gh_network_switch_status->port7_status);
}

/**
 * @brief Send a gh_network_switch_status message
 * @param chan MAVLink channel to send the message
 *
 * @param mac_address  Switch MAC address
 * @param port1_status  Port 1 status
 * @param port2_status  Port 2 status
 * @param port3_status  Port 3 status
 * @param port4_status  Port 4 status
 * @param port5_status  Port 5 status
 * @param port6_status  Port 6 status
 * @param port7_status  Port 7 status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gh_network_switch_status_send(mavlink_channel_t chan, const uint8_t *mac_address, uint8_t port1_status, uint8_t port2_status, uint8_t port3_status, uint8_t port4_status, uint8_t port5_status, uint8_t port6_status, uint8_t port7_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN];
    _mav_put_uint8_t(buf, 6, port1_status);
    _mav_put_uint8_t(buf, 7, port2_status);
    _mav_put_uint8_t(buf, 8, port3_status);
    _mav_put_uint8_t(buf, 9, port4_status);
    _mav_put_uint8_t(buf, 10, port5_status);
    _mav_put_uint8_t(buf, 11, port6_status);
    _mav_put_uint8_t(buf, 12, port7_status);
    _mav_put_uint8_t_array(buf, 0, mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS, buf, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
#else
    mavlink_gh_network_switch_status_t packet;
    packet.port1_status = port1_status;
    packet.port2_status = port2_status;
    packet.port3_status = port3_status;
    packet.port4_status = port4_status;
    packet.port5_status = port5_status;
    packet.port6_status = port6_status;
    packet.port7_status = port7_status;
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS, (const char *)&packet, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
#endif
}

/**
 * @brief Send a gh_network_switch_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gh_network_switch_status_send_struct(mavlink_channel_t chan, const mavlink_gh_network_switch_status_t* gh_network_switch_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gh_network_switch_status_send(chan, gh_network_switch_status->mac_address, gh_network_switch_status->port1_status, gh_network_switch_status->port2_status, gh_network_switch_status->port3_status, gh_network_switch_status->port4_status, gh_network_switch_status->port5_status, gh_network_switch_status->port6_status, gh_network_switch_status->port7_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS, (const char *)gh_network_switch_status, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gh_network_switch_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *mac_address, uint8_t port1_status, uint8_t port2_status, uint8_t port3_status, uint8_t port4_status, uint8_t port5_status, uint8_t port6_status, uint8_t port7_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 6, port1_status);
    _mav_put_uint8_t(buf, 7, port2_status);
    _mav_put_uint8_t(buf, 8, port3_status);
    _mav_put_uint8_t(buf, 9, port4_status);
    _mav_put_uint8_t(buf, 10, port5_status);
    _mav_put_uint8_t(buf, 11, port6_status);
    _mav_put_uint8_t(buf, 12, port7_status);
    _mav_put_uint8_t_array(buf, 0, mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS, buf, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
#else
    mavlink_gh_network_switch_status_t *packet = (mavlink_gh_network_switch_status_t *)msgbuf;
    packet->port1_status = port1_status;
    packet->port2_status = port2_status;
    packet->port3_status = port3_status;
    packet->port4_status = port4_status;
    packet->port5_status = port5_status;
    packet->port6_status = port6_status;
    packet->port7_status = port7_status;
    mav_array_memcpy(packet->mac_address, mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS, (const char *)packet, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE GH_NETWORK_SWITCH_STATUS UNPACKING


/**
 * @brief Get field mac_address from gh_network_switch_status message
 *
 * @return  Switch MAC address
 */
static inline uint16_t mavlink_msg_gh_network_switch_status_get_mac_address(const mavlink_message_t* msg, uint8_t *mac_address)
{
    return _MAV_RETURN_uint8_t_array(msg, mac_address, 6,  0);
}

/**
 * @brief Get field port1_status from gh_network_switch_status message
 *
 * @return  Port 1 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port1_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field port2_status from gh_network_switch_status message
 *
 * @return  Port 2 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port2_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field port3_status from gh_network_switch_status message
 *
 * @return  Port 3 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port3_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field port4_status from gh_network_switch_status message
 *
 * @return  Port 4 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port4_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field port5_status from gh_network_switch_status message
 *
 * @return  Port 5 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port5_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field port6_status from gh_network_switch_status message
 *
 * @return  Port 6 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port6_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field port7_status from gh_network_switch_status message
 *
 * @return  Port 7 status
 */
static inline uint8_t mavlink_msg_gh_network_switch_status_get_port7_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a gh_network_switch_status message into a struct
 *
 * @param msg The message to decode
 * @param gh_network_switch_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_gh_network_switch_status_decode(const mavlink_message_t* msg, mavlink_gh_network_switch_status_t* gh_network_switch_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gh_network_switch_status_get_mac_address(msg, gh_network_switch_status->mac_address);
    gh_network_switch_status->port1_status = mavlink_msg_gh_network_switch_status_get_port1_status(msg);
    gh_network_switch_status->port2_status = mavlink_msg_gh_network_switch_status_get_port2_status(msg);
    gh_network_switch_status->port3_status = mavlink_msg_gh_network_switch_status_get_port3_status(msg);
    gh_network_switch_status->port4_status = mavlink_msg_gh_network_switch_status_get_port4_status(msg);
    gh_network_switch_status->port5_status = mavlink_msg_gh_network_switch_status_get_port5_status(msg);
    gh_network_switch_status->port6_status = mavlink_msg_gh_network_switch_status_get_port6_status(msg);
    gh_network_switch_status->port7_status = mavlink_msg_gh_network_switch_status_get_port7_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN? msg->len : MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN;
        memset(gh_network_switch_status, 0, MAVLINK_MSG_ID_GH_NETWORK_SWITCH_STATUS_LEN);
    memcpy(gh_network_switch_status, _MAV_PAYLOAD(msg), len);
#endif
}
