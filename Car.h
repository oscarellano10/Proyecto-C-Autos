#ifndef CAR_H
#define CAR_H
#endif //CAR_H

using namespace std;

class Car {

    protected:

        string motor;
        string marca;
        int precio;
        int modelo;
        int velocidad_maxima;

    public:

        Car() {
            motor = "";
            marca = "";
            precio = 0;
            modelo = 0;
            velocidad_maxima = 0;
        }

        Car(string _motor, string _marca, int _precio, int _modelo, int _velocidad_maxima) {
            motor = _motor;
            marca = _marca;
            precio = _precio;
            modelo = _modelo;
            velocidad_maxima = _velocidad_maxima;

        }

        void imprime_datos() {
            cout << "Motor: " << motor << endl;
            cout << "Marca: " << marca << endl;
            cout << "Precio: " << precio << endl;
            cout << "Modelo: " << modelo << endl;
            cout << "Velocidad: " << velocidad_maxima << endl;
        }

        string get_motor() {
            return motor;
        }

        string get_marca() {
            return marca;
        }

        int get_precio() {
            return precio;
        }

        int get_modelo() {
            return modelo;
        }

        int get_velocidad_maxima() {
            return velocidad_maxima;
        }

        void set_motor(string _motor) {
            motor = _motor;
        }

        void set_marca(string _marca) {
            marca = _marca;
        }

        void set_precio(int _precio) {
            precio = _precio;
        }

        void set_modelo(int _modelo) {
            modelo = _modelo;
        }

        void set_velocidad_maxima(int _velocidad_maxima) {
            velocidad_maxima = _velocidad_maxima;
        }

};