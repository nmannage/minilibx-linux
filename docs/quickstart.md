# MiniLibX for Linux — Quickstart

MiniLibX is a **minimal graphics library** for opening windows, drawing pixels or images, and handling events under **X11**.

---

## 🧩 Installation

Make sure you have the required packages (Ubuntu/Debian):

```bash
sudo apt-get update
sudo apt-get install -y build-essential xorg libxext-dev libx11-dev libbsd-dev zlib1g-dev
```

## 💻 Build

Clone the repository and compile the library:

```bash
git clone https://github.com/nmannage/minilibx-linux.git
cd minilibx-linux
./configure     # generates Makefile and builds libmlx.a
# Or simply run:
make
```

## 🚀 Usage

Include the header and link against the library:

```c
#include <mlx.h>

int main(void)
{
    void *mlx = mlx_init();
    void *win = mlx_new_window(mlx, 800, 600, "My Window");
    mlx_loop(mlx);
    return 0;
}
```

Compile your program with:

```bash
gcc your_program.c -L. -lmlx -lXext -lX11 -lm -o your_program
```