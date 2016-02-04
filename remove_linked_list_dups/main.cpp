//
// Created by Hector V on 1/10/16.
//
#include "Node.h"

void removeDups(Node * head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node * slow = head;
    Node * help_front;
    Node * front;

    while(slow != nullptr) {

        help_front = slow;
        front = slow->next;

        while(front != nullptr) {

            if (slow->data == front->data) {
                help_front->next = front->next;
                front->next = nullptr;
                front = help_front->next;
            } else {
                help_front = front;
                front = front->next;
            }

        }

        slow = slow->next;
    }
}

int main(int argc, char ** argv) {

    Node list(1);

    list.add(new Node(3));
    list.add(new Node(4));
    list.add(new Node(6));
    list.add(new Node(4));
    list.add(new Node(6));
    list.add(new Node(3));
    list.add(new Node(1));

    list.print();

    removeDups(&list);

    list.print();

    return 0;
}


