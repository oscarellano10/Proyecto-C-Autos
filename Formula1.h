#ifndef Formula1_H
#define Formula1_H
#include <iostream>

using namespace std;

class Formula1 : public Car {

    private:

        Car car1;
        int aerodinamica;
        string material_chasis;

    public:

        Formula1() {
            aerodinamica = 0;
            material_chasis = "";
        }

        Formula1(int _aerodinamica, string _material_chasis, Car _car1) {
            aerodinamica = _aerodinamica;
            material_chasis = _material_chasis;
            car1 = _car1;
        }

        void imprime_datos() {
            car1.imprime_datos();
            cout << "Aerodinamica: " << aerodinamica << endl;
            cout << "Material chasis: " << material_chasis << endl;
        }

        // Getters

        int get_aerodinamica() {
            return aerodinamica;
        }

        string get_material_chasis() {
            return material_chasis;
        }

        // Setters

        void set_aerodinamica(int _aerodinamica) {
            aerodinamica = _aerodinamica;
        }

        void set_material_chasis(string _material_chasis) {
            material_chasis = _material_chasis;
        }

};

#endif