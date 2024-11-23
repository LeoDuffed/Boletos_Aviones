#include <iostream> 
#include <vector> 
#include <string> 
using namespace std;

// Clase hecha para asignar el nombre del pasajero y su asiento. 
// Se imprime el boleto.
class Boleto{
private: 
    string nombrePasajero;
    int numeroAsiento;
public: 
    // Constructores de la clase Boleto
    Boleto(){
        nombrePasajero = "Sin Asignar";
        numeroAsiento = 0;
    }
    Boleto (string nombrePasajero, int numeroAsiento){
        this -> nombrePasajero = nombrePasajero;
        this -> numeroAsiento = numeroAsiento;
    }

    // Setters y getters de la clase Boleto
    void setNombrePasajero(string nombre){
        this -> nombrePasajero = nombre;
    }
    void setNumeroAsiento(int asiento){
        this -> numeroAsiento = asiento;
    }

    string getNombrePasajero() const{
        return nombrePasajero;
    }

    int getNumeroAsiento() const{
        return numeroAsiento;
    }

    void mostrarBoleto() const{
        cout << "Pasajero: " << nombrePasajero << ", Asiento: "<< numeroAsiento << endl;

    }
};

// 
class Avion{
private: 
    string nombreVuelo;
    vector <Boleto> listaBoletos;
    int capacidadMaxima;
public: 
    // Constructores
    Avion(){
        nombreVuelo = "Vuelo sin nombrar";
        capacidadMaxima = 0;
    }
    Avion(string nombreVuelo, int capacidad){
        this -> nombreVuelo = nombreVuelo;
        this -> capacidadMaxima = capacidad;
    }

    // Setters y getters
    void setNombreVuelo(string nombre){
        this -> nombreVuelo = nombre;
    }
    void setCapacidadMaxima (int capacidad){
        this -> capacidadMaxima = capacidad;
    }

    string getNombreVuelo() const{
        return nombreVuelo;
    }
    int getCapacidadMaxima() const{
        return capacidadMaxima;
    }

    // Funcion hecha para que el usario pueda comprar el boleto. 
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
    // Funcion hecha para mostrar los boletos vendidos. 
    void mostrarBoleto() const{
        if (listaBoletos.empty()) {
            cout << "\nNo se han vendido voleto para el avion\n";
        } else {
            cout << "\nBoletos para "<< nombreVuelo << endl;
            for (const auto& boleto : listaBoletos) {
                boleto.mostrarBoleto();
            }
        }
    }

};

// Main, desde esta funcion llamo a todas las clases y sus diferentes funciones. 
int main(){
    // Defino todos los aviones que hay, a donde van y cuantos pasajeros tienen.
    Avion vuelo1 ("Vuelo a Argentina", 20);
    Avion vuelo2 ("Vuelo a Colombia", 20);
    Avion vuelo3 ("Vuelo a Peru",  20);
    Avion vuelo4 ("Vuelo a Venezuela", 20);
    Avion vuelo5 ("Vuelo a Brazil", 20);

    // Interaccion del usario con el programa. 
    int opcionesAcciones;
    do{
        cout << "\n1 = Vuelo a Argentina\n2 = Vuelo a Colombia\n3 = Vuelo a Peru\n4 = Venezuela\n5 = Brazil\n0 = Salir\n";
        cout << "\nIngrese eleccion: ";
        cin >> opcionesAcciones;

        if (opcionesAcciones == 1) {
            int opcioBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir\n";
            cout << "\nIngrese se eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1) {
                vuelo1.comprarBoleto();
            } else if (opcioBoleto == 2) {
                vuelo1.mostrarBoleto();
            } else if (opcioBoleto == 0) {
                cout << "\nSaliendo del menu del vuelo a Argentina.\n";
            } else {
                cout << "\nOpcion invalida.";
            }

        } else if (opcionesAcciones == 2){
            int opcioBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "\nIngrese se eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1){
                vuelo2.comprarBoleto();
            } else if (opcioBoleto == 2) {
                vuelo2.mostrarBoleto();
            } else if (opcioBoleto == 0) {
                cout << "\nSaliendo del menu del vuelo de Colombia.\n";
            } else {
                cout << "\nOpcion invalida.\n";
            }
        } else if (opcionesAcciones == 3){
            int opcioBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "\nIngrese se eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1){
                vuelo3.comprarBoleto();
            } else if (opcioBoleto == 2){ 
                vuelo3.mostrarBoleto();
            } else if (opcioBoleto == 0){
                cout << "\nSaliendo del menu del vuelo de Peru.\n";
            } else {
                cout << "\nOpcion invalida\n";
            }

        } else if (opcionesAcciones == 4) {
            int opcioBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "\nIngrese se eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1) {
                vuelo4.comprarBoleto();
            } else if (opcioBoleto == 2){
                vuelo4.mostrarBoleto();
            } else if (opcioBoleto == 0) {
                cout << "\nSaliendo del menu de Venezuela\n";            
            } else {
                cout << "\nOpcion invalida\n";
            }

        } else if (opcionesAcciones == 5) {
            int opcioBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "\nIngrese se eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1) {
                vuelo5.comprarBoleto();
            } else if (opcioBoleto == 2) {
                vuelo5.mostrarBoleto();
            } else if (opcioBoleto == 0) {
                cout << "\nSaliendo del menu del vuelo de Brazil\n";
            } else {
                cout << "\nOpcion invalida\n";
            }
        } else if (opcionesAcciones == 0) {
            cout << "\nSaliendo del programa\n";
        } else {
            cout << "\nOpcion invalida\n";
        }
    } while (opcionesAcciones != 0);

    return 0;
}