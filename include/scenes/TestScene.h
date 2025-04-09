#ifndef TESTSCENE_H
#define TESTSCENE_H

#include "Scene.h"

class TestScene : public Scene {
public:
    TestScene(LightManager* lightManager) : Scene(lightManager) {};
    ~TestScene() = default;

    void Initialize() override;
    void Update(float deltaTime) override;
    void Render() override;
};

#endif