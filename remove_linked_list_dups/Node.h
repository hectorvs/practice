#pragma once
#include <iostream>

struct Node {

    Node(int dat) { data = dat; }

    int data = 0;
    Node * next = nullptr;

    void add(Node * newNode) {

        Node * temp = this;

        while (temp->next != nullptr){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void print() {
        Node * temp = this;

        while(temp->next != nullptr){
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }

        std::cout << temp->data << std::endl;
    }
};
