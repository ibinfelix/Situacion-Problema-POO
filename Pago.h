#pragma once
#include <string>
#include "Tarjeta.h"
using namespace std;
class Pago
{
    string idPago;
    double monto;
    Tarjeta* tarjeta;
    bool estado;
public:
    Pago(string id, double mon, Tarjeta* trj);
    bool aprobarPago();
    bool getEstado() const;
    double getMonto() const;
    ~Pago();
};