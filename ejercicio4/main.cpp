#include <iostream>
#include <exception>
#include<string>

class Miexcepcion : public std::exception {
private :
    std::string mensaje;
public:
    explicit Miexcepcion(const char* mensaje) : mensaje(mensaje) {
    }
};

void lanzarExcepcion() {
    throw Miexcepcion("Mi excepcion");
}

int main() {
    try {
        lanzarExcepcion();
    } catch (Miexcepcion& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}