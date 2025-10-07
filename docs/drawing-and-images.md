# Drawing and Images

This library lets you draw by writing into an image buffer, then showing that buffer in a window. You create an image, ask for a pointer to its pixels, edit the bytes, and push it to the screen. This keeps your program simple and fast. We will build the mental model for pixel layout, bytes per pixel, line length, and endianness so you know exactly what you are writing and why it appears where it does. You will also learn when to update the same image, when to create a new one, and how to avoid flicker.
