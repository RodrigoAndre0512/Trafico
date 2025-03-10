#include <iostream>
#include "Vehiculo.hpp"

#include <fstream>

// Constructor
Vehiculo::Vehiculo()
{
    placa=nullptr;
    modelo=nullptr;
    velocidad{0};
    ubicacion{0,0};
    destino{0,0};
}
Vehiculo::Vehiculo(const char* in_pla, const char* in_mod, double in_velo, Position in_ubi, Position in_des)
    {
        copiar(in_pla, placa);
        copiar(in_mod, modelo);
        velocidad= in_velo;
        ubicacion=in_ubi;
        destino=in_des;
    }
// Destructor
Vehiculo::~Vehiculo()
{
    delete[] Placa;
    delete[] Modelo;
}

