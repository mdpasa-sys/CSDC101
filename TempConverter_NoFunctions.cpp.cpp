#include <iostream>
using namespace std;

int main() {
    int choice;
    float temperature, result;

    cout<<"Celsius to Fahrenheit ";
    cout<<"Fahrenheit to Celsius ";
    cout<<"Enter choice: ";
    cin>> choice;

    if(choice == 1) {
        cout<<"Enter temperature in Celsius: ";
        cin>> temperature;

        result = (temperature * 9.0 / 5.0) + 32;

        cout<<"Result: "<< temperature <<"°C = "<< result <<"°F ";
    } 
    else if(choice == 2) {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>> temperature;

        result = (temperature - 32) * 5.0 / 9.0;

        cout<<"Result: " << temperature <<"°F = "<< result <<"°C ";
    } 
    else {
        cout<<"Invalid choice. ";
    }

    return 0;
}
