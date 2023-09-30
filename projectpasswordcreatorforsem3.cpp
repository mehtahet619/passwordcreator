#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string generate_password() {
    const string valid_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#$%^&*()_";
    string password;
    int password_length = rand() % 17 + 4;

    for (int i = 0; i < password_length; ++i) {
        password.push_back(valid_chars[rand() % valid_chars.length()]);
    }

    return password;
}

int main() {
   
    srand(time(0));
    string password = generate_password();
    cout << password << endl;

    return 0;
}
