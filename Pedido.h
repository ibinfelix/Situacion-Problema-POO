#pragma once
#include <string>
#include "Carrito.h"
#include "Envio.h"
#include "Pago.h"
#include "Cliente.h"
using namespace std;
class Pedido
{
    string idPedido;
    string fecha;
    string estado;
    Carrito carrito;
    Envio envio;
    Cliente* cliente;
    Pago pago;
public:
    Pedido(string id, string fch, Cliente* clt, Carrito car);
    void asociarPago(Pago pmt);
    void asociarEnvio(Envio env);
    void setEstado(string est);
    string getEstado() const;
    void generarFactura();
    ~Pedido();
};