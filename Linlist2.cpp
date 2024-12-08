#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    
};

Node* convertarr(vector<int> &arr,int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }  
    return head;
}

int main(){
    vector<int> arr= {4,5,3,8,9,23};
    int n= arr.size();
    Node* head1 = convertarr(arr,n);
    Node* temp = head1;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    
}