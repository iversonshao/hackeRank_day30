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
    Node *temp;
    while(current != NULL && current->next != NULL){
        Node *runner = current;
        while (runner->next != NULL){
            if(current->data == runner->next->data){
                temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            }
            else{
                runner = runner->next;
            }
        }
        current = current->next;
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