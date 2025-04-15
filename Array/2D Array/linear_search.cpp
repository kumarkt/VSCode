#include<iostream>
using namespace std;
// function 

bool findkey(int arr[][3],int rows , int cols , int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
        }
    }
    // value is not present 
    return false ;
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

    int key = 1;
    if(findkey(arr , 3 , 3, key))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }


}