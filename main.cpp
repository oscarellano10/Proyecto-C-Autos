#include <iostream>
#include "deportivo.h"
#include <pago.h>
#include <sedan.h>
#include <suv.h>

using namespace std;

// Definicion de variables
int choice;

int menu() {

    cout << "1. SEDAN" << endl;
    cout << "2. SUV" << endl;
    cout << "3. DEPORTIVO" << endl;

}

int main() {

    cout << "Bienvenido al catalogo para coches 2024!" << endl;
    cout << "Que tipo de coche va a querer?" << endl << endl;
    cout << menu() << endl;
    cin >> choice;

    if (choice == 1) {

        cout << "SEDAN CHOSEN" << endl;
        // Display Sedan Cars

    } else if (choice == 2) {

        cout << "SUV CHOSEN" << endl;
        // Display SUV Cars

    } else if (choice == 3) {

        cout << "DEPORTIVO CHOSEN" << endl;
        // Display Sports Cars

    } else {

        //

    }

}