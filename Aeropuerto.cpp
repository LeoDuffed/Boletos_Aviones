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

class Avion2{
private: 
    string nombreVuelo;
    vector <Boleto> listaBoletos;
    int capacidadMaxima;
public: 
    Avion2(){
        nombreVuelo = "Vuelo sin nombrar";
        capacidadMaxima = 0;
    }
    Avion2(string nombreVuelo, int capacidad){
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
            cout << "\nLo sentimosm, el vuelo esta lleno. No hay mas asientos";
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

class Avion3{
private: 
    string nombreVuelo;
    vector <Boleto> listaBoletos;
    int capacidadMaxima;
public: 
    Avion3(){
        nombreVuelo = "Vuelo sin nombrar";
        capacidadMaxima = 0;
    }
    Avion3(string nombreVuelo, int capacidad){
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
    int opcionesAciones;
    do{
        cout << "\n1 = Vuelo a Argentina.\n2 = Vuelo a Colombia.\n 3 = Vuelo Peru\n0 = Salir";
        cout << "\nIngrese eleccion: ";
        cin >> opcionesAciones;

        if (opcionesAciones == 1){
            Avion1 vuelo1("Vuelo a Argentina", 20);
            int opcionBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "Ingrese su eleccion: ";
            cin >> opcionBoleto;
            switch (opcionBoleto){
                case 1: 
                vuelo1.comprarBoleto();
                break;
                case 2: 
                vuelo1.mostrarBoleto();
                break;
                case 0:
                cout << "\nSaliendo\n";
                break;
                default:
                cout << "Opcion invalida";
            }           
        } else if (opcionesAciones == 2){
            Avion2 vuelo2 ("Vuelo a Colombia", 20);
            int opcionBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "Ingrese su eleccion: ";
            cin >> opcionBoleto;
            switch (opcionBoleto){
                case 1: 
                vuelo2.comprarBoleto();
                break;
                case 2: 
                vuelo2.mostrarBoleto();
                break;
                case 0: 
                cout << "\nSaliendo\n";
                break;
                default: 
                cout << "\nOpcion invalida\n";
            }
        } else if (opcionesAciones == 3){
            Avion3 vuelo3 ("Vuelo a Peru", 20);
            int opcionBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boleto\n0 = Salir";
            cout << "Ingrese su seleccion: ";
            cin >> opcionBoleto;
            switch (opcionBoleto){
                case 1: 
                vuelo3.comprarBoleto();
                break;
                case 2: 
                vuelo3.mostrarBoleto();
                break;
                case 0: 
                cout << "\nSaliendo\n";
                break;
                default: 
                cout << "\nOpcion invalida\n";
            }
        } else {
            cout << "\nOpcion invalida\n";
        }
    } while (opcionesAciones >= 0 && opcionesAciones <= 3);

    return 0;
}
