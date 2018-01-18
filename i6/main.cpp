#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,x,i;
    int sum =0;
    cout<<"Total number of terms to be summed: ";
    cin>>n;
    cout<<"\n";

    for(i=1;i<=n;i++)
    {
        cout<<"Term number"<<" "<<i;
        cin>>x;
        sum=sum+x;
    }

    cout<<"The sum is "<<sum;

}
