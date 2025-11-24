#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
float cToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
float fToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}


int main() {
    int choice;
    float temperature, converted;
    
    cout<<"Coose conversion type: ";
    cout<<"1 - Celsius to Fahrenheit ";
    cout<<"2 - Fahrenheit to Celsius ";
    cout<<"Enter your choice on 1 or 2: ";
    cin>> choice;
    
    if(choice == 1){
        cout<<"Enter temperature in Celsius: ";
        cin>> temperature;
        converted = cToFahrenheit(temperature);
        cout<< temperature << "°C is "<< converted <<"°F ";
        
    }
    else if(choice == 2){
        cout<<"Enter temperature in Fahrenheit: ";
        cin>> temperature;
        converted = fToCelsius(temperature);
        cout<< temperature << "°F is "<< converted << "°C ";
        
    }
    else{
        cout<<"Invalid choice. Enter 1 or 2. ";
    }
    
    return 0;
}
    
    