// lawaTeko, Kairatu
// Project Konversi sederhana Fahrenheit ke Celcius
#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
	
	double fahrenheit, result;
	
	// bagian Input =
	cout << "masukan nilai fahrenheit : ";
	cin >> fahrenheit;
	
	cout << endl;
	
	// bagian Output =
	result = fahrenheitToCelsius(fahrenheit);
	cout << "Fahrenheit = " << fahrenheit << " konversi ke " << result << " Celcius";
	
	cin.get();
	return 0;
}
