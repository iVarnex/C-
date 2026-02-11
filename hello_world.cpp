// ¡Bienvenido a C++! Este es tu primer programa.
// Las líneas que comienzan con "//" son comentarios y el compilador las ignora.
// Sirven para explicar el código a los humanos.

/*
  Este es un comentario de varias líneas.
  También es ignorado por el compilador.
*/

// --- INCLUSIÓN DE LIBRERÍAS ---
// En C++, para usar funcionalidades que no son parte del núcleo del lenguaje,
// necesitas "incluir" librerías. La librería `<iostream>` es fundamental
// para operaciones de entrada/salida (Input/Output Stream), como imprimir en la consola.
// Es similar a un 'import' en Python.
#include <iostream>

// --- LA FUNCIÓN PRINCIPAL: main() ---
// Todo programa en C++ comienza su ejecución en la función `main`.
// No puede haber más de una función `main` y debe devolver un número entero (int).
// Un `0` significa que el programa terminó exitosamente.
int main() {
    // --- IMPRIMIR EN CONSOLA ---
    // `std::cout` es el objeto que representa la salida estándar (la consola).
    // El operador `<<` (operador de inserción) se usa para "enviar" datos a `std::cout`.
    // `"Hola, Mundo!"` es una cadena de texto.
    // `std::endl` es un manipulador que inserta un carácter de nueva línea y limpia el búfer de salida.
    // Es como un `print("Hola, Mundo!")` en Python.
    // `std::` es un "espacio de nombres" (namespace). Ayuda a organizar el código y evitar
    // colisiones de nombres. `cout` y `endl` pertenecen al espacio de nombres `std`.
    std::cout << "Hola, Mundo!" << std::endl;

    // --- VALOR DE RETORNO ---
    // Devolvemos 0 para indicar que el programa finalizó sin errores.
    // Si omites esta línea, muchos compiladores modernos la añadirán por ti.
    return 0;
}

// --- ¿CÓMO COMPILAR Y EJECUTAR ESTE CÓDIGO? ---
// A diferencia de Python, C++ es un lenguaje compilado. Primero, necesitas traducir
// este código fuente (.cpp) a un archivo ejecutable (.exe en Windows, o sin extensión en Linux/macOS).
//
// 1. **Instala un compilador:** El más común es g++. Si usas Windows, puedes instalar MinGW-w64.
//    En Linux, `sudo apt-get install g++`. En macOS, las herramientas de línea de comandos de Xcode lo incluyen.
//
// 2. **Abre una terminal** en la carpeta donde guardaste este archivo.
//
// 3. **Compila el código:** Escribe el siguiente comando y presiona Enter:
//    g++ hello_world.cpp -o hello_world
//
//    - `g++`: Es el comando para invocar al compilador.
//    - `hello_world.cpp`: Es el nombre de tu archivo fuente.
//    - `-o hello_world`: Es una bandera que le dice al compilador que el archivo de salida
//      (el ejecutable) se debe llamar `hello_world`.
//
// 4. **Ejecuta el programa:** Una vez que la compilación termine sin errores,
//    tendrás un nuevo archivo. Para ejecutarlo, escribe:
//    - En Windows: .\hello_world.exe
//    - En Linux/macOS: ./hello_world
//
//    ¡Deberías ver "Hola, Mundo!" impreso en tu consola!
