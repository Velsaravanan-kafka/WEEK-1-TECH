#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convert(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<6;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int lengthof(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    vector<int> arr ={9,2,8,9,0,1};
    Node* head = convert(arr);
    Node* temp = head;
    while(temp){
        cout<<temp->data << " ";
        temp = temp->next;
    }
    cout<<lengthof(head);

   
}