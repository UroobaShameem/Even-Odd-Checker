#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number to check if its even or odd: ";
    cin>>x;
    if(x%2==0)
        cout<<x<<" is an even number";
    else
        cout<<x<<" is an odd number";
    return 0;
}