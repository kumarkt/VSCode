#include<iostream>
using namespace std;
int main()
{
    int arr[5];

    cout<<"Enter the input value in array"<<endl;
    // Taking Input 
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    // Output 
    cout<<"Printing the double value in array"<<endl;
    
    // print double 
    for(int i=0;i<5;i++)
    { 
        cout<<arr[i]*2<<" ";

    }
    return 0;
}