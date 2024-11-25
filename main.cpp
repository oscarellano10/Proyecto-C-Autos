#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Formula1.h"
#include "MotorEspecial.h"

using namespace std;

int main() {

    Car car1_car = Car("V6", "Porsche", 100000, 2024, 200);
    SUV car1_suv = SUV(10, 5, 1000, 100, car1_car);
    car1_suv.imprime_datos();

    cout << "" << endl;

    Car car2_car = Car("V10", "Ferrari", 10000000, 2025, 500);
    Formula1 car2_formula1 = Formula1(50, "Steel", car2_car);
    MotorEspecial car2_engine = MotorEspecial(10, 5000, 200, "Super Motor 2.0", car2_formula1);
    car2_engine.imprime_datos();
}