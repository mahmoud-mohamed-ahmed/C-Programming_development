#include <iostream>
#include <cmath>
using namespace std;
//tyoes of data for variable 
int main() {
	//second type is makes variable to take float value
	float b=32;
	cout<< pow( 2 , b) <<endl;
	
	double c = 2;
	cout << pow(c ,64) <<endl; // !!! why this result ?
	
	long double x , y;
	x = pow(2 , 128); // !!! and why this result ?
	cout<< y << endl;
	
	const float pi = 3.14159;
	//pi = 6.19 ; we dont able to change value of constvariable
	cout<< pi <<endl;
	
	// ther aare logical operator return value true=1 or false=0
	bool h = true    , i= false ;
	cout << h << endl << i <<endl ;
	return 0;
}
