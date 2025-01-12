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
Node* delele(Node* head, int k){
     Node* temp = head;
     while(temp){
        if(temp->data== k){
           break;
        }
        temp = temp->next;
     }
     Node* front = temp->next;
     Node* backy = temp->back;
     front->back = backy;
     temp->next= nullptr;
     backy->next= front;
     temp->back= nullptr;
     
     free(temp);
     return head;
}
void print(Node* head){
    while(head){
        cout<< head->data<< " ";
        head = head->next;
    }
}
Node* insertdl(Node* head ){
    Node* head1 = new Node(head, nullptr,7);
    head->back = head1;
    return head1;
}
Node* insertele(Node* head,int k, int v){
    Node* temp = head;
     while(temp){
        
        if(temp->data == k){
           break;
        }
        temp = temp->next;
       
     }
    Node* backy = temp->back;
    Node* new1 = new Node(temp,backy,v);
    temp->back = new1;
    backy->next = new1;
    return head;
}
Node* reverse(Node* head){
    Node* current = head;
    Node* last = NULL;
    while(current != NULL){
        last = current->back;
        current->back = current->next;
        current->next = last;

        current = current->back;        
    }
    return last->back;
}
Node* add2(Node* head1, Node* head2){
    Node* t1 = head1;
    Node* t2 = head2;  
    Node* dummy = new Node(-1);
    Node* current = dummy;
    int carry = 0;
    while(t1!= NULL || t2 != NULL){
        int sum = carry;
        if(t1) sum = sum + t1->data;
        if(t2) sum = sum + t2->data; 
        Node* newNode = new Node(sum%10); 
        carry = sum/10;
        current->next = newNode;
        current = current->next;
        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;
    }
    if(carry){
        Node* newN = new Node(carry);
        current->next = newN; 
    }

}
Node* removen(Node* head){
    Node* temp = head;
    int count =0;
    while(temp != NULL){
        count++;
        temp->next;
    }
    cout<<count;
}
int main(){
    vector<int> arr= {4,5,3,8,9,23};
    vector<int> arr1= {3,5};
    vector<int> arr2= {4,5,9,9};
    int n= arr.size();
    int m= arr1.size();
    int o= arr2.size();
    int k = 3;
   Node* head = convertarr(arr, n);
   Node* head1 = convertarr(arr1, m);
   Node* head2 = convertarr(arr2, o);
   //delele(head,k);
   print(head1);
   //removen(head2);

}