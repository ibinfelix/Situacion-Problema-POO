#pragma once
#include <string>
#include "Proveedor.h"
using namespace std;
class Producto
{
    string idProducto;
    string nombre;
    string descripcion;
    int stock;
    double precio;
    Proveedor* proveedor;
public:
    Producto(string id, string nom, string dsc, double prc, int stk, Proveedor* prv);
    void actualizarStock(int cnt);
    string getIdProducto() const;
    string getNombre() const;
    int getStock() const;
    double getPrecio() const;
    Proveedor* getProveedor() const;
    void mostrarInfo() const;
    ~Producto();
};