#include<iostream>
using namespace std;

// function
void printColWiseSum(int arr[][3] , int rows ,int cols){
    // row sum - > row-wise traversal
    cout<<"printin col-wise sum"<<endl;
    for(int j=0; j<cols;j++)
    {
        int sum = 0;
        for(int i=0;i<rows;i++){
            sum = sum + arr[j][i];

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


    //Cols wise print
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[j][i];
        }
    }

    cout<<"Printing Cols wise "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0 ;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printColWiseSum(arr , rows ,cols);
};
