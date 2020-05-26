#include <iostream>
using namespace std;
int main()
//to accept only positive number by while
{
	int num=0 , sum=0;
	while (num>=0)
	{
	cout<<"enter positive number \n";
	cin>> num;
	sum +=num;
	}
	cout<<"the sum of positive number = "<< sum<<"\n";
}


