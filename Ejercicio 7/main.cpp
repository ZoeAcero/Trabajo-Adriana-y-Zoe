#include<iostream>
#include<stdexcept>
#include<fstream>

void EscrituraArchivo(std::ofstream &archivo, int numero){
    if(!archivo.is_open()){
        throw std::runtime_error("Error al abrir el archivo");
    }
    archivo << numero << std::endl;

}
int main () {
    std::ofstream archivo("numeros.txt", std::ios::out);
    try{
        EscrituraArchivo(archivo, 10);
        EscrituraArchivo(archivo, 20);
        EscrituraArchivo(archivo, 30);
        archivo.close();
    }catch(const std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
    if (archivo.is_open()){
        archivo.close();
        std::cout << "Archivo cerrado" << std::endl;
    }
    return 0;
}
