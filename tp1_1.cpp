#include <iostream>

int main() {
    
    system("cls");
    std::cout << "  hola mundo " << std::endl;


    // Declarar una variable entera
    int variable = 10;
    
    // Declarar un puntero que apunte a la variable entera
    int *puntero = &variable;
    
    // Mostrar el contenido del puntero
    std::cout << "Contenido del puntero: " << *puntero << std::endl;
    
    // Mostrar la dirección de memoria almacenada por el puntero
    std::cout << "Direccion de memoria almacenada por el puntero: " << puntero << std::endl;
    
    // Mostrar la dirección de memoria de la variable
    std::cout << "Direccion de memoria de la variable: " << &variable << std::endl;
    
    // Mostrar la dirección de memoria del puntero
    std::cout << "Direccion de memoria del puntero: " << &puntero << std::endl;
    
    // Mostrar el tamaño de memoria utilizado por esa variable usando sizeof()
    std::cout << "Tamanio de memoria utilizado por la variable: " << sizeof(variable) << " bytes" << std::endl;
    


    return 0;
}