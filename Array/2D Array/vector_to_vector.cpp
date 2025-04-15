#include<iostream>
#include<vector>
using namespace std;
int main()
{
    for(int i=0 ; i<arr.size();i++)
    {
        for(int j=0 ;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int row = 5;
    int col = 5;
    vector<vector<int> >arr(row , vector<int>(col,-8));
}