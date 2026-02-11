// --- VARIABLES Y TIPOS DE DATOS ---
// En C++, a diferencia de Python, las variables tienen un tipo estático.
// Esto significa que debes declarar el tipo de dato que una variable contendrá
// y este no puede cambiar durante la ejecución.

#include <iostream>
#include <string> // Necesitamos incluir la librería <string> para usar el tipo std::string

int main() {
    // --- DECLARACIÓN E INICIALIZACIÓN DE VARIABLES ---
    // Sintaxis: tipo_de_dato nombre_de_variable = valor_inicial;

    // --- TIPOS DE DATOS NUMÉRICOS ---

    // `int`: para números enteros (sin decimales).
    int edad = 25;
    std::cout << "Edad (un entero): " << edad << std::endl;

    // `double`: para números con punto flotante (decimales). Es más preciso que `float`.
    double precio = 19.99;
    std::cout << "Precio (un double): " << precio << std::endl;

    // --- TIPO DE DATO PARA CARACTERES ---

    // `char`: para un único carácter. Se usan comillas simples ''.
    char inicial = 'J';
    std::cout << "Inicial (un char): " << inicial << std::endl;

    // --- TIPO DE DATO PARA CADENAS DE TEXTO ---

    // `std::string`: para secuencias de caracteres (texto). Se usan comillas dobles "".
    // Requiere incluir la librería `<string>`.
    std::string saludo = "Hola, C++";
    std::cout << "Saludo (un string): " << saludo << std::endl;

    // --- TIPO DE DATO BOOLEANO ---

    // `bool`: para valores de verdadero o falso.
    bool esEstudiante = true; // puede ser `true` o `false`
    std::cout << "Es estudiante (un booleano): " << esEstudiante << std::endl;
    // Nota: Por defecto, `std::cout` imprime `1` para `true` y `0` para `false`.
    // Podemos cambiar esto, pero por ahora es bueno saberlo.

    // --- ASIGNACIÓN ---
    // Puedes cambiar el valor de una variable después de haberla declarado.
    int puntos = 100;
    std::cout << "Puntos iniciales: " << puntos << std::endl;
    puntos = 120; // Reasignamos un nuevo valor
    std::cout << "Puntos actualizados: " << puntos << std::endl;

    // --- CONSTANTES ---
    // Si quieres que una variable nunca cambie su valor, puedes declararla como constante
    // usando la palabra clave `const`.
    const double PI = 3.14159;
    std::cout << "El valor de PI es constante: " << PI << std::endl;
    // Si intentas cambiar el valor de PI, el compilador dará un error.
    // PI = 3.14; // Esta línea provocaría un error de compilación.

    return 0;
}

// --- ¿QUÉ APRENDIMOS? ---
// 1. **Tipado Estático:** Siempre debes especificar el tipo de dato de una variable (`int`, `double`, `char`, `std::string`, `bool`).
// 2. **Declaración:** Primero declaras la variable con su tipo.
// 3. **Inicialización:** Es buena práctica darle un valor inicial al momento de declararla.
// 4. **Librerías:** Algunas funcionalidades, como `std::string`, requieren que incluyas la librería correspondiente.
// 5. **Constantes:** Usa `const` para valores que no deben cambiar.
//
// --- PARA COMPILAR Y EJECUTAR ---
// g++ variables_and_types.cpp -o variables_and_types
// ./variables_and_types
