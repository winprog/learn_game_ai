#include "model/agent.h"

void Agent::update(AgentState state)
{
    switch (state)
    {
        case AGENT_STATE_RUNAWAY:
            evadeEnemy();
            if (safe())
            {
                change(AGENT_STATE_PETROL);
            }
            break;

        case AGENT_STATE_PATROL:
            followPatrolPath();
            if (threatened())
            {
                if (strongThanEmemy())
                {
                    change(AGENT_STATE_ATTACK);
                }
                else
                {
                    change(AGENT_STATE_RUNAWAY);
                }
            }
            break;

        case AGET_STATE_ATTACK:
            if (strongThanEnemy())
            {
                baseEnemyOverHead();
            }
            else
            {
                change(AGENT_STATE_RUNAWAY);
            }
            break;
    }
}
