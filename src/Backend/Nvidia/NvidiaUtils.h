// Copyright (c) 2019, Zpalmtree
//
// Please see the included LICENSE file for more information.

#pragma once

#include <tuple>
#include <string>
#include <vector>

int getDeviceCount();

std::string getDeviceName(uint16_t deviceId);

std::vector<std::tuple<std::string, bool, int>> getNvidiaDevicesActual();

void printNvidiaHeader();
