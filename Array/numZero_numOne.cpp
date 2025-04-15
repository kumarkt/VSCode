#include<iostream>
using namespace std ;
int main()
{
    int arr[] ={0,0,1,0,1,1,1,0,0};
    int size = 9;

    int numZero = 0;
    int numOne  = 0;

    for(int i=0; i<size;i++)
    // if Zero found , increment numZero
    {
        if(arr[i]==0){
            numZero++;
        }
    // if One found , increment numOne
        if(arr[i] ==1){
            numOne++;
        }
    }

    cout<<"Number of Zeros "<<numZero << endl;
    cout<<"NUmber of One "<<numOne<<endl;

}