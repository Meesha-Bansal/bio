#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;
    node(int val){
        data = val;
        back = NULL;
        next = NULL;
    }
};
node* reverse(node* head){
    if(head == NULL || head->next == nullptr){
        return head;
    }
    node* curr = head;
    node* prev = nullptr;
    node* front = nullptr;
    while(curr!= nullptr){
        front = curr->next;

        curr->next = prev;
        curr->back = front;
        prev = curr;
        curr = front;
        // if(front != nullptr){

        //     front = front->next;
        // }
    }
    return prev;
}   
node* removeDup(node* head){
    if(head==NULL|| head->next== NULL){
            return head;
        }
    node* temp = head;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            node* front = temp->next;
            temp->next = front->next;
            front->next->back = temp;
            delete front;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}
node* deleteAllOccur(node* head, int target){
    if(head == nullptr){
        return nullptr;
    }
    while(head->data == target){
            node* temp = head;
            head = head->next;
            temp->next = NULL;
        }
        node* curr = head->next;
        node* prev = head;
        while(curr != NULL){
            if(curr->data == target){
                node* temp = curr;
                prev->next = curr->next;
                curr->next->back = prev;
                curr = curr->next;
                delete temp;
                
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    // node* head = new node(3);
    // head->next = new node(3);
    // head->next->next = new node(4);
    // head->next->next->next = new node(4);
    // head->next->next->next->next = new node(5);
    
    // cout << "Original List: ";
    // node* temp = head;
    // print(temp);
    // cout << endl;

    // temp = reverse(temp);
    // cout << "Reversed List: ";
    // print(temp);
    // cout << endl;
    
    // temp = deleteAllOccur(temp, 3);
    // print(temp);
    // cout << endl;

    // temp = removeDup(temp);
    // print(temp);
    // cout << endl;

    int arr[4];
    cout<<arr[3];
    return 0;
}