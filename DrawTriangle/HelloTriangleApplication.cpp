//
// Created by ����� on 2023/7/31.
//

#include "HelloTriangleApplication.h"


void HelloTriangleApplication::initWindow() {

    glfwWindowHint(GLFW_CLIENT_API , GLFW_NO_API); //ʹ��vulkan��Ҫָ���ӿ�����
    glfwWindowHint(GLFW_RESIZABLE , GLFW_FALSE);

    window = glfwCreateWindow(WIDTH , HEIGHT , "Miku Vulkan",
    nullptr, nullptr);
}

void HelloTriangleApplication::mainLoop() {
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents(); //��ѭ�¼�
    }
}

void HelloTriangleApplication::cleanup() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void HelloTriangleApplication::initVulkan() {

}

//����һ��midware��
void creatInstance(){
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO; //0
    appInfo.pApplicationName = ""

}