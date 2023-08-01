//
// Created by 罗瑞笛 on 2023/7/31.
//

#include "HelloTriangleApplication.h"


void HelloTriangleApplication::initWindow() {

    glfwWindowHint(GLFW_CLIENT_API , GLFW_NO_API); //使用vulkan不要指定接口类型
    glfwWindowHint(GLFW_RESIZABLE , GLFW_FALSE);

    window = glfwCreateWindow(WIDTH , HEIGHT , "Miku Vulkan",
    nullptr, nullptr);
}

void HelloTriangleApplication::mainLoop() {
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents(); //轮循事件
    }
}

void HelloTriangleApplication::cleanup() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void HelloTriangleApplication::initVulkan() {

}

//创建一个midware？
void creatInstance(){
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO; //0
    appInfo.pApplicationName = ""

}