#pragma once
#include <string>
using namespace std;
class Tarjeta
{
    string numeroTarjeta;
    string titular;
    string cvv;
    double saldo;
public:
    Tarjeta(string num, string tit, string cvv, double monto);
    void modificarSaldo(double sal);
    void mostrarInfoTarjeta() const;
    double getSaldo() const;
    ~Tarjeta();
};