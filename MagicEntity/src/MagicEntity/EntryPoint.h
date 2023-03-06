#pragma once

//#include "Application.h"

#ifdef ME_PLATFORM_WINDOWS

extern MagicEntity::Application* MagicEntity::CreateApplication();

int main(int argc, char** argv)
{
    auto app = MagicEntity::CreateApplication();
    app->Run();
    delete app;
}

#endif