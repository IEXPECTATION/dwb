add_subdirectory(glad)

set(GLFW_BUILD_X11 OFF)
set(GLFW_BUILD_WAYLAND ON)
add_subdirectory(glfw)