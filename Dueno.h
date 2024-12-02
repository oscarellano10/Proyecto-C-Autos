#ifndef DUENO_H
#define DUENO_H

#include <iostream>
using namespace std;

class Dueno {

    private:

        string nombre;
        int edad;
        string numero_cel;
        int credit_score;

    public:

        Dueno() {
            nombre = "";
            edad = 0;
            credit_score = 0;
            numero_cel = "";
        }

        Dueno(string _nombre, int _edad, int _credit_score, string _numero_cel) {
            nombre = _nombre;
            edad = _edad;
            credit_score = _credit_score;
            numero_cel = _numero_cel;
        }

        void imprime_datos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Credito: " << credit_score << endl;
            cout << "Numero cel: " << numero_cel << endl;
        }

        // Getters

        string get_nombre() {
            return nombre;
        }

        int get_edad() {
            return edad;
        }

        int get_credito() {
            return credit_score;
        }

        string get_numero_cel() {
            return numero_cel;
        }

        // Setters

        void set_nombre(string _nombre) {
            nombre = _nombre;
        }

        void set_edad(int _edad) {
            edad = _edad;
        }

        void set_credit_score(int _credit_score) {
            credit_score = _credit_score;
        }

        void set_numero_cel(string _numero_cel) {
            numero_cel = _numero_cel;
        }

};

#endif //DUENO_H