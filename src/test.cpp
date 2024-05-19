# include <GLFW/glfw3.h>

int main(void)
{
  // Initialize GLFW
  if (!glfwInit()) {
    return -1;
  }
  // Set window hints (optional)
  glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE); // Start window hidden

  // Create a window object
  const int width = 800;
  const int height = 600;
  GLFWwindow* window = glfwCreateWindow(width, height, "My Doom-like Game", NULL, NULL);
  if (window == NULL) {
    glfwTerminate();
    return -1;
  }

  // Show the window now that it's created
  glfwShowWindow(window);

  // The main loop that keeps the window open
  while (!glfwWindowShouldClose(window)) {
    // Handle events (like keyboard or mouse input)
    glfwPollEvents();

    // Clear the window (prepare for drawing)
    // (you'll need to learn OpenGL functions for this)
    // glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // Set background color (dark gray)
    // glClear(GL_COLOR_BUFFER_BIT);

    // Swap the front and back buffers (make drawing visible)
    glfwSwapBuffers(window);
  }

  // Clean up GLFW resources
  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}

// g++ test.c -o test -lglfw   && ./test && rm test