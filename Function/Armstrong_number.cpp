#include<iostream>
#include<math.h>
using namespace std;
int countdigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n /= 10;
    }
    return count;

}

void  Armstrong(int num , int digit)
{
    int n = num , ans = 0 , rem;
    while(n)
    {
        rem = n % 10;
        n /= 10;

        ans = ans + pow(rem , digit);
    }
    if(ans == num)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
}

int main()
{
    int num;
    cin>>num;

    // count digit
    int digit = countdigit(num);

    // Armstrong number
    Armstrong(num , digit);
}