﻿#pragma once

#include "Devices/bluetoothdevicetestdata.h"
#include "npecablebike.h"

class NPECableBikeTestData : public BluetoothDeviceTestData {
protected:
    NPECableBikeTestData(std::string testName) : BluetoothDeviceTestData(testName) {}
public:
    deviceType get_expectedDeviceType() const override { return deviceType::NPECableBike; }

    bool get_isExpectedDevice(bluetoothdevice * detectedDevice) const override {
        return dynamic_cast<npecablebike*>(detectedDevice)!=nullptr;
    }
};

class NPECableBike1TestData : public NPECableBikeTestData {

public:
    NPECableBike1TestData() : NPECableBikeTestData("NPE Cable Bike") {
        this->addDeviceName(">CABLE", comparison::StartsWithIgnoreCase);
        this->addDeviceName("MD", comparison::StartsWithIgnoreCase, 7);
    }

};

class NPECableBike2TestData : public NPECableBikeTestData {
protected:
    bool configureSettings(DeviceDiscoveryInfo& info, bool enable) const override {
        // don't allow this device if the Flywheel bike is enabled.
        info.flywheel_life_fitness_ic8 = !enable;
        return true;
    }
public:
    NPECableBike2TestData() : NPECableBikeTestData("NPECable (excluding Flywheel Life Fitness IC8)") {
        // BIKE 1, BIKE 2, BIKE 3...
        this->addDeviceName("BIKE", comparison::StartsWithIgnoreCase, 6);

        // put in a name that's too long.
        this->addInvalidDeviceName("BIKE567", comparison::IgnoreCase);
    }
};
