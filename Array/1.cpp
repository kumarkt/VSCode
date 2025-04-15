#include<iostream>
using namespace std;
void printArray(int arr[] , int size){
    
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

cout<< endl;

}

void inc(int arr[] , int size){
    arr[0] = arr[0] + 10;

    printArray(arr , size);

}



int main()
{
    // int arr[53];
    // char arr[106];
    // bool arr[23];
    // int arr[] = {2,3,4,6,7};
    // cout<<"Array intialization successfully"<<endl;

    // int arr[5] = {1,2,3,4,5};
    // char arr[10] = {'a','b','c','d'};

    // int arr[] = {1,3,5,7,9};
    
    //printing all values


    // int arr[10] = {1,2};

    // for(int i=0 ; i<10;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int arr[] = {5,6};
    int size = 2;
    inc(arr, size);

    printArray(arr , size);
    return 0;

}