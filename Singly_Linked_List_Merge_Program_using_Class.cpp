#include<iostream>
using namespace std;

class listadt {
    struct node {
        int data;
        node* next;
    };
    node *head1, *head2;

public:
    listadt() {
        head1 = NULL;
        head2 = NULL;
    }
    void insert(node* &headRef, int x) {
        node* r = new node;
        r->data = x;
        r->next = NULL;

        if (headRef == NULL) {
            headRef = r;
        } else {
            node* temp = headRef;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = r;
        }
    }

    void insertion() {
        int x;
        cout << "Enter 5 elements for List 1:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> x;
            insert(head1, x);
        }
        cout << "List 1: ";
        display(head1);

        cout << "Enter 5 elements for List 2:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> x;
            insert(head2, x);
        }
        cout << "List 2: ";
        display(head2);
    }

    void merge() {
        if (head1 == NULL) {
            head1 = head2;
        } else {
            node* temp = head1;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = head2;
        }
        cout << "Merged List: ";
        display(head1);
    }

    void display(node* headPtr) {
        node* temp = headPtr;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    listadt ls;
    ls.insertion();
    ls.merge();
    return 0;
}
