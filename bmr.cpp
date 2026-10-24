#include <iostream>
#include <iomanip>

using namespace std;
int main () {
    char geschlecht;
    double weight, height, bmr;
    int age;
    cout << "Kalorien Rechner!" << endl;
    
    cout << "Bitte geben sie ihr Geschlecht ein (M/W)" << endl;
    cin >> geschlecht;

    while (geschlecht != 'm' && geschlecht != 'M' &&
     geschlecht != 'w' && geschlecht != 'W') {

        cout << "Bitte nur M oder W eingeben: ";
        cin >> geschlecht;

    }

    cout << "Wie viel Wiegen sie in KG?" << endl;
    cin >> weight;

    cout << "Geben sie Ihre Groesse in Zentimetern ein" << endl;
    cin >> height;

    cout << " Wie Alt sind sie?" << endl;
    cin >> age;

    if ( geschlecht == 'm' || geschlecht == 'M') {
        bmr = 66.5 + (13.75 * weight) + (5.003 * height) - (6.75 * age);
}
else { 
    bmr = 655.1 + (9.563 * weight) + (1.850 * height) - (4.676 * age);

}

cout << fixed << setprecision(0);
cout << "Dein Grundumsatz betraegt ca. " << bmr << " kcal" << endl;

return 0;
}