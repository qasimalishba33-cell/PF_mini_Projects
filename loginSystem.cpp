#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    cout << "=== Login System ===\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "1234")
        cout << "Login successful! Welcome, " << username << ".\n";
    else
        cout << "Invalid username or password!\n";

    return 0;
}
