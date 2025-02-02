/***************************************************************************
  Copyright (c) 2019-2022 Lars Wessels

  This file a part of the "ESP8266 Wifi Power Meter" source code.
  https://github.com/lrswss/esp8266-wifi-power-meter

  Licensed under the MIT License. You may not use this file except in
  compliance with the License. You may obtain a copy of the License at

  https://opensource.org/licenses/MIT

***************************************************************************/

#ifndef _WLAN_H
#define _WLAN_H

#include <ESP8266WiFi.h>
#include <WiFiManager.h>

extern WiFiManager wm;

#define WIFI_AP_SSID "WifiPowerMeter"
#define WIFI_MIN_RSSI 25
#define WIFI_CONFIG_TIMEOUT_SECS 300
#define WIFI_CONNECT_TIMEOUT 30

void initWifi();

#endif
