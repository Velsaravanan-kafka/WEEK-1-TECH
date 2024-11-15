#include <bits/stdc++.h>
using namespace std;
void recursion(int n);
void Selection();
void Bubblesort();
void Insertion();
int main(){
    // int n;
    // cin>>n;
    // recursion(n);
    //Selection();
    //Bubblesort();
    Insertion();
    return 0;
}
void recursion(int n)
{
    //base condition
    if(n<1)
     return;
    cout<<"Vel\n";
    recursion(n-1);
}
void Selection()
{
    int x;
    cin>>x;
    int arr[x];
    
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i;j<x;j++){
            if(arr[j]<arr[i])
            { 
            int temp;
            temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
            }
        }

    }
     for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }
    
}
void Bubblesort(){
       int x;
    cin>>x;
    int arr[x];
    
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=x;i>=1;i--)
    {
     for(int j=i;j>=0;j--){
        if(arr[j]>arr[i])
        {
            int temp;
            temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp; 
        }
     }
    }
      for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }
}
void Insertion(){
    int x;
    cin>>x;
    int arr[x];
    
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
     for(int i=1;i<x;i++)
    {
        int j=i;
     while(j>0 && arr[j-1]>arr[j]){
            int temp;
            temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j]=temp; 
            j--;
     }
    }
      for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }
}




