#include <bits/stdc++.h>
using namespace std;
void secondlarg(vector<int>& arr,int n){
     sort(arr.begin(),arr.end());
     cout<<arr[n-2];
}
bool sorted(vector<int>& arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<=arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr={1,3,4,6,5};
    int n = arr.size();
    //secondlarg(arr,n);
    cout<< sorted(arr,n);
    return 0;
}