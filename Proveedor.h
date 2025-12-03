#pragma once
#include <vector>
#include <string>
#include "Producto.h"
using namespace std;
class Proveedor
{
    string idProveedor;
    string nombre;
    vector<Producto*> productos;
public:
    Proveedor(string id, string nom);
    void agregarProducto(Producto* prd);
    string getNombre() const;
    string getIdProveedor() const;
    ~Proveedor();
};