#include <GLFW/glfw3.h>
#include <iostream>

void framebuffer_resize_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, 800, 600);
}

int main(int argc, char *argv[]) {
	(void)argc;
	(void)argv;
	glfwInit();
	// configure, version: 3.3, as the glfw lib here is libglfw.so.3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// create window
	GLFWwindow *window = glfwCreateWindow(800, 600, "Hello-World", NULL, NULL);
	if (window == NULL) {
		std::cerr << "failed to create glfw window. " << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	// draw to the screen: lower-left corner, width, height
	glViewport(0, 0, 800, 600);

	// whenever the window is resized, the callback function is called.
	glfwSetFramebufferSizeCallback(window, framebuffer_resize_callback);

	// main loop
	while (! glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
