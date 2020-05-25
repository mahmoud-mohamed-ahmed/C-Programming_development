#include <iostream>
using namespace std;
int main()
//use if statement to test Even and Odd numbers with remander division
{
	int num,sumeven=0,sumodd=0;
	for (int i=1 ; i<=10; i++)
	{
		cout<< "enter number\n";
		cin>>num;
		if(num%2==0)
			sumeven+=num;
		else
			sumodd+=num;	
	}
	cout<<"the sum of even is" <<sumeven<<"\n";
	cout<<"the sum of odd is"<<sumodd<<"\n";
}
