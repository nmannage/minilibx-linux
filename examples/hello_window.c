
---

### 🖼️ `examples/hello_window.c`
This minimal example opens a window and shows a green pixel.

```c
#include "mlx.h"
#include <stdlib.h>

int close_window(void *mlx)
{
    (void)mlx;
    exit(0);
    return 0;
}

int main(void)
{
    void *mlx = mlx_init();
    if (!mlx)
        return 1;

    void *win = mlx_new_window(mlx, 640, 360, "MiniLibX Hello");
    if (!win)
        return 1;

    void *img = mlx_new_image(mlx, 640, 360);
    int bpp, line_len, endian;
    char *buf = mlx_get_data_addr(img, &bpp, &line_len, &endian);
    (void)endian;

    int x = 100, y = 80;
    unsigned int color = 0x00FF00; // bright green
    *((unsigned int *)(buf + y * line_len + x * (bpp / 8))) = color;

    mlx_put_image_to_window(mlx, win, img, 0, 0);

    mlx_hook(win, 17, 0, close_window, mlx); // handle window close
    mlx_loop(mlx);
    return 0;
}
