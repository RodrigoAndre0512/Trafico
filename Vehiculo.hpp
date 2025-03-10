#include <cmath>
#ifndef VEHICULO_HPP
#define VEHICULO_HPP
struct Position {
    double x, y;
    
    // Calcula la distancia entre dos posiciones
    double distanceTo(const Position& other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};
class Vehiculo
{
private:
  char* Placa;
  char* Modelo;
  double velocidad;
  Position ubicacion; // ubicacion actual
  Position destino; // ubicacion del destino
  void copiar(const char* origen, char*& destino)
    {
        if (origen == nullptr) {
            destino = nullptr;
            return;
        }
        int n=0;
        while(origen[n]!='\0') n++;
        destino=new char[n+1];
        for(int i=0; i<n;i++) 
        {
            destino[i]=origen[i]; 
        }
        destino[n]='\0';
    }
public:
  Vehiculo();
  Vehiculo(const char* in_pla, const char* in_mod);
  ~Vehiculo();
};
/*
class Administrador : public Persona {
protected:
   char* ID; // Redefinición con un tamaño diferente
public:
    // Constructor y Destructor
    Administrador();
    ~Administrador();

    // Métodos para gestionar datos del cliente
    void crearID(const char* dni, const char* nombre, const char* apellido) override; 
    void crearContrasena() override;

    // Setters sobrescritos
    void setID(const char* nuevoID) override { copiarCaracteres(ID, nuevoID, 10); }
    void setContrasena(const char* nuevaContrasena) override { copiarCaracteres(contrasena, nuevaContrasena, 8); }
    void setNombre(const char* nuevoNombre) override { copiarCaracteres(nombre, nuevoNombre, 49); }
    void setApellidos(const char* nuevosApellidos) override { copiarCaracteres(apellidos, nuevosApellidos, 49); }
    void setDNI(const char* nuevoDNI) override { copiarCaracteres(dni, nuevoDNI, 8); }
    void setTelefono(const char* nuevoTelefono) override { copiarCaracteres(telefono, nuevoTelefono, 14); }
    void setCorreoElectronico(const char* nuevoCorreo) override { copiarCaracteres(correoElectronico, nuevoCorreo, 49); }

    // Getters sobrescritos
    const char* getID() const override { return ID; }
    const char* getContrasena() const override { return contrasena; }
    const char* getNombre() const override { return nombre; }
    const char* getApellidos() const override { return apellidos; }
    const char* getDNI() const override { return dni; }
    const char* getTelefono() const override { return telefono; }
    const char* getCorreoElectronico() const override { return correoElectronico; }

    // Funciones de autenticación y archivo
    bool iniciarSesion(const char* inputID, const char* inputContrasena) const override;
    void guardarInfoEnArchivo(const char* nombreArchivo) const;
}*/
#endif
