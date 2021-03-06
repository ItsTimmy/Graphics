#pragma once

#include <GL/gl3w.h>
#include <glm/glm.hpp>

class Application
{
public:
    Application();
    ~Application();

    void Draw(float time);

private:
    GLuint m_program;
    GLuint m_attrib_pos_a;
    GLuint m_attrib_pos_b;
    GLuint m_attrib_color;
    GLuint m_uniform_mix;
    GLuint m_uniform_rotation;

    unsigned int m_vertexBufferObject;
    unsigned int m_indexBufferObject;

    struct vertex {
        glm::vec2 pos_a;
        glm::vec2 pos_b;
        glm::vec3 color;
    } __attribute__((packed));
};
