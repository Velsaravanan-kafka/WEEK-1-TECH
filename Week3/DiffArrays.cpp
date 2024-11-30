#include<bits/stdc++.h>
using namespace std;
void Leaders(vector<int>& arr){
   int maxu = INT_MIN;
   vector<int> ans;
   int n= arr.size();
   for(int i=n-1;i>=0;--i){
    if(arr[i]>= maxu){
         ans.push_back(arr[i]);
         maxu = arr[i];
    }
   }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<< endl;
}
int main(){
    vector<int> arr= {4,7,1,0};
    Leaders(arr);
    return 0;
}