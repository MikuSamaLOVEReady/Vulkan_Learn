cmake_minimum_required(VERSION 3.24)
project(VK_CLionProject)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(
       DrawTriangle
)

add_executable(VK_CLionProject DrawTriangle/HelloTriangleApplication.h DrawTriangle/HelloTriangleApplication.cpp)
target_sources(VK_CLionProject PRIVATE main.cpp)

target_link_libraries(VK_CLionProject PRIVATE Vulkan::Vulkan)
target_link_libraries(VK_CLionProject PRIVATE glfw)

