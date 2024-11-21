#include <iostream> 
#include <vector> 
#include <string> 
using namespace std;

class Boleto{
private: 
    string nombrePasajero;
    int numeroAsiento;
public: 
    Boleto(){
        nombrePasajero = "Sin Asignar";
        numeroAsiento = 0;
    }
    Boleto (string nombrePasajero, int numeroAsiento){
        this -> nombrePasajero = nombrePasajero;
        this -> numeroAsiento = numeroAsiento;
    }

    void setNombrePasajero(string nombre){
        this -> nombrePasajero = nombre;
    }
    void setNumeroAsiento(int asiento){
        this -> numeroAsiento = asiento;
    }

    string getNombrePasajero(){
        return nombrePasajero;
    }
    int getNumeroAsiento(){
        return numeroAsiento;
    }

    void mostrarBoleto() const{
        cout << "Pasajero: " << nombrePasajero << ", Asiento: "<< numeroAsiento << endl;

    }
};

class Avion1{
private: 
    string nombreVuelo;
    vector <Boleto> listaBoletos;
    int capacidadMaxima;
public: 
    Avion1(){
        nombreVuelo = "Vuelo sin nombrar";
        capacidadMaxima = 0;
    }
    Avion1(string nombreVuelo, int capacidad){
        this -> nombreVuelo = nombreVuelo;
        this -> capacidadMaxima = capacidad;
    }

    void setNombreVuelo(string nombre){
        this -> nombreVuelo = nombre;
    }
    void setCapacidadMaxima (int capacidad){
        this -> capacidadMaxima = capacidad;
    }

    string getNombreVuelo(){
        return nombreVuelo;
    }
    int getCapacidadMaxima(){
        return capacidadMaxima;
    }

    void comprarBoleto (){
        if (listaBoletos.size() < capacidadMaxima){
            string nombrePasajero;
            cout << "Ingrese el nombre del pasajero: ";
            cin.ignore();
            getline(cin, nombrePasajero);

            int numeroAsiento = listaBoletos.size() + 1;
            Boleto nuevoBoleto(nombrePasajero, numeroAsiento);
            listaBoletos.push_back(nuevoBoleto);
            cout << "Boleto comprado con exito para "<< nombrePasajero<< "en el asiento "<< numeroAsiento << endl;
        } else {
            cout << "Lo sentimosm, el vuelo esta lleno. No hay mas asientos";
        }

    }

    void mostrarBoleto(){
        if (listaBoletos.empty()) {
            cout << "No se han vendido voleto para el avion";
        } else {
            cout << "\nBoletos para "<< nombreVuelo << endl;
            for (const auto& boleto : listaBoletos) {
                boleto.mostrarBoleto();
            }
        }
    }

};


int main(){
    Avion1 vuelo ("Vuelo a Argentina", 20);
    int opcion;

    do {
        cout << "\n1 = Comprar voleto.\n2 = Mostrar voleto\n0 = Salir";
        cout << "Ingresar seleccion: ";
        cin >> opcion;

        switch (opcion){
            case 1: 
            vuelo.comprarBoleto();
            break;
            case 2:
            vuelo.mostrarBoleto();
            break;
            case 0:
            cout << "\n Saliendo del programa...";
            break;
            default:
            cout << "Opcion no valida";
        }
    } while (opcion != 0);

    return 0;
}