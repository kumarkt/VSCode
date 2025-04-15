#include<iostream>
using namespace std;
int main()
{
    // array initialization
    // int arr[] = {2,3,4,5,6};
    // int brr[] = {2,3,4,5,6,7,8,9};
    // int crr[10] = {2,3,4,5,6};
    // int drr[ ] = {2,3,4,5,7,8}; 

    // cout<<"Array initialization successfully" <<endl;


    // int arr[] = {1,3,5,7,9};

    // // printing all values
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int arr[10];

    cout<<"Enter the input value in array"<<endl;

    // Taking input in array  
    for(int i=0;i<10;i++)
    {
        cin>> arr[i];
    }

    //Printing
    cout<<"Printing the value in arra"<<endl;
    for(int i=0; i<10; i++){
        cout<< arr[i]<<" ";
    }

  

    return 0;

}