#include <iostream>
using namespace std;

int main()
{
	int grade=0 , counter=1 , sum=0;
	cout<<"enter 6 grades \n";
	do
	{
	    cin>> grade;
		sum+=grade;
		counter++;
	}
	while(counter <=5 && grade !=-1);
	cout<<"the sum of positive numbers=" <<sum<<"\n";

}
