# include<iostream>
# include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans = 0;

    for(int i=0 ; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<" Enter the value of array " <<endl;
    cin>>n;

    vector<int>arr(n);
    cout<< "Enter the element "<<endl;

    // taking input
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    } 

    int uniquElement = findUnique(arr);

    cout<<"Unique Element is " << uniquElement <<endl;

    return 0;


}
