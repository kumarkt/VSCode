#include<iostream>
using namespace std;
int main()
{
    int x = 122;
    int *p = &x;
    cout<<x<<endl;
    // update karna hai 
    // x = 90;
    //without x ke update karna hai
    *p = 6;
    
    cout<<x;
}