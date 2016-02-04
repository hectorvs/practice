#include <iostream>
#include "Node.h"

int main(int argc, char ** argv) {
    Node * head;

    Node x(3);

    head = &x;

    head->data = 1;
    head->add(new Node(2));
    head->add(new Node(3));
    head->add(new Node(4));
    head->add(new Node(5));

    head->print();

    return 0;
}
