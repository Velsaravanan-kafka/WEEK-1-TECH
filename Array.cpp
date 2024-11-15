#include <bits/stdc++.h>
using namespace std;
void largest(vector<int> &arr, int n);
void s_largest(vector<int> &arr, int n);
void leftrot(vector<int> &arr, int n);
void leftrotd(vector<int> &arr, int n,int d);
void Union();
void Intersect();
void missing();
void consecutive1();
void findeleonce();
void longsubarray();
void sort012();
void print();
int main()
{
    vector<int> arr = {4, 2, 5, 7, 9};
    int n = 5;
    int d=2;

    //largest(arr,n);
    //s_largest(arr, n);
    //leftrot(arr,n);
    //leftrotd(arr,n,d);
    //Union();
    //Intersect();
    //missing();
    //consecutive1();
    //findeleonce();
    //longsubarray();
    sort012();

    return 0;
}
void largest(vector<int> &arr, int n)
{
    int high = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > high)
        {
            high = arr[i];
        }
    }
    cout << high << endl;
}
void s_largest(vector<int> &arr, int n)
{
    int high = arr[0];
    int s_high = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > high)
        {   
            s_high = high;
            high = arr[i];
        }
        if(arr[i]>s_high && arr[i]!=high){
            s_high=arr[i];
        }
    }
    cout<< s_high<<" "<<high<<endl;
}
void leftrot(vector<int> &arr, int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void leftrotd(vector<int> &arr, int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
         arr[i]=temp[i-(n-d)];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;}
    }
void Union(){
   vector<int> a1={1,1,2,3,4,5};
   vector<int> a2={2,3,4,4,5,6};
   int n=a1.size();
   int m=a2.size();
   set<int>st;
   for(int i=0;i<n;i++){
    st.insert(a1[i]);
   }
   for(int i=0;i<m;i++){
    st.insert(a2[i]);
   }
   vector<int> temp;
   for(auto it:st){
    temp.push_back(it);
   }
   for(int i=0;i<temp.size();i++){
    cout<<temp[i];
   }
}
void Intersect(){
    vector<int> a1={1,1,2,3,4,5};
   vector<int> a2={2,3,4,4,5};
   int n=a1.size();
   int m=a2.size();
   vector<int> temp;
   int i=0;
   int j=0;
   while(i<a1.size() || j<a2.size()){
        if(a1[i]!=a2[j]){
            i++;
        }
        if(a1[i]==a2[j]){
        temp.push_back(a1[i]);
        i++;
        j++;
        }
        
   }
   for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<endl;
   }
}
void missing(){
    vector <int>a ={1,2,4,5,6};
    
    for(int i=1;i<a.size();i++){
        int flag=0;
        for(int j=0;j<a.size()-1;j++){
         if((i)==a[j]){
          flag=1;
          break;
        }
        }
         if(flag==0){
            cout<<i;
            return;
        }
       
    }
}
void consecutive1(){
    vector<int> c={1,1,0,1,1,1,0,1};
    int cnt=0;
    int max1=0;
    for(int i=0;i<c.size();i++){
        if(c[i]==1){
            cnt=cnt+1;
            max1=max(max1,cnt);
        }
        else
        cnt=0;
    }
    cout<<max1;
}
void findeleonce(){
    vector<int> c={1,2,3,1,1,1,3,1};
    map<int,int> mp;
    for(int i=0;i<c.size()-1;i++){
    mp[c[i]]++;
    }
    for(auto it : mp){
        if(it.second==1){
            cout<<it.first;
        }
    }
}
void longsubarray(){

}
void twosum(){
    vector <int> arr={3,4,5,1,7};
    map<int, int> mp;
    int target=8;
    for(int i=0;i<arr.size()-1;i++){
        int a=arr[i];
        int more =target-a;
        if(mp.find(more) == mp.end()){
           cout<<"yes";
        }
        mp[a] = i;
    }
    cout<<"no";
}
void sort012(){
    vector <int> a={0,1,2,0,1,2,0,1};
    int low= 0;
    int mid = 0;
    int n= a.size();
    int high = n-1;
while(mid<=high){
    if(a[mid]==0){
    swap(a[low],a[mid]);
     low++;
     mid++;
    }
    else if(a[mid]==1){
      mid++;
      }
    else{
        swap(a[mid],a[high]);
        high--;
      }

}
   for(int i=0;i<a.size();i++){
    cout<<a[i];
}
   
}
