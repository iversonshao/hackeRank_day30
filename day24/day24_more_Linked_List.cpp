#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node* insert(Node* head, int data){
    if(head == NULL){
        head = new Node(data);
    }
    else{
        Node *last = head;
        while(last->next != NULL){
            last = last->next;
        }
        last->next = new Node(data);
    }
    return head;
}

void display(Node* head){
    Node *start = head;
    while(start){
        cout << start->data << " ";
        start = start->next;
    }
}

void removeDuplicates(Node* head){
    Node *current = head;
    Node *next_next;
    if(current == NULL){
        return;
    }
    while(current->next != NULL){
        if(current->data == current->next->data){
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        else{
            current = current->next;
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Node* head = NULL;
    int T, data;
    cin >> T;
    while(T-- > 0){
        cin >> data;
        head = insert(head, data);
    }
    removeDuplicates(head);
    display(head);
    return 0;
}