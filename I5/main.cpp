#include <iostream>
#include <math.h>
using namespace std;
int n1,n2,a,b,c;
int main()
{
    cin>>n1>>n2;
    cout<<sqrt(n1)<<""<<sqrt(n2);
    a=n1;
    b=n2;
        while(b!=0){
            a=a*a;
            b--;
            }
    cout<<a; // n1 la puterea n2
    int inversen1=0;
    while(n1!=0){
        inversen1=inversen1*10+n1%10;
        n1=n1/10;
    }
    cout<<inversen1;
    int inversen2=0;
    while(n2!=0){
        inversen2=inversen2*10+n2%10;
        n2=n2/10;
        }
    cout<<inversen2;
return 0;
}
