#include "Scene.h"

Scene::Scene(LightManager* lightManager)
{
    this->lightManager = lightManager;
}

void Scene::Initialize()
{
    OnInitialize();

    // Initialize all game objects
    for (auto& gameObject : gameObjects) {
        gameObject->Initialize();
    }
}

void Scene::Update(float deltaTime)
{
    OnUpdate(deltaTime);

    // Update all game objects
    for (auto& gameObject : gameObjects) {
        gameObject->Update(deltaTime);
    }
}

void Scene::Render()
{
    OnRender();

    // Render all game objects
    for (auto& gameObject : gameObjects) {
        gameObject->Render();
    }
}