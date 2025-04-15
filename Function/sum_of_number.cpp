#include<iostream>
using namespace std;

int sum(int m , int n) // function Declare 
{
    int ans = m + n;  // Function define
    return ans;
}
int mul(int m , int n)
{
    int ans = m * n;
    return ans ;
}

int main()
{
    int a,b;
    cin>>a>>b;


    // function call
    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
}