//#include <glad/glad.h>
#include <iostream>
#include <GLFW/glfw3.h>

#include <GL/gl.h>

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "Learning create window", NULL, NULL);
	if (window == NULL) {
		std::cerr << "Failed to create glfw window. " << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	// opengl
	//glViewPoint(0, 0, 800, 600);  // [zoo] error, port, not point, just a funny typo ...
	glViewport(0, 0, 800, 600);

	// close
	glfwTerminate();

	return 0;
}
