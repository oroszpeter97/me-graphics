#ifndef TESTSCENE_H
#define TESTSCENE_H

#include "Scene.h"

class TestScene : public Scene {
public:
    TestScene(LightManager* lightManager) : Scene(lightManager) {};
    ~TestScene() = default;

    void OnInitialize() override;
    void OnUpdate(float deltaTime) override;
    void OnRender() override;
};

#endif