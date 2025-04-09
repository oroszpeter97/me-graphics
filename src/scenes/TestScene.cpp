#include "scenes/TestScene.h"

#include "prefabs/Backpack.h"
#include <iostream>

void TestScene::Initialize() {
    // Add game objects to the scene
    gameObjects.push_back(new Backpack(lightManager));

    // Initialize all game objects
    for (auto& gameObject : gameObjects) {
        gameObject->Initialize();
    }
}

void TestScene::Update(float deltaTime) {
    // Update all game objects
    for (auto& gameObject : gameObjects) {
        gameObject->Update(deltaTime);
    }
}

void TestScene::Render() {
    // Render all game objects
    for (auto& gameObject : gameObjects) {
        gameObject->Render();
    }
}