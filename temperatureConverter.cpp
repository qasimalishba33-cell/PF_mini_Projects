#include <iostream>
using namespace std;

int main() {
    double temp;
    char choice;

    cout << "Convert Temperature\n";
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Convert to (C/F)? ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        double fahrenheit = (temp * 9 / 5) + 32;
        cout << temp << "°C = " << fahrenheit << "°F\n";
    } 
    else if (choice == 'C' || choice == 'c') {
        double celsius = (temp - 32) * 5 / 9;
        cout << temp << "°F = " << celsius << "°C\n";
    } 
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
