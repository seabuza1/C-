// Aula 7 - Exercício 3
// Classe Termometro: bloqueia temperaturas abaixo do zero absoluto
// e converte para Fahrenheit sem atributo extra.
#include <iostream>
#include <iomanip>
using namespace std;

class Termometro {
private:
    double temperaturaCelsius;

public:
    // Construtor inicia em 25.0 °C
    Termometro() : temperaturaCelsius(25.0) {}

    // Setter bloqueia valores abaixo do zero absoluto (-273.15 °C)
    void setTemperaturaCelsius(double temp) {
        if (temp >= -273.15) {
            temperaturaCelsius = temp;
        } else {
            cout << "[ERRO] Temperatura " << temp
                 << " C e fisicamente impossivel (abaixo do zero absoluto)." << endl;
        }
    }

    double getTemperaturaCelsius() const {
        return temperaturaCelsius;
    }

    // Conversão calculada na hora, sem novo atributo
    double getTemperaturaFahrenheit() const {
        return temperaturaCelsius * 9.0 / 5.0 + 32.0;
    }
};

int main() {
    cout << fixed << setprecision(2);

    Termometro t;
    cout << "Temperatura inicial: " << t.getTemperaturaCelsius() << " C = "
         << t.getTemperaturaFahrenheit() << " F" << endl;

    cout << "\nDefinindo 100 C..." << endl;
    t.setTemperaturaCelsius(100.0);
    cout << t.getTemperaturaCelsius() << " C = "
         << t.getTemperaturaFahrenheit() << " F" << endl;

    cout << "\nTentando definir -300 C..." << endl;
    t.setTemperaturaCelsius(-300.0); // deve ser bloqueado
    cout << "Temperatura permanece: " << t.getTemperaturaCelsius() << " C" << endl;

    return 0;
}
