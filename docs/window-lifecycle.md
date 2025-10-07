# Window Lifecycle

Windows depend on the MLX connection and images depend on windows. Create in this order and destroy in the reverse order to avoid leaks and crashes. Here you will learn when to free an image, when the window actually disappears, and how to exit cleanly from any event. We also cover common lifecycle traps such as using an image after the window is gone or calling the loop without a valid context.
