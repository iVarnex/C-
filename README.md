# Introducción a C++ para Desarrolladores Python/Web

¡Hola! Esta carpeta contiene una serie de archivos `.cpp` diseñados para enseñarte los conceptos más básicos de C++ de una manera simple y directa. Como vienes de un entorno de lenguajes interpretados como Python, nos enfocaremos en las diferencias clave, como la compilación y el sistema de tipos estáticos.

## Requisito Previo: Instalar un Compilador de C++

A diferencia de Python, C++ es un lenguaje **compilado**. Necesitas un programa (un compilador) que traduzca tu código fuente (`.cpp`) a un archivo ejecutable que tu sistema operativo pueda entender. El compilador más común es **g++**.

Sigue estas instrucciones para instalarlo en tu sistema:

### Windows
La forma más sencilla es instalar **MinGW-w64**, que proporciona g++ y otras herramientas de desarrollo.
1.  Ve a la página de descargas de [MSYS2](https://www.msys2.org/).
2.  Descarga el instalador (`msys2-x86_64-....exe`) y sigue las instrucciones.
3.  Una vez instalado, abre la terminal de MSYS2 (la encontrarás en el menú de inicio) y ejecuta el siguiente comando para instalar las herramientas de desarrollo, incluyendo g++:
    ```sh
    pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
    ```
4.  Cierra y vuelve a abrir la terminal de MSYS2. ¡Ya deberías tener `g++` disponible!

### macOS
La forma más fácil es instalar las **Command Line Tools for Xcode**.
1.  Abre tu terminal.
2.  Ejecuta el siguiente comando:
    ```sh
    xcode-select --install
    ```
3.  Sigue las instrucciones en la ventana que aparece. Una vez instalado, `g++` (y `clang++`, que funciona de manera similar) estará disponible en tu terminal.

### Linux (Debian/Ubuntu)
Es muy probable que ya lo tengas. Si no, puedes instalarlo fácilmente.
1.  Abre tu terminal.
2.  Ejecuta los siguientes comandos:
    ```sh
    sudo apt update
    sudo apt install build-essential
    ```
    Esto instala `g++` y otras herramientas de compilación esenciales.

## Los Archivos de Lección

Aquí tienes un resumen de cada archivo y cómo compilarlo y ejecutarlo. Se recomienda seguirlos en este orden.

---

### 1. `hello_world.cpp`
-   **Propósito:** Tu primer programa. Aprenderás la estructura básica de un archivo de C++, a incluir librerías (`iostream`) y a imprimir en la consola (`std::cout`).
-   **Compilar:** `g++ hello_world.cpp -o hello_world`
-   **Ejecutar (Windows):** `.\hello_world.exe`
-   **Ejecutar (macOS/Linux):** `./hello_world`

---

### 2. `variables_and_types.cpp`
-   **Propósito:** Introduce el concepto de tipado estático. Verás cómo declarar variables con tipos como `int`, `double`, `char`, `std::string` y `bool`.
-   **Compilar:** `g++ variables_and_types.cpp -o variables_and_types`
-   **Ejecutar (Windows):** `.\variables_and_types.exe`
-   **Ejecutar (macOS/Linux):** `./variables_and_types`

---

### 3. `control_flow.cpp`
-   **Propósito:** Aprende a controlar el flujo de tu programa con condicionales (`if`, `else`) y bucles (`for`, `while`). Notarás la diferencia en la sintaxis respecto a Python (uso de `{}` y `()`).
-   **Compilar:** `g++ control_flow.cpp -o control_flow`
-   **Ejecutar (Windows):** `.\control_flow.exe`
-   **Ejecutar (macOS/Linux):** `./control_flow`

---

### 4. `functions.cpp`
-   **Propósito:** Descubre cómo crear funciones reutilizables, especificando tipos de retorno y tipos para los parámetros. Se introduce el concepto de prototipos de función.
-   **Compilar:** `g++ functions.cpp -o functions`
-   **Ejecutar (Windows):** `.\functions.exe`
-   **Ejecutar (macOS/Linux):** `./functions`

---

## Próximos Pasos

Una vez que te sientas cómodo con estos conceptos, puedes explorar temas más avanzados como:
-   Clases y Objetos (Programación Orientada a Objetos)
-   Punteros y manejo de memoria
-   La Librería Estándar de Plantillas (STL), que ofrece estructuras de datos como `std::vector` (similar a las listas de Python).

¡Espero que esto te sea de gran ayuda en tu viaje para aprender C++!
