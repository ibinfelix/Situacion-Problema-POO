#pragma once
#include <vector>
#include <string>
#include "Producto.h"
#include "Proveedor.h"
#include "Pedido.h"
using namespace std;
class Tienda
{
    string nombre;
    string url;
    vector<Producto*> catalogo;
    vector<Proveedor*> proveedores;
    vector<Pedido*> pedidos;
public:
    Tienda(string nom, string web);
    void registrarProveedor(Proveedor* prv);
    void registrarPedido(Pedido* ped);
    void mostrarCatalogo() const;
    ~Tienda();
};