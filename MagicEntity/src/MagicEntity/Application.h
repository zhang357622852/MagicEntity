#pragma once

namespace MagicEntity
{
    class __declspec(dllexport) Application
    {
    public:
        Application();

        virtual  ~Application();

        void Run();
    };

    Application* CreateApplication();
}
