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

Node* deletehead(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
Node* deltail(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
         temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node* delele(Node* head, int k){
      if(head==NULL) return head;
      if( k ==1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
      }
     int count =1;
     Node* temp = head;
     Node* prev = NULL;
     while(temp){
        prev = temp;
        temp =temp->next;
        count++;
        if(count == k){
            prev->next = prev->next->next;
            return head;  
        }

     } 

      
}
void reversedll(Node* head){
    Node* current = head;
    
}
Node* removen(Node* head, int k){
    Node* temp = head;
    int count =0;
    while(temp != NULL){
        count++;
        temp->next;
    }
    int res = count-k;
    temp = head;
    for(int i =1;i<=res;i++){
        temp->next;
    }
    Node* del= temp->next;
    free(del);
    temp->next = temp->next->next;
    
    return head;

}
Node* print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    return head;
}
int main(){
    vector<int> arr= {4,5,3,8,9,23};
    
    //Node* h2 = deletehead(head1);
    //Node* h2 = deltail(head1);
    vector<int> a= {4,5,3,8};
    int n= a.size();
    Node* head1 = convertarr(a,n);
    removen(head1,2);   
}