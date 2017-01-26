#ifndef __LGAI_MODEL_STATE_H__
#define __LGAI_MODEL_STATE_H__

class Troll;

class TrollState
{
public:
    virtual void execute(Troll *troll);
};

class Troll
{
    TrollState* m_state;

public:

};

#endif // __LGAI_MODEL_STATE_H__
