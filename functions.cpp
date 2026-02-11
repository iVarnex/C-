// --- FUNCIONES EN C++ ---
// Las funciones son bloques de código reutilizables que realizan una tarea específica.
// Al igual que en Python, te ayudan a organizar y modularizar tu código.
// La principal diferencia es que en C++ debes declarar el tipo de dato que la función devolverá
// y el tipo de cada uno de sus parámetros.

#include <iostream>
#include <string>

// --- DECLARACIÓN DE UNA FUNCIÓN (PROTOTIPO) ---
// A veces, necesitas decirle al compilador que una función existe antes de definirla completamente.
// Esto se llama "declaración" o "prototipo de función".
// Sintaxis: tipo_de_retorno nombre_funcion(tipo_param1, tipo_param2, ...);
void saludar(std::string nombre); // Prototipo de la función saludar
int sumar(int a, int b);           // Prototipo de la función sumar

// La función main() es donde comienza la ejecución.
int main() {
    // --- LLAMADA A FUNCIONES ---
    
    // Llamamos a la función `saludar` y le pasamos un argumento "Mundo".
    saludar("Mundo");
    saludar("Juan");

    // Llamamos a la función `sumar` y guardamos el resultado en una variable.
    int resultado = sumar(5, 3);
    std::cout << "La suma de 5 y 3 es: " << resultado << std::endl;

    // También podemos usar el resultado de una función directamente.
    std::cout << "La suma de 10 y 2 es: " << sumar(10, 2) << std::endl;

    return 0;
}

// --- DEFINICIÓN DE LAS FUNCIONES ---
// Aquí es donde escribimos el código que ejecuta cada función.

// Esta función no devuelve ningún valor, por lo que su tipo de retorno es `void`.
// Recibe un parámetro de tipo `std::string` llamado `nombre`.
void saludar(std::string nombre) {
    std::cout << "¡Hola, " << nombre << "!" << std::endl;
}

// Esta función devuelve un valor de tipo `int`.
// Recibe dos parámetros de tipo `int` llamados `a` y `b`.
int sumar(int a, int b) {
    // La palabra clave `return` se usa para devolver un valor desde la función.
    // El tipo del valor devuelto debe coincidir con el tipo de retorno de la función.
    return a + b;
}


// --- ¿QUÉ APRENDIMOS? ---
// 1. **Tipo de Retorno:** Siempre debes especificar qué tipo de dato devolverá la función.
//    Si no devuelve nada, usas `void`.
// 2. **Tipos en Parámetros:** Debes declarar el tipo de cada parámetro que la función acepta.
// 3. **Prototipos:** Declarar una función antes de `main()` (con un prototipo) te permite
//    definirla después de `main()`. Esto ayuda a organizar el código, especialmente en
//    proyectos grandes con múltiples archivos. Si definieras todas las funciones antes de `main()`,
//    no necesitarías los prototipos, pero es una práctica común.
// 4. **Llamada a función:** Es muy similar a Python: `nombre_funcion(argumento1, argumento2);`.
//
// --- PARA COMPILAR Y EJECUTAR ---
// g++ functions.cpp -o functions
// ./functions
