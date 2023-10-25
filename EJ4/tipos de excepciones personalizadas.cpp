#include <iostream>
#include <exception>
#include <string>

class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg) :mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

void lanzaExcepcion() {
    throw MiExcepcion("Ocurrio un error en la funcion lanzaException");
}

int main() {
    try {
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        std::cout << "Excepcion capturada: " << e.what() << std::endl;
    }

    return 0;
}
