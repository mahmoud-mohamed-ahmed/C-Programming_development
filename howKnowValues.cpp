#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	// some of functions to learn what is the value of types variable and ascii code also
	int a=65;
	cout<<char(a) << "\n";
	 
	char e='A' ;
	cout <<int(e) <<"\n";
	
	 cout << sizeof (int) << " \n "  ;
 
	int sum ;
    sum=pow(2,32);
    cout << sum << endl ; //that is because the maximum value integer can save   4,294,967,296 if was unsign
    
 /////////////////////////////////////////////////////	
 
	int h , g ;
	h= 10 , g= 6 ;
	double c ;
	//c= a / b; //result will be integer becuse all value was asignment to integer varible
	c =  (double) h / g ;
	cout << c <<endl;
	
	
	return 0;
}
