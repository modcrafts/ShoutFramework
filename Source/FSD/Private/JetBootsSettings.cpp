#include "JetBootsSettings.h"

UJetBootsSettings::UJetBootsSettings() {
    this->JetForce = 1750.00f;
    this->AirControlSpeed = 0.15f;
    this->MaxAirSpeedZ = 1100.00f;
    this->MaxCustomMovementSpeed = 0.05f;
    this->MaxJetFuel = 50.00f;
    this->JetFuelCost = 20.00f;
    this->JetFuelRechargeRate = 30.00f;
    this->JetFuelRechargeDelay = 0.25f;
    this->OutOfFuelRechargeDelay = 1.00f;
}


