#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <string>

class Impresora {
private:
    std::string nombre;
    int numHojas;

public:
    Impresora(const std::string& nom, int nh);
    void imprimir(const std::string& txt);
    void recargar(int num);
};

#endif