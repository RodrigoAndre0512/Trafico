#include <iostream>
#include "Vehiculo.hpp"

#include <fstream>

// Constructor
Vehiculo::Vehiculo()
{
    Placa=nullptr;
    Modelo=nullptr;
    Tipo=nullptr;
    velocidad=0.0;
}
Vehiuclo::Vehiculo(const char* in_pla, const char* in_mod, double in_velo, Position ubicacion, Position destino)
    {
        copiar_ca(in_pla, placa);
        copiar_ca(in_mod, modelo);
    }
// Destructor
Administrador::~Administrador()
{
    delete[] Placa;
    delete[] Modelo;
    delete[] Tipo;
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
