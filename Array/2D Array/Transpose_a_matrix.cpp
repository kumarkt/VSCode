#include<iostream>
using namespace std;

// function
void transpose(int arr[][3] , int rows , int cols , int transposeArr[][3])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            // swap(arr[i][j] , arr[j][i])
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3],int rows , int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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

    cout<<"Printing the value "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing Array "<<endl;
    printArray(arr , rows , cols);
    cout<< "Starting Transpose"<<endl;
    int transposeArr[3][3];
    transpose(arr , rows , cols , transposeArr);
    cout<<"Printing array again"<<endl;
    printArray(transposeArr , rows , cols);
 
    return 0;

};