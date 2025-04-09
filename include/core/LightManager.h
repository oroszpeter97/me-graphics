#ifndef LIGHTMANAGER_H
#define LIGHTMANAGER_H

#include <glm/glm.hpp>
#include "Camera.h"

class LightManager {
public:
    Camera camera;
    glm::vec3 directionalLightDirection;
    glm::vec3 directionalLightColor;
    glm::vec3 cameraPosition;
    glm::mat4 projection;
    glm::mat4 view;

    LightManager();
    ~LightManager() = default;

    void SetCameraPosition(glm::vec3 position);
    void SetDirectionalLightDirection(glm::vec3 direction);
    void SetDirectionalLightColor(glm::vec3 color);
    void SetProjection(glm::mat4 projection);
    void SetView(glm::mat4 view);

    glm::vec3 GetCameraPosition();
    glm::vec3 GetDirectionalLightDirection();
    glm::vec3 GetDirectionalLightColor();
    glm::mat4 GetProjection();
    glm::mat4 GetView();
};

#endif