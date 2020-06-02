//
// Created by utec on 5/26/20.
//

#ifndef POO1_TEO_POO_PARTE1_PERRO_H
#define POO1_TEO_POO_PARTE1_PERRO_H

#include <iostream>
#include <string>
using namespace std;



namespace utec_anonymus {

    namespace Matematica {
        int sumar(int a, int b);
    }

    class perro_t {
    private:
        string nombre;
        float talla = 0;
        float peso = 0;
        int edad = 0;
    public:
        // Constructores
        perro_t();
        perro_t(float t, float p, int e);
        // Destructor
        ~perro_t() = default;
        // Metodos
        void morder();
        void correr();
        void ladrar();
        double indice_masa_corporal();
        // Set --> Sirven para actualizar desde el
        //          exterior un atributo
        void set_talla(float value);
        void set_peso(float value);
        void set_edad(int value);

        // Get
        float get_tall();
        float get_peso();
        int get_edad();


        /*
         *
         Nomenclatura Snake (C++ y Python)
         get_talla()

         Nomenclatura Pascal (C#, Delphi)
         GetTalla()

         Nomenclatura Camell (Java, C#)
         getTalla()

         Nomenclatura Hungara (C, C++, FORTRAN, COBOL)
         fgTalla()

         *
         */

    };
}


#endif //POO1_TEO_POO_PARTE1_PERRO_H
