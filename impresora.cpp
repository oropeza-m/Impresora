#include "impresora.h"
#include <iostream>

Impresora::Impresora(const std::string& nom, int nh) : nombre(nom), numHojas(nh) {
}

void Impresora::imprimir(const std::string& txt) {
    if (numHojas > 0) {
        std::cout << "Imprimiendo texto en la impresora " << nombre << ": " << txt << std::endl;
        numHojas--;
    } else {
        std::cout << "Error: La impresora " << nombre << " se ha quedado sin hojas." << std::endl;
    }
}

void Impresora::recargar(int num) {
    numHojas += num;
    std::cout << "Se han recargado " << num << " hojas en la impresora " << nombre << "." << std::endl;
}