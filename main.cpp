
#include "impresora.h"

int main() {
    Impresora impresora("Epson", 100);

    impresora.imprimir("Hola, mundo!");
    impresora.imprimir("Este es un texto de prueba.");

    impresora.recargar(50);

    impresora.imprimir("Texto después de recargar.");

    return 0;
}