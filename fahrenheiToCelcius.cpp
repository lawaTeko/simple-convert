#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
	
	double fahrenheit, result;
	
	// input
	cout << "masukan nilai fahrenheit : ";
	cin >> fahrenheit;
	
	cout << endl;
	
	// output
	result = fahrenheitToCelsius(fahrenheit);
	cout << result << " Celcius";
	
	cin.get();
	return 0;
}
