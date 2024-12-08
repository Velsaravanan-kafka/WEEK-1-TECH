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

void kadane(vector<int>& a){
     int sum=0;
     int maxe=INT_MIN;
     int n=a.size();
     for(int i=0;i<n;i++){
          sum+=a[i];
          if(sum>maxe){
             maxe=sum;
          }
          if(sum<0){
            //reinitialize sum as0
            sum=0;
          }
     }
     cout<<maxe;
}

void sum4(){
    
}


int main(){
    vector<int> arr= {4,7,1,0};
    vector<int> a={-2,1,-3,4,-1,2,1,-5,4};

    //Leaders(arr);
    kadane(a);
    return 0;
}