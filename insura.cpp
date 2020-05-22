//The program for determining who will be insured by employees according to some conditions
#include <iostream>
using namespace std;
int main()
{
	char marital , gender;
	int age;
	cout<<"Enter your marital status \n";
	cin>>marital;
	cout<<"Enter your gender \n";
	cin>>gender;
	cout<<"Enter your age \n";
	cin>>age;
	if(marital=='m'|| (marital=='s'&& gender=='m'&&age>30)||
	(marital=='s'&& gender=='f'&&age>25))
	cout<<"you well get insurnce\n";
	else
	cout<<"you will not get insurance\n";
	
} 
