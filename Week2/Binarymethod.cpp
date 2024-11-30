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
void solve(int arr[], int n)
{
  int temp = arr[0]; // storing the first element of array in a variable
  for (int i = 1; i < n; i++) {
    arr[i-1] = arr[i];
  }
  arr[n - 1] = temp; // assigned the value of variable at the last index
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

}

int main(){
    vector<int> arr1={1,3,4,6,5};
    int arr[]={1,3,4,6,5};
    int n=sizeof(arr) / sizeof(arr[0]);
    // int n = arr.size();
    // //secondlarg(arr,n);
    // cout<< sorted(arr,n);
    solve(arr,n);
    return 0;
}