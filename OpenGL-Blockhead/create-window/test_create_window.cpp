//#include <glad/glad.h>
#include <iostream>
#include <GLFW/glfw3.h>

#include <GL/gl.h>

void cb_framebuffer_size(GLFWwindow *window, int width, int height){
	//assert(width > 0 && height > 0);
	glViewport(0, 0, width, height);
}

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
	// behind the scene OGL use the data to transform 2D coordinates 
	// to the coordinates on your screen
	//glViewPoint(0, 0, 800, 600);  // [zoo] error, port, not point, just a funny typo ...
	glViewport(0, 0, 800, 600);

	glfwSetFramebufferSizeCallback(window, cb_framebuffer_size);

	// render loop
	while(!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		// swap the color buffer (a large 2D buffer that contains color values for 
		// each pixel in GLFW's window) that is used to render to during this render 
		// iteration and show it as output to the screen
		glfwPollEvents();
	}
	// close
	glfwTerminate();

	return 0;
}
