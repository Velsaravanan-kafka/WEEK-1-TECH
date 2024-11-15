#include<bits/stdc++.h>
using namespace std;
void Findele(vector<int> &a);
void lbub(vector <int> &a);

int main(){
vector<int> a={1,3,4,7,8};
//Findele(a);
lbub(a);
return 0;                        
}


void Findele(vector<int> &a){
    int target=8;
    int low=0;
    int high =a.size()-1;
    if(low>high)
       return;
    int mid =(low+high)/2;
    if (a[mid]==target) {
        cout<<mid; 
        return;}
    if(a[mid]<target){
      low=mid+1;
    }
    else
    high=mid;
    Findele(a);
}
void lbub(vector <int> &a){
  //lowerbound -> smallest element with the condition a[i](element)>=target;
  int low=0;
  int high=a.size()-1;
  int ans = a.size()+1;
  int target=7;
  while(low<=high){
    int mid=(low+high)/2;
     if(a[mid]>=target){
      ans=mid;
      high=mid-1;
     }
     else
     low=mid+1;
  }
  cout<<ans;
}
void firstoccur(){
  vector<int> a={1,2,3,5,5,7};
  int low=0;
  int high=a.size()-1;
  int ans = a.size()+1;
  int target=5;
  int mid=0;
  while(low<=high){
     mid=(low+high)/2;
     if(a[mid]>=target){
      ans=mid;
      high=mid-1;
     }
     else
     low=mid+1;
  }
  cout<<mid;
} 