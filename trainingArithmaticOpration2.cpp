#include <iostream>
using namespace std;
#include <cmath>
int main() {
		
	int r ;
	const float pi=3.1459;
	float area ;
	cout <<"Please Enter Value os Redius : \n\n";
	cin>>r; cout<<endl;
	//area=(pi* pow(r,2)) ;
	area=pi*r*r; //also we can use (pi* pow(r,2)) ;
	cout<< " the area of Circle equal  "<<area<<endl<<endl;
	cout<<"___________________________________"<<endl<<endl;
	
	float c ;
	cout<<"Please Enter Value of Y : \n\n ";
	cin>>c ; cout<<endl;
	cout<<((sqrt(sin(c*3.1459/180)))/pow(c,4))+ (c/5)<<endl<<endl;
	cout<<"___________________________________"<<endl<<endl;
}
