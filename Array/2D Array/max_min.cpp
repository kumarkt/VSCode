#include<iostream>
#include<limits.h>
using namespace std;

// function

int getmax(int arr[][3] , int row , int cols)
{
    int maxi = INT_MIN; 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getmin(int arr[][3] , int row , int cols)
{
    int mini = INT_MAX; 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]<mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}



int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // input


    // Row wise print
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the  value"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Max NUmber : "<< getmax(arr , rows , cols)<<endl; ;
    cout<<"Min number : "<<getmin(arr , rows , cols)<<endl;

    return 0;
    
};
