#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

using namespace std;

// Konvertierungen über Celsius als Hub
double toCelsius(double val, char from);
double fromCelsius(double c, char to);

int main() {
    char from, to;
    double temp;
    char nochmal;

    cout << fixed << setprecision(2);

    do {
        cout << "\n=== Temperatur Umrechner ===" << endl;
        cout << "Formate: C = Celsius, F = Fahrenheit, K = Kelvin" << endl;

        cout << "Von (C/F/K): ";
        cin >> from;
        from = toupper(from);
        while (from != 'C' && from != 'F' && from != 'K') {
            cout << "Bitte C, F oder K eingeben: ";
            cin >> from;
            from = toupper(from);
        }

        cout << "Nach (C/F/K): ";
        cin >> to;
        to = toupper(to);
        while (to != 'C' && to != 'F' && to != 'K') {
            cout << "Bitte C, F oder K eingeben: ";
            cin >> to;
            to = toupper(to);
        }

        cout << "Gib die Temperatur ein: ";
        while (!(cin >> temp)) {
            cout << "Bitte eine Zahl eingeben: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (from == 'K' && temp < 0) {
            cout << "Fehler: Kelvin kann nicht unter 0 sein!" << endl;
            continue;
        }

        double inC = toCelsius(temp, from);

        if (inC < -273.15) {
            cout << "Fehler: Temperatur unter absolutem Nullpunkt (-273.15 C)!" << endl;
            continue;
        }

        double result = fromCelsius(inC, to);

        cout << temp << " " << from << " = " << result << " " << to << endl;

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

double toCelsius(double val, char from) {
    if (from == 'C') return val;
    if (from == 'F') return (val - 32.0) * 5.0 / 9.0;
    if (from == 'K') return val - 273.15;
    return val;
}

double fromCelsius(double c, char to) {
    if (to == 'C') return c;
    if (to == 'F') return c * 9.0 / 5.0 + 32.0;
    if (to == 'K') return c + 273.15;
    return c;
}
