#pragma once
#include <vector>
#include "Usuario.h"
#include "Carrito.h"
#include "Pedido.h"
#include "Pago.h"
class Cliente : public Usuario 
{
    string direccion;
    Carrito carrito;
    vector<Pedido*> pedidos;
public:
    Cliente(string id, string nom, string corr, string pass, string dir);
    bool generarPedido(Pago &pym);
    void verHistorialPedidos() const;
    ~Cliente();
};