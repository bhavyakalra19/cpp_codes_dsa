#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void push (Node** head, int new_data){
    Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

int getCount(Node* head){
    int count = 0;
    Node* current = head;
    while(current != NULL){
        count++;
        current = current->next;
        cout<< current << endl;
    }
    return count;
}

int main(){

    Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    return 0;
}