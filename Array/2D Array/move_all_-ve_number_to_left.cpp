#include<iostream>
using namespace std;

void moveAllNegToLeft(int*a , int n){
    // Dutch National Flag Algo.

    int l=0 , h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l] , a[h]);
        }
    }
}
int main()
{
    int a[] = {0,-1,-3,-5,-6};
    int n =sizeof(a)/sizeof(int);

    moveAllNegToLeft(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;



}