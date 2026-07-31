# 💿 DVD-nostalgic-animation

[![License: MIT](https://shields.io)](https://opensource.org)

A C++ Raylib project dedicated to honoring the classic DVD screensaver from the 1990s to the 2000s. This project combines high-performance native code with a custom visual identity inspired by vintage optical media layouts.

<p align="center">
  <img src="Images/dvd.png" alt="Custom Horizon Logo" width="350"/>
</p>

## 🎨 Visual Identity

The project features a unique visual identity created in Canva:
* **Typography:** Uses the bold, geometric, futuristic lines of the **Horizon** typeface.
* **The Twist:** Features a custom stylized adaptation instead of a generic standard layout.

---

## 🚀 Features

* 📺 **Native Raylib Rendering:** Uses the lightweight Raylib hardware-accelerated graphics library.
* 📐 **Mathematical Precision:** Tracks boundary collisions smoothly for highly satisfying corner hits.
* 🎨 **Dynamic Color Shifting:** The custom logo dynamically changes color themes upon every wall collision.

---

## 🛠️ Installation & Compilation

### Prerequisites

To compile and run this project, you must have a C++ compiler (`g++` or `clang`) and the **Raylib development library** installed on your system.

* **macOS:** Install via Homebrew: `brew install raylib`
* **Linux (Ubuntu/Debian):** Install via APT: `sudo apt install libraylib-dev`
* **Windows:** Follow the setup guide on the [Raylib Wiki](https://github.com) for your preferred toolchain (MinGW/w64 or Visual Studio).

### Setup & Build Instructions

1. **Clone the repository** to your local machine:
   ```bash
   git clone https://github.com
   ```

2. **Navigate** into the project directory:
   ```bash
   cd DVD-nostalgic-animation
   ```

3. **Compile the source code** using the appropriate Raylib linking flags for your operating system:

   * **Linux:**
     ```bash
     g++ main.cpp -o screensaver -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
     ```
   * **macOS:**
     ```bash
     g++ main.cpp -o screensaver -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo
     ```
   * **Windows (MinGW):**
     ```bash
     g++ main.cpp -o screensaver.exe -lraylib -lopengl32 -lgdi32 -lwinmm
     ```

4. **Run the executable:**
   * **Windows:**
     ```bash
     screensaver.exe
     ```
   * **Mac / Linux:**
     ```bash
     ./screensaver
     ```

---

## 📜 License & Disclaimers

This project's custom source code is licensed under the **MIT License**—feel free to fork, modify, and build upon it. 

### ⚖️ Trademark Notice
The visual layout of this software is a creative, non-commercial fan project developed solely for nostalgic, educational, and hobby purposes. The customized assets draw inspiration from historical consumer electronics logos; however, this repository is **not** associated with, certified by, or endorsed by the *DVD Format/Logo Licensing Corporation (DVD FLLC)* or any official hardware manufacturers.
