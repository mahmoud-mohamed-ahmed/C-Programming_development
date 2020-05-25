#include <iostream>
#include <string>
using namespace std;
int main() {
	
	char  x  , elin , warning ;
	x = 'a' ;
	// escape sequence
	warning = '\a'; // '\a' assignment warning voice to a variable
	 
	elin = '\n' ; // end lin and start new lin

	cout << x  << elin << x << elin << warning <<elin ;
	
	cout <<" Mahmoud \" Mhamed " << elin ; //Exampil for 

	return 0;

}
