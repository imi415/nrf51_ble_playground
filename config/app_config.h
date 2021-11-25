#ifndef APP_CONFIG_H
#define APP_CONFIG_H

/* Define your App config here */

/* BLE config */
#define BLE_ADVERTISING_ENABLED 1
#define PEER_MANAGER_ENABLED    1

/* GPIOTE config */
#define GPIOTE_ENABLED                        1
#define GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 4 /* !!IMPORTANT!! */

/* Button config */
#define BUTTON_ENABLED 1

/* CRC16 config */
#define CRC16_ENABLED 1

/* Flash Data Storage (FDS) config */
#define FDS_ENABLED 1

/* Flash Storage config */
#define FSTORAGE_ENABLED 1

/* Logging config */
#define NRF_LOG_ENABLED       1
#define NRF_LOG_DEFAULT_LEVEL 4
#define NRF_LOG_USES_COLORS   1
#define NRF_LOG_COLOR_DEFAULT 3
#define NRF_LOG_WARNING_COLOR 4
#define NRF_LOG_ERROR_COLOR   2

#endif