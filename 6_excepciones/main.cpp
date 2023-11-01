#include <stdexcept>

void lanzaException() {
    throw std::runtime_error("Error en la función lanzaException");
}


int main() {
    lanzaException();

    return 0;
}
