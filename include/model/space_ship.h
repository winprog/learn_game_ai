#ifndef __LGAI_MODEL_SPACE_SHIP_H__
#define __LGAI_MODEL_SPACE_SHIP_H__

#include "math/vector.h"

class SpaceShip
{
    vector m_pos;
    vector m_speed;
    float m_mass;

public:
    void update(float deltaTime, float force);
};

#endif // __LGAI_MODEL_SPACE_SHIP_H__
