#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
public:
    GameObject();
    virtual ~GameObject() = default;

    virtual void Initialize() = 0;
    virtual void Update(float deltaTime) = 0;
    virtual void Render() = 0;
};

#endif