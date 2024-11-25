#ifndef SUV_H
#define SUV_H
#include <iostream>

using namespace std;

class SUV : public Car {

    private:

        Car car1;
        int altura_suelo;
        int capacidad_asientos;
        int capacidad_peso;
        int eficaz_motor;

    public:

        SUV() {
            altura_suelo = 0;
            capacidad_asientos = 0;
            capacidad_peso = 0;
            eficaz_motor = 0;
        }

        SUV(int _altura_suelo, int _capacidad_asientos, int _capacidad_peso, int _eficaz_motor, Car _car1) {
            car1 = _car1;
            altura_suelo = _altura_suelo;
            capacidad_asientos = _capacidad_asientos;
            capacidad_peso = _capacidad_peso;
            eficaz_motor = _eficaz_motor;
        }

        void imprime_datos() {
            car1.imprime_datos();
            cout << "Altura suelo: " << altura_suelo << endl;
            cout << "Capacidad asientos: " << capacidad_asientos << endl;
            cout << "Capacidad peso: " << capacidad_peso << endl;
            cout << "Eficaz motor: " << eficaz_motor << endl;
        }

        // Getters

        int get_altura_suelo() {
            return altura_suelo;
        }

        int get_capacidad_asientos() {
            return capacidad_asientos;
        }

        int get_capacidad_peso() {
            return capacidad_peso;
        }

        int get_eficaz_motor() {
            return eficaz_motor;
        }

        // Setters

        void set_altura_suelo(int _altura_suelo) {
            altura_suelo = _altura_suelo;
        }

        void set_capacidad_asientos(int _capacidad_asientos) {
            capacidad_asientos = _capacidad_asientos;
        }

        void set_capacidad_peso(int _capacidad_peso) {
            capacidad_peso = _capacidad_peso;
        }

        void set_eficaz_motor(int _eficaz_motor) {
            eficaz_motor = _eficaz_motor;
        }

};

#endif