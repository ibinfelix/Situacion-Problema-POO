#pragma once
#include <string>
using namespace std;
class Envio
{
    string destino;
    string estado;
public:
    Envio(string des);
    void actualizarEstado(string est);
    string getEstado() const;
    ~Envio();
};