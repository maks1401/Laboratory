#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* makeList(int n) {
    if (n <= 0) return NULL;
    
    Node* beg, * p, * r;
    beg = new Node;
    
    cin >> beg -> data;
    beg -> next = NULL;
    p = beg;
    
    for (int i = 0; i < n - 1; i++) {
        r = new Node;
        cin >> r -> data;
        r -> next = NULL;
        p -> next = r;
        p = r;
    }
    
    return beg;
}

void printList(Node*& beg) {
    if (beg == NULL) {
        cout << "Список пуст, пожалуйста, нажмите выход\n";
        return;
    }
    
    Node* node = beg;
    while (node != NULL) {
        cout << node -> data << "\t";
        node = node -> next;
    }
    
    cout << endl;
}

Node* addNode(Node*& beg, char c, int num) {
    Node *node = beg;
    if (beg == NULL) {
        cout << "Нет элементов";
    } else {
        Node *newNode, *temp;
        
        newNode = new Node;
        newNode -> data = c;
        newNode -> next = NULL;
        
        for(int i = 0; i < num - 2; i++) {
            node = node -> next;
        }

        temp = node -> next;
        node -> next = newNode;
        newNode -> next = temp;
    }
    
    return beg;
}

void clear(Node* &beg) {
    while (beg != NULL) {
        Node* p = beg;
        beg = beg -> next;
        delete p;
    }
}
