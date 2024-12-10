// Este es el progrma principal (main) en donde se implementan todos los códigos creados para cada clase (archivos.h) en este código se le muestra al usuario cada atributo del objeto.
// Creado por: Oscar Arellano (A01708950)
// Creado el 10/9/2024 - modificado el 17/11/2024- modificado el 1/12/2024

#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Formula1.h"
#include "MotorEspecial.h"
#include "Dueno.h"
#include "Pago.h"
#include "Compare.h"

using namespace std;

int money_available = 10000; // $10,000

int main() {

    // Aquí se definen los autos que están disponibles
    Car car1_car = Car("V6", "Porsche", 100000, 2024, 200);
    SUV car1_suv = SUV(2, 2, 500, 70, car1_car);

    Car car2_car = Car("V4", "Corolla", 10000, 2014, 100);
    SUV car2_suv = SUV(7, 5, 1000, 90, car2_car);

    Car car3_car = Car("V3", "Camry", 12000, 2020, 120);
    SUV car3_suv = SUV(6, 5, 1200, 95, car3_car);

    Car car4_car = Car("V10", "Ferrari", 20000000, 2025, 370);
    Formula1 car4_formula1 = Formula1(95, "Acero", car4_car);
    MotorEspecial car4_motor = MotorEspecial(10, 16000, 1200, "Electrico", car4_formula1);

    Car car5_car = Car("V10", "Bentley", 18000000, 2024, 360);
    Formula1 car5_formula1 = Formula1(92, "Hierro", car5_car);
    MotorEspecial car5_motor = MotorEspecial(9, 15000, 1050, "Electrico", car5_formula1);

    Car car6_car = Car("V8", "McLaren", 12000000, 2012, 300);
    Formula1 car6_formula1 = Formula1(96, "Metal", car6_car);
    MotorEspecial car6_motor = MotorEspecial(10, 16000, 1000, "Gasolina", car6_formula1);

    // Se despliegan todos los coches para que el usuario los vea
    cout << "Bienvenido al catálogo de coches Diciembre 2024!" << endl << "Estos son los coches disponibles!" << endl << endl;
    cout << "1. " << car1_car.get_marca() << " $" << car1_car.get_precio() << endl;
    cout << "2. " << car2_car.get_marca() << " $" << car2_car.get_precio() << endl;
    cout << "3. " << car3_car.get_marca() << " $" << car3_car.get_precio() << endl;
    cout << "4. " << car4_car.get_marca() << " $" << car4_car.get_precio() << endl;
    cout << "5. " << car5_car.get_marca() << " $" << car5_car.get_precio() << endl;
    cout << "6. " << car6_car.get_marca() << " $" << car6_car.get_precio() << endl;

    int option;
    int option1;
    int option2;

    cout << endl << "Tiene $" << money_available << ". Para comparar coches, presione 0. Para comprar, presione 1. (Recomendado que precione 0)" << endl;
    cin >> option;

    if (option == 0) {

        cout << "Quiere comparar los SUVs o coches F1?" << endl;
        cout << "Presione 0 para SUVs y 1 para F1." << endl;
        cout << "(Recomendado que presione 1 para comparar los coches F1)" << endl;
        cin >> option1;

        if (option1 == 0) {

            Compare comparison1 = Compare(car1_car, car2_car, car3_car);
            comparison1.compare_modelo();
            comparison1.compare_motor();
            comparison1.compare_precio();
            comparison1.compare_velocidadmax();

        } else if (option1 == 1) {

            Compare comparison1 = Compare(car4_car, car5_car, car6_car);
            comparison1.compare_modelo();
            comparison1.compare_motor();
            comparison1.compare_precio();
            comparison1.compare_velocidadmax();

        }

    }

    string nombre;
    int edad;
    string numero_cel;
    int credit_score;

    cout << "Si quiere seguir con el proceso del pago, precione el numero del coche que quiere. Si ya no, presiones 0" << endl;
    cout << "(El numero del coche es el numero que fue impreso por primera vez)" << endl;
    cin >> option2;
    cout << endl << "De su nombre:";
    cin >> nombre;
    cout << endl << "De edad:";
    cin >> edad;
    cout << endl << "De credit score (0-800):";
    cin >> credit_score;
    cout << endl << "De numero de telefono: ";
    cin >> numero_cel;

    Dueno dueno1 = Dueno(nombre, edad, credit_score, numero_cel);
    cout << "Muy bien! Dueno registrado!" << endl;

    int precio;
    int money_available;
    int down_payment;
    bool prestamo;
    int duracion_prestamo;

    cout << "Quiere pagar con prestamo? (1 por si, 0 por no (Si para que vea el codigo)) " << endl;
    cout << endl << "Cuanto dinero quiere pagar ahorita? (Downpayment)";
    cin >> down_payment;
    cout << "Cuantos meses quiere que dure su prestamo (Maximo 100)";
    cin >> duracion_prestamo;
    cout << "" << endl;

    if ( option2 == 1 ) {

        Pago pago1 = Pago(money_available, true, duracion_prestamo, down_payment, car1_car.get_precio(), dueno1);
        int money_per_month = pago1.calculo_precio();
        cout << "Gracias " << dueno1.get_nombre() << " por tu compra de " << car1_car.get_marca() << endl;

    } else if (option2 == 2) {

        Pago pago1 = Pago(money_available, true, duracion_prestamo, down_payment, car2_car.get_precio(), dueno1);
        int money_per_month = pago1.calculo_precio();
        cout << "Gracias " << dueno1.get_nombre() << " por tu compra de " << car2_car.get_marca() << endl;

    } else if (option2 == 3) {

        Pago pago1 = Pago(money_available, true, duracion_prestamo, down_payment, car3_car.get_precio(), dueno1);
        int money_per_month = pago1.calculo_precio();
        cout << "Gracias " << dueno1.get_nombre() << " por tu compra de " << car3_car.get_marca() << endl;

    } else if (option2 == 4) {

        Pago pago1 = Pago(money_available, true, duracion_prestamo, down_payment, car4_car.get_precio(), dueno1);
        int money_per_month = pago1.calculo_precio();
        cout << "Gracias " << dueno1.get_nombre() << " por tu compra de " << car4_car.get_marca() << endl;

    } else if (option2 == 5) {

        Pago pago1 = Pago(money_available, true, duracion_prestamo, down_payment, car5_car.get_precio(), dueno1);
        int money_per_month = pago1.calculo_precio();
        cout << "Gracias " << dueno1.get_nombre() << " por tu compra de " << car5_car.get_marca() << endl;

    } else if (option2 == 6) {

        Pago pago1 = Pago(money_available, true, duracion_prestamo, down_payment, car6_car.get_precio(), dueno1);
        int money_per_month = pago1.calculo_precio();
        cout << "Gracias " << dueno1.get_nombre() << " por tu compra de " << car5_car.get_marca() << endl;

    }

    cout << "La factura se mandara a " << dueno1.get_numero_cel();

}
