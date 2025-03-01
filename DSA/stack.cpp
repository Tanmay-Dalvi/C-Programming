#include <iostream>
using namespace std;

#define maxsize 10
int stack[maxsize], index1 = -1;

void push() {
    if (index1 == maxsize - 1) {
        cout << "Stack is full\n";
    } else {
        int ele;
        cout << "Enter the element to be inserted: ";
        cin >> ele;
        index1++;
        stack[index1] = ele;
    }
}

void pop() {
    if (index1 == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Popped element: " << stack[index1] << endl;
        index1--;
    }
}

void display() {
    if (index1 == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= index1; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (choice != 4);

    return 0;
}