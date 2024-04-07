#include <iostream>


int Cuadrado(int numero) ;
void CuadradoVoid(int numero, int &resultado) ;
void MostrarDireccionYContenido(int &variable);
void Invertir(int &a, int &b) ;
void Orden(int &a, int &b) ;






int main() {

    system("cls");
    
    int numero1, numero2;

        std::cout << "Ingrese el primer numero: ";
        std::cin >> numero1;
        
        std::cout << "Ingrese el segundo numero: ";
        std::cin >> numero2;

        // Cuadrado
        int resultadoCuadrado = Cuadrado(numero1);
        std::cout << "Cuadrado de " << numero1 << ": " << resultadoCuadrado << std::endl;

        // Cuadrado con tipo de retorno void
        CuadradoVoid(numero2, resultadoCuadrado);
        std::cout << "Cuadrado de " << numero2 << ": " << resultadoCuadrado << std::endl;

        // Mostrar Direccion y contenido
        MostrarDireccionYContenido(numero1);
        MostrarDireccionYContenido(numero2);

        // Invertir valores
        Invertir(numero1, numero2);
        std::cout << "Despues de invertir: " << "a: " << numero1 << ", b: " << numero2 << std::endl;

        // Ordenar valores
        Orden(numero1, numero2);
        std::cout << "Despues de ordenar: " << "a: " << numero1 << ", b: " << numero2 << std::endl;



    return 0;
}


// Función que devuelve el cuadrado de un numero
int Cuadrado(int numero) {
    return numero * numero;
}

// Función que devuelve el cuadrado de un numero, pero usando un tipo de retorno void
void CuadradoVoid(int numero, int &resultado) {
    resultado = numero * numero;
}

// Función que muestra por pantalla la Direccion y el contenido de una variable
void MostrarDireccionYContenido(int &variable) {
    std::cout << "Direccion de memoria: " << &variable << ", Contenido: " << variable << std::endl;
}

// Función que intercambia los valores entre dos variables
void Invertir(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función que devuelve los valores ordenados en a y b
void Orden(int &a, int &b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
