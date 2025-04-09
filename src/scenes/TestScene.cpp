#include "scenes/TestScene.h"

#include "prefabs/Backpack.h"
#include <iostream>

void TestScene::OnInitialize() {
    // Add game objects to the scene
    gameObjects.push_back(new Backpack(lightManager));
}

void TestScene::OnUpdate(float deltaTime) {
    
}

void TestScene::OnRender() {
    
}