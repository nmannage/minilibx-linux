# Overview and Mental Model

Think in five steps: init, window, image, events, loop. First you open a connection to X11, then you create a window, then you draw into an image buffer, then you react to input through hooks, and the loop keeps everything alive. This section explains why the library is designed this way and what guarantees you get. You will learn what owns what, which objects depend on others, and the safe order of creation and teardown. With this picture in your head, the rest of the docs will feel natural.
