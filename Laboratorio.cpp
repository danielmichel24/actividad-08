#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }

}
void Laboratorio::mostrar()
{
    for(size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout << "Sistema operativo: " << p.getSo() << endl;
        cout << "Marca: " << p.getMarca() << endl;
        cout << "Ram: " << p.getRam() << " gb" << endl;
        cout << "Rom: " << p.getRom() << " gb" << endl;
        cout << endl;
    }
}


