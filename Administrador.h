#pragma once
#include <vector>
#include "Usuario.h"
#include "Producto.h"
class Administrador : public Usuario 
{
public:
    Administrador(int id, string nom, string corr, string pass);
    void agregarProducto(Producto &prd, vector<Producto*> &cat);
    void eliminarProducto(int id, vector<Producto*> &cat);
    void modificarPrecio(int id, double prc, vector<Producto*> &cat);
    ~Administrador();
};