#include <iostream>
using namespace std;
int main()
{
    char ch = 'x';
	cout<<"Please Enter value for I \n";
	cin>>ch;

   	switch (ch)
	{
	case 'v'   :
		cout<<"I am in case 1 \n";break;
	case 'a' :
		cout<<"I am in case 2 \n";break;
	case 'c' :
		cout<<"I am in case 3 \n";break;
    case 'b' :
		cout<<"I am in case 4 \n";break;
	case 50 :
		cout<<"I am in case 5 \n";break;
	case 60 :
		cout<<"I am in case 6 \n";break;
    default:
		cout<<"I am in default \n";
}
}

