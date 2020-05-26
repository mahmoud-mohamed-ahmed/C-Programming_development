#include <iostream>
using namespace std;
int main()
{
	int num; 
    cout << "Enter an integer between 0 and 7 :  ";
	cin >> num;  
	switch (num) 
	{ case 0:  case 1:  cout << "Learning to use "; break; 
	case 2:  cout << "C++'s "; break; 
	case 3:  cout << "switch structure." << endl;  break;  
	case 4:  break;  
	case 5:  cout << "This program shows the effect ";  
	case 6:  case 7:  cout << "of the break statement." << endl;  break;  
	default:  cout << "The number is out of range." << endl;  
	}  //end of switch  cout <<"Outside of the switch structure." << endl;  //it will be executed after exiting from switch return 0;}
}
