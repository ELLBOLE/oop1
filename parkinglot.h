#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot
{
private:
    int maxCapacity;
    int currentCount;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCurrentCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
};

#endif
