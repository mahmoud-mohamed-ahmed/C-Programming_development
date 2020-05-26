#include <iostream>
using namespace std;
#include <cmath>
int main() {
	
	cout<<log(10)<<endl<<endl;
	cout<<floor(5.9)<<endl<<endl;
	cout<<ceil(0.3)<<endl<<endl;
	cout<<fabs(-7)<<endl<<endl;
		
	float d ;
	cout<<"Please Enter Value of D : \n\n ";
	cin>>d ; cout<<endl;
	cout<<(sqrt(2*sin(pow(d,3)))/ pow(d,5))+exp(2)<<endl<<endl;
	cout<<"___________________________________"<<endl<<endl;
	
	enum months{jan=31,fep=28,mar=31,pr=30,may=31,jun=30,jul=31,aug=31,sep=30,oct=31,nov=30,dec};
	cout<<jan-fep <<endl<<endl;
	
	enum season{winter=1,soring=2 ,summer=3, autumn=4};
	cout<<season{autumn} <<endl<<endl;
	season s1=summer;
	cout <<s1;
	cout<<"___________________________________"<<endl<<endl;
	
	int n1, n2, n3, max ; 
	cout<<"Please Enter Three Numbers : \n\n";
	cin>>n1>>n2>>n3;
	cout<<endl<<endl;
	max=n1;
	if(max<n2)
		max=n2;
	if(n3>n2)
	max=n3;
//	if(n2>max)
//		max=n2;
//	if(n3>max)
//		max=n3;
	cout<<max;	
	cout<<"___________________________________"<<endl<<endl;	

	int a, b;
	char op;
	cout<<"Please Enter Tow Opirand : \n\n"; cin>>a>>b;
	cout<<"Please the Operator : \n\n"; cin>>op;
	if(op=='+')
		cout<<a+b;
	if(op=='-')
		cout<<a-b;
	if(op=='*')
		cout<<a*b;
	if(op=='/')
		cout<<a/b;
	if(op=='%')
		cout<<a%b; cout<<endl<<endl;
	cout<<"___________________________________"<<endl<<endl;	
	return 0;
}
