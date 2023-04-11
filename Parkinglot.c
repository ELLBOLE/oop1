#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity)
{
    maxCapacity = capacity;
    currentCount = 0;
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot()
{
    for (int i = 0; i < currentCount; i++)
    {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCurrentCount() const
{
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle)
{
    if (currentCount < maxCapacity)
    {
        vehicles[currentCount] = vehicle;
        currentCount++;
    }
    else
    {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id)
{
    int index = -1;
    for (int i = 0; i < currentCount; i++)
    {
        if (vehicles[i]->getID() == id)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        delete vehicles[index];
        vehicles[index] = vehicles[currentCount - 1];
        currentCount--;
    }
    else
    {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}
