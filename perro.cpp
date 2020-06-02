//
// Created by utec on 5/26/20.
//

#include "perro.h"

namespace utec_anonymus {

    void perro_t::morder() {
        cout << "Morder!!!" << endl;
    }

    void perro_t::correr() {
        cout << "Correr!!!" << endl;
    }

    void perro_t::ladrar() {
        cout << "Gua Gua!!!" << endl;
    }

    double perro_t::indice_masa_corporal() {
        return peso / (talla * talla);
    }

    perro_t::perro_t() {
        talla = 0;
        peso = 0;
        edad = 0;
    }

    perro_t::perro_t(float t, float p, int e) {
        talla = t;
        peso = p;
        edad = e;
    }

    void perro_t::set_talla(float value) {
        talla = value;
    }

    void perro_t::set_peso(float value) {
        peso = value;

    }

    void perro_t::set_edad(int value) {
        edad = value;
    }

    float perro_t::get_tall() {
        return talla;
    }

    float perro_t::get_peso() {
        return peso;
    }

    int perro_t::get_edad() {
        return edad;
    }

    int Matematica::sumar(int a, int b) {

    }
}
