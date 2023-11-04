#include <iostream>
#include <stdexcept>

void func3() {
    throw std::runtime_error("Error en func3");
}

void func2() {
    try {
        func3();
    } catch (std::runtime_error& e) {
        std::cout << "Error en func2: " << e.what() << std::endl;
    }
}

void func1 () {
    try {
        func2();
    } catch (std::runtime_error& e) {
        std::cout << "Error en func1:" << e.what() << std::endl;
    }
}

int main() {
    try {
        func1();
    } catch (std::runtime_error& e) {
        std::cout << "Error en main: " << e.what() << std::endl;
    }

    return 0;
}
