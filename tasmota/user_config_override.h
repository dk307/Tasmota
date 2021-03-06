#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is included
// #warning **** user_config_override.h: Using Settings from this File ****

#define MODULE                 WEMOS

// not sure if this does anything
#ifndef USE_UFILESYS
#define USE_UFILESYS
#endif

#ifndef MAXBUTTONS
#define MAXBUTTONS 16
#endif

#ifndef USE_SCRIPT
#define USE_SCRIPT  // adds about 17k flash size, variable ram size
#endif

#ifndef USE_BUTTON_EVENT
#define USE_BUTTON_EVENT
#endif

#ifndef USE_SCRIPT_JSON_EXPORT
#define USE_SCRIPT_JSON_EXPORT
#endif

#ifndef USE_SCRIPT_SUB_COMMAND
#define USE_SCRIPT_SUB_COMMAND
#endif
 
#ifndef USE_SCRIPT_STATUS
#define USE_SCRIPT_STATUS
#endif

#ifndef SCRIPT_POWER_SECTION
#define SCRIPT_POWER_SECTION
#endif

#ifndef USE_SCRIPT_WEB_DISPLAY
#define USE_SCRIPT_WEB_DISPLAY
#endif

#ifndef SCRIPT_FULL_WEBPAGE
#define SCRIPT_FULL_WEBPAGE
#endif

#ifndef USE_TOUCH_BUTTONS
#define USE_TOUCH_BUTTONS
#endif

#ifndef USE_WEBSEND_RESPONSE
#define USE_WEBSEND_RESPONSE
#endif

#ifndef USE_SCRIPT_FATFS_EXT
#define USE_SCRIPT_FATFS_EXT
#endif

#ifndef USE_SCRIPT_FATFS
#define USE_SCRIPT_FATFS -1
#endif

#ifndef USE_SCRIPT_GLOBVARS
#define USE_SCRIPT_GLOBVARS
#endif

#ifndef USE_GOOGLE_CHARTS
#define USE_GOOGLE_CHARTS
#endif

#ifdef USE_RULES
#undef USE_RULES
#endif 

#undef GUI_SHOW_HOSTNAME
#define GUI_SHOW_HOSTNAME      true

#undef APP_TIMEZONE
#define APP_TIMEZONE           8

#undef TEMP_CONVERSION
#define TEMP_CONVERSION        true

#undef OTA_URL
#define OTA_URL ""

#undef TELE_PERIOD
#define TELE_PERIOD  60

#undef TELE_ON_POWER
#define TELE_ON_POWER true

#undef WIFI_CONFIG_TOOL
#define WIFI_CONFIG_TOOL WIFI_MANAGER_RESET_ONLY

////////////////////
#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ
#endif

#ifdef USE_HOME_ASSISTANT
#undef USE_HOME_ASSISTANT
#endif

#ifndef USE_JAVASCRIPT_ES6
#define USE_JAVASCRIPT_ES6
#endif
 
#ifdef USE_EMULATION_HUE
#undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
#undef USE_EMULATION_WEMO
#endif

#ifdef USE_SUNRISE
#undef USE_SUNRISE
#endif

#ifndef USE_EXPRESSION
#define USE_EXPRESSION
#endif

#ifndef SUPPORT_IF_STATEMENT
#define SUPPORT_IF_STATEMENT
#endif

#ifndef SUPPORT_MQTT_EVENT
#define SUPPORT_MQTT_EVENT
#endif

#ifndef USE_WEBSEND_RESPONSE
#define USE_WEBSEND_RESPONSE
#endif

#ifdef USE_DISCOVERY
#undef USE_DISCOVERY
#endif

#ifdef WEBSERVER_ADVERTISE
#undef WEBSERVER_ADVERTISE
#endif

#ifdef MQTT_HOST_DISCOVERY
#undef MQTT_HOST_DISCOVERY
#endif

///////////////////////////////
#ifdef ROTARY_V1
#undef ROTARY_V1
#endif

#ifdef USE_SONOFF_RF
#undef USE_SONOFF_RF
#endif

#ifdef USE_RF_FLASH
#undef USE_RF_FLASH
#endif

#ifdef USE_SONOFF_SC
#undef USE_SONOFF_SC
#endif

#ifdef USE_TUYA_MCU
#undef USE_TUYA_MCU
#endif

#ifdef USE_ARMTRONIX_DIMMERS
#undef USE_ARMTRONIX_DIMMERS
#endif

#ifdef USE_PS_16_DZ
#undef USE_PS_16_DZ
#endif

#ifdef USE_SONOFF_IFAN
#undef USE_SONOFF_IFAN
#endif

#ifdef USE_BUZZER
#undef USE_BUZZER
#endif

#ifdef USE_ARILUX_RF
#undef USE_ARILUX_RF
#endif

#ifdef USE_SHUTTER
#undef USE_SHUTTER
#endif

#ifdef USE_DEEPSLEEP
#undef USE_DEEPSLEEP
#endif

#ifdef USE_EXS_DIMMER
#undef USE_EXS_DIMMER
#endif

#ifdef USE_PWM_DIMMER
#undef USE_PWM_DIMMER
#endif

#ifdef USE_SONOFF_D1
#undef USE_SONOFF_D1
#endif

#ifdef USE_COUNTER
#undef USE_COUNTER
#endif

#ifdef USE_LIGHT
#undef USE_LIGHT
#endif

//sensors
#ifdef USE_WS2812
#undef USE_WS2812
#endif

#ifdef USE_WS2812_DMA
#undef USE_WS2812_DMA
#endif

#ifdef USE_MY92X1
#undef USE_MY92X1
#endif

#ifdef USE_SM16716
#undef USE_SM16716
#endif

#ifdef USE_SM2135
#undef USE_SM2135
#endif

#ifdef USE_SONOFF_L1
#undef USE_SONOFF_L1
#endif

#ifdef USE_ELECTRIQ_MOODL
#undef USE_ELECTRIQ_MOODL
#endif

#ifdef USE_ENERGY_SENSOR
#define USE_ENERGY_SENSOR
#endif

#ifdef USE_PZEM004T
#undef USE_PZEM004T
#endif

#ifdef USE_PZEM_AC
#undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
#undef USE_PZEM_DC
#endif

#ifdef USE_MCP39F501
#undef USE_MCP39F501
#endif

#ifdef USE_DS18x20
#undef USE_DS18x20
#endif

#ifdef USE_ADE7953
#undef USE_ADE7953
#endif

#ifdef USE_SERIAL_BRIDGE
#undef USE_SERIAL_BRIDGE
#endif

#ifndef USE_DHT
#define USE_DHT
#endif


#ifndef USE_DHT12
#define USE_DHT12
#endif

#ifndef USE_I2C
#define USE_I2C
#endif

#ifndef USE_BH1750
#define USE_BH1750
#endif

#ifndef USE_CHIRP
#define USE_CHIRP
#endif

#ifndef ONLY_CHIRP_MOISTURE
#define ONLY_CHIRP_MOISTURE
#endif

#ifndef USE_DS18x20
#define USE_DS18x20
#endif

#ifdef USE_IR_REMOTE
#undef USE_IR_REMOTE
#endif

#ifdef USE_IR_REMOTE_FULL
#undef USE_IR_REMOTE_FULL
#endif

//display
#ifndef USE_DISPLAY
#define USE_DISPLAY
#endif

#ifdef USE_DISPLAY_MODES1TO5
#undef USE_DISPLAY_MODES1TO5
#endif

#ifndef USE_DISPLAY_SSD1306
#define USE_DISPLAY_SSD1306
#endif

#ifndef SHOW_SPLASH
#define SHOW_SPLASH
#endif

// See Voltage in UI
#ifdef USE_ADC_VCC
#undef USE_ADC_VCC
#endif

#ifndef USE_MQTT_TLS 
#define USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
//  #define USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use.  (+2.2k code, +1.9k mem during connection handshake)
                                                   // This includes the LetsEncrypt CA in tasmota_ca.ino for verifying server certificates
//  #define USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
#endif

 #endif  // _USER_CONFIG_OVERRIDE_H_
