#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include <GameObject.h>
#include <LightManager.h>

class Scene {
public:
    Scene(LightManager* lightManager);
    virtual ~Scene() = default;

    void Initialize(); 
    void Update(float deltaTime); 
    void Render(); 

protected:
    std::vector<GameObject*> gameObjects;
    LightManager* lightManager;

    virtual void OnInitialize() = 0; 
    virtual void OnUpdate(float deltaTime) = 0; 
    virtual void OnRender() = 0; 

    void AddGameObject(GameObject* gameObject); // Helper method for internal logic
};

#endif