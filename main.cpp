#include <iostream>
#include "perro.h"
using namespace std;
using namespace utec_anonymus;
using namespace utec_anonymus::Matematica;
int main() {
    perro_t simba{};
    perro_t tifon(0.5, 15, 0);
    perro_t fido;
    perro_t layka;
    perro_t lazzy;

    simba.correr();
    simba.ladrar();
    simba.set_talla(1.0);
    simba.set_peso(35);
    simba.set_edad(2);
    cout << simba.indice_masa_corporal() << endl;
    cout << "Datos de Simba:" << endl;
    cout << "Edad: " << simba.get_edad() << endl;
    cout << "Peso: " << simba.get_peso() << endl;
    cout << "Talla: " << simba.get_tall() << endl;
    tifon.correr();
    tifon.ladrar();
    cout << tifon.indice_masa_corporal() << endl;

    cout << sumar(10, 20) << endl;
    return 0;
}
