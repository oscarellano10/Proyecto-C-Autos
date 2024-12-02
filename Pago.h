#ifndef PAGO_H
#define PAGO_H

#include <iostream>
using namespace std;

class Pago {

    private:

        int precio;
        int money_available;
        int down_payment;
        bool prestamo;
        int duracion_prestamo; // En meses
        Dueno dueno1;

    public:

        Pago() {
            money_available = 0;
            prestamo = true;
            duracion_prestamo = 0;
            down_payment = 0;
            precio = 0;
        }

        Pago(int _money_available, bool _prestamo, int _duracion_prestamo, int _down_payment, int _precio ,Dueno _dueno1) {
            money_available = _money_available;
            prestamo = _prestamo;
            duracion_prestamo = _duracion_prestamo;
            down_payment = _down_payment;
            precio = _precio;
            dueno1 = _dueno1;
        }

        void imprime_datos() {
            dueno1.imprime_datos();
            cout << "Dinero disponible: "<<money_available << endl;
            cout << "Precio: "<< precio << endl;
            cout << "Prestamo: "<< prestamo << endl;
            cout << "Down payment: "<< down_payment << endl;
            cout << "Duracion de prestamo: " << duracion_prestamo << endl;
        }

        int calculo_precio() {
            if (prestamo == true) {
                int money_needed = precio - down_payment;
                int money_per_month = money_needed / duracion_prestamo;
                int credit_score = dueno1.get_credito();
                if (credit_score < 400 ) {
                    money_per_month = 2.2;
                } else if (credit_score < 500) {
                    money_per_month = money_per_month * 1.8;
                } else if (credit_score < 600) {
                    money_per_month = money_per_month * 1.4;
                } else if (credit_score < 700) {
                    money_per_month = money_per_month * 1.1;
                } else if (credit_score < 800) {
                    money_per_month = money_per_month * 1.05;
                }
                cout << "Dinero por mes: $" << money_per_month << endl;
                return money_per_month;
            }
        }

};

#endif //PAGO_H
