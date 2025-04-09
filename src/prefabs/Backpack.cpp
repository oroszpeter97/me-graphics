#include "prefabs/Backpack.h"

#include <iostream>
#include <Shader.h>
#include <Model.h>

Backpack::Backpack(LightManager* LightManager) 
    : shader("../shaders/color_vertex_shader.glsl", "../shaders/color_fragment_shader.glsl"),
      model("../resources/models/backpack/backpack.obj"),
      lightManager(LightManager) {
}

Backpack::~Backpack() {
    std::cout << "Backpack destroyed" << std::endl;
}

void Backpack::Initialize() {
    std::cout << "Backpack initialized" << std::endl;
}

void Backpack::Update(float deltaTime) {
}

void Backpack::Render() {
    shader.use();

    // Set directional light properties
    shader.setVec3("lightDir", lightManager->GetDirectionalLightDirection());
    shader.setVec3("lightColor", lightManager->GetDirectionalLightColor());
    shader.setVec3("viewPos", lightManager->GetCameraPosition());

    shader.setMat4("projection", lightManager->GetProjection());
    shader.setMat4("view", lightManager->GetView());

    glm::mat4 transform = glm::mat4(1.0f);
    transform = glm::translate(transform, glm::vec3(0.0f, 0.0f, 0.0f)); 
    transform = glm::scale(transform, glm::vec3(1.0f, 1.0f, 1.0f));	
    shader.setMat4("model", transform);
    model.Draw(shader);

}