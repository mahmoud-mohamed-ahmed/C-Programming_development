#include <iostream>
using namespace std; 
//program to accept 6 grads from student and calculate the sumation
int main()//by use for loop 
{
	int grade=0 ,sum=0;
	for(int i=1; i<=6; i++)
	{
		cout<<"Please Enter your grade \n";
		cin>>grade;
		sum+=grade;
	}
	cout<<"the avrage grade is "<<sum/6 <<"\n";
	
	return 0;
}
