// lawaTeko, Kairatu
// Konversi Sederhana Fahrenheit ke Celcius
#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
	
	double fahrenheit, result;
	
	// bagian input
	cout << "INPUT FAHRENHEIT : ";
	cin >> fahrenheit;
	
	cout << endl;
	
	// bagian output
	result = fahrenheitToCelsius(fahrenheit);
	cout << result << " Celcius";
	
	cin.get();
	return 0;
}
