# Events and Hooks

MiniLibX drives your program with an event loop. You register small callback functions called hooks, and the loop calls them when something happens. Keyboard, mouse, expose, and destroy are the core events you will use. This section shows how to attach hooks, pass state to them, and choose safe defaults so your app stays responsive. By the end, you will know how to quit cleanly, read keys, track the mouse, and run a per-frame update.
