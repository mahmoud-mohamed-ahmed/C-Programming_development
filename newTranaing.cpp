#include <iostream>
using namespace std;
int main() {
	short x;
	//short y ; //the rsesult will be overload
	x=32500;
	int y ; // now we will get the real value of addition
	//but we should attention because there are limitation for variables size
	y= 2 * x;
	
	cout << y  <<endl; 
	
	
	
	return 0;
}
