#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[] = {1,3,5,7,9};
    int sizea = 5;
    int brr[] = {2,4,6,8};
    int sizeb = 4;

    vector<int>ans;

    // push all element of vector arr
    for(int i=0;i<5;i++){
        ans.push_back(arr[i]);
    }

     // push all element of vector brr
     for(int i=0;i<4;i++){
        ans.push_back(brr[i]);
    }

    // print ans;
    cout<<"Printng ans array" << endl;
    for(int i=0;i<ans.size();i++){
        cout<< ans[i] << " ";
    }
}


