//#include <glad/glad.h>
#include <iostream>
#include <GLFW/glfw3.h>

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	return 0;
}
