#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

void insert_at_tail(Node * &head, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


int main() {
    Node * head1 = NULL;

    int val;
    cin >> val;

    while (val != -1) {
        insert_at_tail(head1, val);
        cin >> val;
    }

    Node * head2 = NULL;
    cin >> val;

    while (val != -1) {
        insert_at_tail(head2, val);
        cin >> val;
    }

    Node * temp1 = head1;
    Node * temp2 = head2;
    bool same = true;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data != temp2->data) {
            same = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL) {
        same = false;
    }

    if (same == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


   return 0;
}
