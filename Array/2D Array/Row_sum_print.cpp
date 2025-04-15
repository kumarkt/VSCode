#include<iostream>
using namespace std;

// Function  
void printRowWiseSum(int arr[][3] , int rows , int cols){
    // row sum - > row-wise traversal
    cout<<"printin row-wise sum"<<endl;
    for(int i=0; i<rows;i++)
    {
        int sum = 0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];

        }
        cout<< sum<<endl;
    }

}


int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // input 

    // row wise  print
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the value "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowWiseSum(arr , rows , cols);

    return 0  ;
    

}