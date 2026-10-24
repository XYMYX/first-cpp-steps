#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);

int main() {
    char wahl;
    double temp;
    char nochmal;

    cout << fixed << setprecision(2);

    do {
        cout << "Dies ist ein Temperatur-Umrechner!" << endl;
        cout << "Was moechtest du umrechnen?" << endl;
        cout << "C = Celsius nach Fahrenheit" << endl;
        cout << "F = Fahrenheit nach Celsius" << endl;

        cout << "Deine Wahl (C/F): ";
        cin >> wahl;
        wahl = toupper(wahl);

        while (wahl != 'C' && wahl != 'F') {
            cout << "Bitte C oder F eingeben: ";
            cin >> wahl;
            wahl = toupper(wahl);
        }

        cout << "Gib die Temperatur ein: ";
        while (!(cin >> temp)) {
            cout << "Bitte eine Zahl eingeben: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if (wahl == 'C') {
            cout << temp << " C = " << celsiusToFahrenheit(temp) << " F" << endl;
        } else {
            cout << temp << " F = " << fahrenheitToCelsius(temp) << " C" << endl;
        }

        cout << "Noch eine Rechnung? (J/N): ";
        cin >> nochmal;
        nochmal = toupper(nochmal);

        while (nochmal != 'J' && nochmal != 'N') {
            cout << "Bitte J oder N eingeben: ";
            cin >> nochmal;
            nochmal = toupper(nochmal);
        }
    } while (nochmal == 'J');

    cout << "Bis bald!" << endl;
    return 0;
}

double celsiusToFahrenheit(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

double fahrenheitToCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}
