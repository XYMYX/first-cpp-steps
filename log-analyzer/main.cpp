#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("testlog.txt");

    if (!file) {
        cout << "Datei konnte nicht geoeffnet werden." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;
    int failedCount = 0;

    while (getline(file, line)) {
        lineCount++;

        if (line.find("Failed password") != string::npos) {
            cout << line << endl;
            failedCount++;
        }
    }

    cout << "Lines total: " << lineCount << endl;
    cout << "Failed logins: " << failedCount << endl;

    return 0;
}