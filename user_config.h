/* 
 * user_config.h
 * 
 * User specific configuration parameters
 */

#define PROJECT                "rileyhouse"     // PROJECT is used as the default topic delimiter and OTA file name
#define CFG_HOLDER             0x20160520   // Change this value to load default configurations

// Wifi
#define STA_SSID               ""      // Wifi SSID
#define STA_PASS               ""  // Wifi password
#define WIFI_HOSTNAME          "esp-%06x-%s"     // Expands to esp-<last 6 chars of MAC address>-<MQTT_TOPIC>

// Syslog
#define SYS_LOG_HOST           "192.168.1.200"
#define SYS_LOG_PORT           514
#define SYS_LOG_LEVEL          LOG_LEVEL_NONE
#define SERIAL_LOG_LEVEL       LOG_LEVEL_INFO

// Ota
#if (ARDUINO >= 168)
  #define OTA_URL              "http://192.168.1.200:80/files/sonoff/firmware/" PROJECT ".ino.bin"
#else
  #define OTA_URL              "http://192.168.1.200:80/files/sonoff/firmware" PROJECT ".cpp.bin"
#endif

// MQTT
#define MQTT_HOST              "192.168.1.200"
#define MQTT_PORT              1883

#define MQTT_CLIENT_ID         "DVES_%06X"  // Also fall back topic using Chip Id = last 6 characters of MAC address
#define MQTT_USER              "DVES_USER"
#define MQTT_PASS              "DVES_PASS"

#define SUB_PREFIX             "cmnd"       // Sonoff devices subscribe to:- cmnd/MQTT_TOPIC and cmnd/MQTT_GRPTOPIC
#define PUB_PREFIX             "stat"       // Sonoff devices publish to:- stat/MQTT_TOPIC
#define MQTT_TOPIC             PROJECT
#define MQTT_GRPTOPIC          PROJECT"s"   // Group topic

// Time - Up to three NTP servers in your region
#define NTP_SERVER1            "pool.ntp.org"
#define NTP_SERVER2            "nl.pool.ntp.org"
#define NTP_SERVER3            "0.nl.pool.ntp.org"

// Time - Start Daylight Saving Time and timezone offset from UTC in minutes
#define TIME_DST               Last, Sun, Mar, 2, +120  // Last sunday in march at 02:00 +120 minutes

// Time - Start Standard Time and timezone offset from UTC in minutes
#define TIME_STD               Last, Sun, Oct, 3, +60   // Last sunday in october 02:00 +60 minutes

// Application
#define MQTT_SUBTOPIC          "POWER"
#define APP_TIMEZONE           1            // +1 hour (Amsterdam) (-12 .. 12 = hours from UTC, 99 = TIME_DST/TIME_STD usage)
#define APP_POWER              0            // Saved power state Off
#define APP_LEDSTATE           1            // Do not show power state (1 = Show power state)

