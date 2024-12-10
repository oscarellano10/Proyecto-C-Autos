#ifndef COMPARE_H
#define COMPARE_H
using namespace std;

class Compare {

    private:

        Car car1;
        Car car2;
        Car car3;

    public:

        Compare() {

            car1 = Car();
            car2 = Car();
            car3 = Car();

        }

        Compare(Car _car1, Car _car2, Car _car3) {

            car1 = _car1;
            car2 = _car2;
            car3 = _car3;

        }

        void compare_motor () {

            cout << "---------------------------------------------" << endl;
            cout << car1.get_marca() << ": " << car1.get_motor() << "    ";
            cout << car2.get_marca() << ": " << car2.get_motor() << "    ";
            cout << car3.get_marca() << ": " << car3.get_motor() << endl;
            cout << "---------------------------------------------" << endl;

        }

        void compare_modelo() {

            cout << "---------------------------------------------" << endl;
            cout << car1.get_marca() << ": " << car1.get_modelo() << "    ";
            cout << car2.get_marca() << ": " << car2.get_modelo() << "    ";
            cout << car3.get_marca() << ": " << car3.get_modelo() << endl;
            cout << "---------------------------------------------" << endl;

        }

        void compare_precio() {

            cout << "---------------------------------------------" << endl;
            cout << car1.get_marca() << ": $" << car1.get_precio() << "    ";
            cout << car2.get_marca() << ": $" << car2.get_precio() << "    ";
            cout << car3.get_marca() << ": $" << car3.get_precio() << endl;
            cout << "---------------------------------------------" << endl;

        }

        void compare_velocidadmax() {

            cout << "---------------------------------------------" << endl;
            cout << car1.get_marca() << ": " << car1.get_velocidad_maxima() << "kmh    ";
            cout << car2.get_marca() << ": " << car2.get_velocidad_maxima() << "kmh    ";
            cout << car3.get_marca() << ": " << car3.get_velocidad_maxima() << "kmh" << endl;
            cout << "---------------------------------------------" << endl;

        }

};

#endif //COMPARE_H
