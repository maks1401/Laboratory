#include <iostream>
using namespace std;

struct Stack {
    double data;
    Stack* prev;
};

Stack* makeStack(int size) {
    if (size <= 0) return NULL;
    
    Stack *temp, *current = NULL;
    temp = new Stack;
    
    cin >> temp -> data;
    temp -> prev = NULL;
    current = temp;
    
    for (int i = 2; i <= size; i++) {
        temp = new Stack;
        cin >> temp -> data;
        temp -> prev = current;
        current = temp;
    }
    
    return current;
}

void printStack(Stack*& stack) {
    if (stack == NULL) {
        cout << "Стек пуст, пожалуйста, сформируйте его или нажмите выход\n";
        return;
    }
    
    Stack *current = stack;
    while (current != NULL) {
        cout << current -> data << "\t";
        current = current -> prev;
    }
    cout << endl;
}

void clearStack(Stack* &stack) {
    while (stack) {
        Stack* temp = stack;
        stack = stack -> prev;
        delete temp;
    }
}

Stack* removeNegativeStacks(Stack*& stack) {
    if (stack == NULL) {
        cout << "Стек пуст, пожалуйста, сформируйте его или нажмите выход\n";
    } else {
        Stack *prev, *current = stack;
        bool flag = true;
        
        while(current && flag) {
            if(current -> data < 0) {
                delete current;
                current = current -> prev;
            } else {
                flag = false;
            }
        }
        
        stack = current;
        
        if(current) {
            prev = current -> prev;
            
            while (current -> prev) {
                if(prev -> data < 0) {
                    current -> prev = prev -> prev;
                    delete prev;
                    prev = current -> prev;
                } else {
                    current = prev;
                    prev = current -> prev;
                }
            }
        }
    }
    
    return stack;
    
    //-1 2 -3 4 -5
}

void sorted(Stack *&head, Stack *nextQueue) {
    if (!head || nextQueue -> data < head -> data ) {
        nextQueue -> prev = head;
        head = nextQueue;
    } else {
        Stack *current = head;
        while (current -> prev && !(nextQueue -> data < current -> prev -> data)) {
            current = current -> prev;
        }

        nextQueue -> prev = current -> prev;
        current -> prev = nextQueue;
    }
}

Stack* insertionSortStack(Stack *&head) {
    Stack *result = NULL;

    while(head) {
        Stack *temp = head;
        head = head -> prev;
        sorted(result, temp);
    }

    return result;
}

