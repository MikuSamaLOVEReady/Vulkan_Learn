//
// Created by ÂÞÈðµÑ on 2023/7/31.
//

#ifndef VK_CLIONPROJECT_HELLOTRIANGLEAPPLICATION_H
#define VK_CLIONPROJECT_HELLOTRIANGLEAPPLICATION_H
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class HelloTriangleApplication{

public:
    inline
    void run(){
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;

    GLFWwindow* window;
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
};


#endif //VK_CLIONPROJECT_HELLOTRIANGLEAPPLICATION_H
