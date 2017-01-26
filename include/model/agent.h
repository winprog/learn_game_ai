#ifndef __LGAI_MODEL_AGENT_H__
#define __LGAI_MODEL_AGENT_H__

enum AgentState
{
    AGENT_STATE_TYPE_RUNAWAY,
    AGENT_STATE_TYPE_PATROL,
    AGET_STATE_TYPE_ATTACK
};

class Agent
{
public:
    void safe();
    void treatened();
    update(AgentState state);
    change(AgentState state);
    void evadeEnemy();
    void followPatrolPath();
    void baseEnemyOverHead();

};

#endif // __LGAI_MODEL_AGENT_H__
