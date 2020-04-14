#include <iostream>
using namespace std;

struct Queue {
    double data;
    Queue* next;
};

Queue* makeQueue(int n) {
    Queue *prev, *current, *firstQueue = NULL;
    
    prev = new Queue;
    cin >> prev -> data;
    firstQueue = prev;
    
    for (int i = 2; i <= n; i++) {
        current = new Queue;
        cin >> current -> data;
        prev -> next = current;
        current -> next = NULL;
        prev = current;
    }
    
    return firstQueue;
}

void printQueue(Queue* head) {
    if (head == NULL) {
        cout << "Очередь пустa\n";
        return;
    }
    
    Queue* current = head;
    while (current) {
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;
}

Queue* clear(Queue* head) {
    if (head == NULL) {
        cout << "Очередь пуста\n";
        return NULL;
    }
    
    while (head) {
        Queue* temp = head;
        head = head -> next;
        delete temp;
    }
    
    cout << "Очередь очищена \n";
    return NULL;
}

Queue* removeNegativeQueues(Queue*& head) {
    if (head == NULL) {
        cout << "Стек пуст, пожалуйста, сформируйте его или нажмите выход\n";
    } else {
        Queue *next, *current = head;
        bool flag = true;
        
        while(current && flag) {
            if(current -> data < 0) {
                delete current;
                current = current -> next;
            } else {
                flag = false;
            }
        }

        head = current;

        if(current) {
            next = current -> next;

            while (current -> next) {
                if(next -> data < 0) {
                    current -> next = next -> next;
                    delete next;
                    next = current -> next;
                } else {
                    current = next;
                    next = current -> next;
                }
            }
        }
    }
    
    return head;
    
    //-1 2 -3 4 -5
}

//Queue* sortQueue(Queue*& head) {
//    bool flag1, flag2;
//
//    Queue *current = head;
//    Queue *prev = NULL;
//
//    while(current -> next) {
//        if(current -> data < current -> next -> data) {
//
//        }
//    }
//
//    return head;
//}


void sorted(Queue *&head, Queue *nextQueue) {
    if (!head || nextQueue -> data < head -> data ) {
        nextQueue -> next = head;
        head = nextQueue;
    } else {
        Queue *current = head;
        while (current -> next && !(nextQueue -> data < current -> next -> data)) {
            current = current -> next;
        }

        nextQueue -> next = current -> next;
        current -> next = nextQueue;
    }
}

Queue* insertionSortQueue(Queue *&head) {
    Queue *result = NULL;

    while(head) {
        Queue *temp = head;
        head = head -> next;
        sorted(result, temp);
    }

    return result;
}
