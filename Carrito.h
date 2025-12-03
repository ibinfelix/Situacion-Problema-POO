#pragma once
#include <vector>
#include <string>
#include "Producto.h"
using namespace std;
class Carrito
{
    string idCarrito;
    vector<Producto*> productos;
    double total;
public:
    Carrito(int id);
    void agregarProducto(Producto* prd);
    void eliminarProducto(int id);
    double calcularTotal();
    vector<Producto*> getProductos() const;
    ~Carrito();
};