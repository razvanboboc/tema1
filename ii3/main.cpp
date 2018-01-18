#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{

char firstname[20];
char lastname[20];

cout<<"Enter first name: ";
gets(firstname);
cout<<"Enter last name: ";
gets(lastname);

cout<<'\n'<<'\n';

cout<<"First name:"<<firstname;
cout<<"Last name:"<<lastname;


}
