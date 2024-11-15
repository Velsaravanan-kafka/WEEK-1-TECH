#include<bits/stdc++.h>
using namespace std;
void Hasharray();
void mpp();
int main()
{
    //Hasharray();
    mpp();
    return 0;
}
void Hasharray(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int hash[13] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num]<<endl;
    }
}
void mpp(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout << mpp[num]<<endl;
    }
}