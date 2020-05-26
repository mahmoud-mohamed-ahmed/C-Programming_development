#include <iostream>
#include <cmath>
using namespace std;
int main() {

    //inpout
    int a , b , c ;
    float x1 , x2 ;
    cout <<"Please enter A , B and C \n" ;
    cin>>a>>b>>c;
    //processing
    x1=(-b+ sqrt(b*b-(4*a*c))) /(2*a) ;
    x2=(-b- sqrt(b*b-(4*a*c))) /(2*a) ;
    //output
    cout<<" the first Rot X1 is   "<<x1<<endl;
    cout<<" the second Rot X2 is   "<<x2<<endl;

	return 0;
}
