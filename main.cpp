
#include "main.h"
#include<iostream>
#include<stdexcept>

void lanzaExcepcion() {
    throw std::runtime_error("Error en la funcion lanzaExcepcion");
}

int main() {
    try {
        try {
            lanzaExcepcion();
        }
        catch (const std::runtime_error& e) {
            std::cout << "Excepcion capturada y manejada. Reactivando..." << std::endl;
            throw; // Relanza la excepción
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion reactivada capturada: " << e.what() << std::endl;
    }

    return 0;
}