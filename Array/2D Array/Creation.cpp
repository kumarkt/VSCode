#include<iostream>
using namespace std;
int main()
{
    // // declare 2D array
    // int arr[3][3];

    // //initialisation
    // int brr[3][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {2,4,8}};

    //     // row-wise print
    //     // outer loop
    //     for(int i=0;i<3;i++)
    //     {
    //         // for every row, we need to print vlaue in each column
    //         for(int j=0; j<3;j++)
    //         {
    //             cout<<brr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     } 

    //     cout<<"Printing Column wise"<<endl<<endl;

    //     // column print
    //     for(int i=0;i<3;i++)
    //     {
    //         // for every row, we need to print vlaue in each column
    //         for(int j=0; j<3;j++)
    //         {
    //             cout<<brr[j][i]<<" ";
    //         }
    //         cout<<endl;

    //     }

    int arr[3][3];
    int rows = 3;
    int col = 3;

    // input 


    // row wise input 
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    // cout<<"Printing row wise"<<endl;
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // col wise input 
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[j][i];
        }
    }

    cout<<"Printing COl wise"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0; 
    
}