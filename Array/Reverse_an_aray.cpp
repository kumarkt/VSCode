#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {10,20,30,40,50,60,70};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while(start<=end)
    {
        // step 1:
        swap(arr[start],arr[end]);
        // step 2:
        start++;
        // step 3;
        end--;
    }

    // printing arry
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}