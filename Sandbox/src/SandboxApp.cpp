

#include "MagicEntity.h"

class Sandbox : public MagicEntity::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};

MagicEntity::Application* MagicEntity::CreateApplication()
{
    return new Sandbox();
}