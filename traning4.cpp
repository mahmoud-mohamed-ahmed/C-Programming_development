
#include <iostream>
using namespace std;
int main()
{
char grade;
cout<<"Please Enter a character representing your grade : "<<endl; 
cin>>grade ;
switch (grade) 
{ //the expression is a variable identifier.
case 'A': case 'a'://Each case label specifies a different action to take depending on the value of grade.
cout << "The grade point is 4.0."; break;
case 'B':
cout << "The grade point is 3.0."; break;
case 'C':
cout << "The grade point is 2.0."; break;
case 'D':
cout << "The grade point is 1.0."; break;
case 'F':
cout << "The grade point is 0.0."; break;
default:
cout << "The grade is invalid."; }
return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
int score;
char grade;
cout <<"Enter your score \n ";
cin >> score;
switch (score / 10) {case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
grade = 'F';
break; //the first break!
case 6:
grade = 'D';
break;
case 7:
grade = 'C';
break;
case 8:
grade = 'B';
break;
case 9: //there is no break!
case 10:
grade = 'A';
break;
default:
cout << "Invalid test score." << endl;
} //end of switch
cout<<"The grade is: "<<grade<<endl;
return 0; } //end of main
*/
