// --- ESTRUCTURAS DE CONTROL DE FLUJO ---
// Las estructuras de control de flujo nos permiten tomar decisiones y repetir acciones.
// La sintaxis en C++ es diferente a la de Python. En lugar de indentación, C++ usa
// llaves `{}` para definir bloques de código y paréntesis `()` para las condiciones.

#include <iostream>

int main() {
    // --- CONDICIONALES: if, else if, else ---
    // Se usan para ejecutar código solo si se cumple una condición.

    int numero = 10;
    std::cout << "--- Ejemplo con if-else ---" << std::endl;
    std::cout << "El número es: " << numero << std::endl;

    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

    // A diferencia de Python, la condición DEBE estar entre paréntesis ().
    // El bloque de código que se ejecuta DEBE estar entre llaves {}.

    std::cout << std::endl << "--- BUCLE for ---" << std::endl;
    // El bucle `for` es ideal para repetir una acción un número conocido de veces.
    // Su estructura es: for (inicialización; condición; incremento) { ... }

    // Este bucle imprimirá los números del 0 al 4.
    // 1. `int i = 0;`: Se declara e inicializa una variable contador `i`. Esto solo se ejecuta una vez.
    // 2. `i < 5;`: El bucle se ejecutará mientras esta condición sea verdadera.
    // 3. `i++`: Después de cada iteración, el valor de `i` se incrementa en 1 (`i++` es un atajo para `i = i + 1`).
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteración del for, i = " << i << std::endl;
    }

    // Esto es equivalente a `for i in range(5):` en Python.

    std::cout << std::endl << "--- BUCLE while ---" << std::endl;
    // El bucle `while` repite un bloque de código mientras una condición sea verdadera.

    int contador = 3;
    while (contador > 0) {
        std::cout << "Contador del while: " << contador << std::endl;
        contador--; // Decrementamos el contador (`--` es un atajo para `contador = contador - 1`).
    }
    std::cout << "¡Despegue!" << std::endl;


    // --- BUCLE do-while (una variante menos común) ---
    // Es similar al `while`, pero garantiza que el bloque de código se ejecute al menos una vez,
    // porque la condición se evalúa al final.
    std::cout << std::endl << "--- BUCLE do-while ---" << std::endl;
    int opcion;
    do {
        std::cout << "Esto se ejecuta al menos una vez. Ingresa 0 para salir: ";
        // `std::cin` se usa para leer la entrada del usuario desde la consola.
        std::cin >> opcion;
    } while (opcion != 0);

    std::cout << "Saliste del bucle do-while." << std::endl;


    return 0;
}

// --- ¿QUÉ APRENDIMOS? ---
// 1. **Paréntesis y Llaves:** Las condiciones van en `()` y los bloques de código en `{}`.
//    Esto reemplaza a los dos puntos `:` y la indentación de Python.
// 2. **Bucle `for`:** Tiene una sintaxis más explícita con inicialización, condición e incremento.
// 3. **Bucle `while`:** Funciona de manera muy similar a Python, pero con la sintaxis de C++.
// 4. **Operadores de incremento/decremento:** `++` y `--` son atajos muy comunes en C++.
//
// --- PARA COMPILAR Y EJECUTAR ---
// g++ control_flow.cpp -o control_flow
// ./control_flow
