#include "model/vehicle.h"

void Vehicle::update(float deltaTime)
{
    m_pos += m_speed * deltaTime;
}

void Vehicle::update()
{
    m_post += m_speed;
}
