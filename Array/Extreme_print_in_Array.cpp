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
        if(start > end)  // jb end bada hoga too uss time break ho jaayega 
            break;

        if(start == end)
        {
            cout<<arr[start]<<" ";    // jb odd number lenge tb last ek bach jata hai wo iska hai  
        }
        else{
            cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";

        }
        
        
        start++;
        end--;
    }
    return 0;
}
