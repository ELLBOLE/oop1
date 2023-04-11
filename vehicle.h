#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <ctime>

class Vehicle
{
protected:
    std::time_t timeofEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const = 0;
};
#endif
