#include<iostream>
using namespace std;

int fact(int X)
{
    int f =1;
    for(int i=2;i<=X;i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n , int r)
{
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;

}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" "; // icj
        }
        cout<<endl;
    }
}