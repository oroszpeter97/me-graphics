#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include <GameObject.h>
#include <LightManager.h>

class Scene {
public:
    Scene(LightManager* lightManager);
    virtual ~Scene() = default;

    virtual void Initialize() = 0;
    virtual void Update(float deltaTime) = 0;
    virtual void Render() = 0;

protected:
    std::vector<GameObject*> gameObjects;
    LightManager* lightManager;
};

#endif