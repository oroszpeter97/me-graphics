#include "core/LightManager.h"
#include <iostream>

LightManager::LightManager() {
    SetDirectionalLightDirection(glm::vec3(-0.2f, -1.0f, -0.3f));
    SetDirectionalLightColor(glm::vec3(1.0f, 1.0f, 1.0f));
    std::cout << "LightingManager created" << std::endl;
}

void LightManager::SetCameraPosition(glm::vec3 position) {
    camera.Position = position;
}

void LightManager::SetDirectionalLightDirection(glm::vec3 direction) {
    directionalLightDirection = direction;
}

void LightManager::SetDirectionalLightColor(glm::vec3 color) {
    directionalLightColor = color;
}

void LightManager::SetProjection(glm::mat4 projection) {
    this->projection = projection;
}

void LightManager::SetView(glm::mat4 view) {
    this->view = view;
}

glm::vec3 LightManager::GetCameraPosition() {
    return camera.Position;
}

glm::vec3 LightManager::GetDirectionalLightDirection() {
    return directionalLightDirection;
}

glm::vec3 LightManager::GetDirectionalLightColor() {
    return directionalLightColor;
}

glm::mat4 LightManager::GetProjection() {
    return projection;
}

glm::mat4 LightManager::GetView() {
    return view;
}