#include "model/space_ship.h"

void SpaceShip::update(float deltaTime, float force)
{
    float acceleraton = force / m_mass;
    m_speed += acceleration * deltaTime;
    m_pos += m_speed * deltaTime;
}
