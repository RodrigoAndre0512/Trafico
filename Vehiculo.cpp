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

// Método para crear ID
void Administrador::crearID(const char* dni, const char* nombre, const char* apellido) 
{
    ID[0] = 'A';
    ID[1] = 'D';
    ID[2] = nombre[0];
    ID[3] = apellido[0];
    // Copiamos los primeros 8 caracteres del DNI al ID
    copiarCaracteres(ID + 4, dni, 8);
    ID[13] = '\0';

    std::cout << "Tu ID de inicio de sesión es: " << ID << std::endl;
}
