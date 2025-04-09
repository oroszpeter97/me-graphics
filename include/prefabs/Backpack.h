#ifndef BACKPACK_H
#define BACKPACK_H

#include <GameObject.h>
#include <LightManager.h>
#include <Shader.h>
#include <Model.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Backpack : public GameObject {
public:
    Backpack(LightManager* lightManager);
    ~Backpack();

    void Initialize() override;
    void Update(float deltaTime) override;
    void Render() override;

private:
    LightManager* lightManager;
    Shader shader;
    Model model;
};

#endif