
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
