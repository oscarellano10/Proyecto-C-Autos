#ifndef MOTORESPECIAL_H
#define MOTORESPECIAL_H

#include <iostream>
using namespace std;

class MotorEspecial : public Formula1 {

    private:

        Formula1 car1;
        int num_cilindros;
        int rpm;
        int potencia_max;
        string tipo_motor;

    public:

        MotorEspecial() {
            num_cilindros = 0;
            rpm = 0;
            potencia_max = 0;
            tipo_motor = "";
        };

        MotorEspecial(int _num_cilindros, int _rpm, int _potencia_max, string _tipo_motor, Formula1 _car1) {
            num_cilindros = _num_cilindros;
            rpm = _rpm;
            potencia_max = _potencia_max;
            tipo_motor = _tipo_motor;
            car1 = _car1;
        }

        void imprime_datos() {
            car1.imprime_datos();
            cout << "Numero de cilindros : " << num_cilindros << endl;
            cout << "RPM : " << rpm << endl;
            cout << "Potencia max : " << potencia_max << endl;
            cout << "Tipo Motor: " << tipo_motor << endl;
        }

        // Getters

        int get_num_cilindros() {
            return num_cilindros;
        }

        int get_rpm() {
            return rpm;
        }

        int get_potencia_max() {
            return potencia_max;
        }

        string get_tipo_motor() {
            return tipo_motor;
        }

        // Setters

        void set_tipo_motor(string _tipo_motor) {
            tipo_motor = _tipo_motor;
        }

        void set_num_cilindros(int _num_cilindros) {
            num_cilindros = _num_cilindros;
        }

        void set_rpm(int _rpm) {
            rpm = _rpm;
        }

        void set_potencia_max(int _potencia_max) {
            potencia_max = _potencia_max;
        }

};

#endif //MOTORESPECIAL_H