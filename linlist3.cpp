#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    Node* back;
    int data;

    public:
    Node(Node* next1, Node* back1, int data1) {
      next = next1;
      back =back1;
      data = data1; 
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertarr(vector<int> &arr,int n){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(nullptr,prev,arr[i]);
        prev->next = temp;
        prev = temp;
           
    }  
    return head;
}
void print(Node* head){
    while(head){
        cout<< head->data<< " ";
        head = head->next;
    }
}

int main(){
    Node* head1 = convertarr();
}