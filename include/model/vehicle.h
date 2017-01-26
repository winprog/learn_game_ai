#ifndef __LGAI_MODEL_VEHICLE_H__
#define __LGAI_MODEL_VEHICLE_H__

#include "math/vector.h"

class Vehicle
{
    // position in space;
    vector m_pos;
    vector m_speed;

public:
    void update(float deltaTime);
    void update();
};

#endif // __LGAI_MODEL_VEHICLE_H__
