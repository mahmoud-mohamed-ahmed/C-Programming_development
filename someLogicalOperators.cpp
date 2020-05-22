//some logical opirators
#include <iostream>
using namespace std;
int main()
{
	int grade=0 , counter , sum=0 ;
	
	while(counter <=5 && grade !=-1)
	{
		cout<<"Please Enter 5 Grades or -1 to end \n";
		cin>>grade;
		sum+=grade;
		counter++;
	}
	cout<<"the Sum of grades is " <<sum<<"\n";
	
}

