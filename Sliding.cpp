#include<bits/stdc++.h>
#include<string>
using namespace std;

void longsubarr(vector<int> &arr,int k){
    int maxi =0;
    int sum =0;
    int i = 0; 
    int j =0;
    int n= arr.size();
    while(j<n){
      while(sum>k){
        sum -= arr[i];
        i = i+1; 
      }
      //expand
       while(sum<=k){
        sum += arr[j];
        maxi = max(maxi, j-i+1);
         j = j+1;
       }
      
    }
    cout<<maxi;
}
void Fruitbasket(vector<int> &a,int k){
     int l=0;
     int r=0;
     int len = 0;
     int maxlen = 0;
     int n = a.size();
     map<int,int>mpp;
      while(r<n){
        mpp[a[r]]++;
        if(mpp.size()>k){
          mpp[a[l]]--;
          if(mpp[a[l]]==0) mpp.erase(a[l]);
          l++;
        }
        len = r-l+1;
        maxlen = max(len,maxlen);
        r++;
     }
     cout<<maxlen;    
}
void longestsub(string s){
    
}
void maxconsec011(vector<int> &a){
  int k =2;
  int n = a.size();
  int len, maxlen = 0;
  for(int i=0;i<n;i++){
    int zeros = 0;
    for(int j = i;j<n;j++){
      if(a[j]==0) zeros++;
      if(zeros<=k){
         len = j-i+1;
         maxlen = max(len,maxlen);
      }
      else
      break;
    }
  }
  cout<<maxlen;
  
}
void maxconsec012(vector<int>a){
    int k = 2;
    int r = 0;
    int l =0;
    int len = 0;
    int maxlen = 0;
    int zeros = 0;
    int n = a.size();
    while(r<n){
      if (a[r] == 0) zeros++; 
      if(zeros>k){
        if (a[l] == 0) zeros--;
        l++;
      }
      len = r-l+1;
      maxlen = max(len,maxlen);
      r++;
    }
    cout<<maxlen;
}  
void noofsubstring(string s){
  int left =0; int right =0; int count = 0;

      for(int i=0;i<s.length();i++){
        int hash[3] = {0};
        for(int j =i;j<s.length();j++){
            hash[s[j] - 'a'] = 1;
            if(hash[0] +hash[1] +hash[2]== 3) count = count + 1;
        }
      }
      cout<< count;
}


int main(){
  vector<int>arr = {2,5,1,7,10};
  int k = 14;
  string s = "bbacbb";
  vector<int>a ={1,1,1,0,0,0,1,1,1,1,0};
  vector<int>fruits= {3,3,3,1,2,1,1,2,3,3,4};
  Fruitbasket(fruits,2);
  //losubarr(arr, k);
  //noofsubstring(s);
  //maxconsec011(a);
  //maxconsec012(a);
  return 0;
}