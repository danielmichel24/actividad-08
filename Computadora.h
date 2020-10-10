#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>


using namespace std;

class Computadora
{
private:
    string so; //so=sistema operativo
    string marca;
    int ram;
    int rom;
public:
    Computadora();
    Computadora(const string &so,
              const string &marca,
              int ram,
              int rom);
    void setSo(const string &v);
    string getSo();
    void setMarca(const string &v);
    string getMarca();
    void setRam(int v);
    int getRam();
    void setRom(int v);
    int getRom();
};



#endif // COMPUTADORA_H
