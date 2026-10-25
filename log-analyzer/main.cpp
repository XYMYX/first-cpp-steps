#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file  ("testlog.txt");
    if (!file) {
        cout << "Error: could not open testlog.txt" << endl;
        return 1;
    }

    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
        cout << count << ": " << line << endl;
    }

    cout << "lines read: " << count << endl;
    return 0;
}