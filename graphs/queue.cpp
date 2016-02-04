#include "queue.h"
#include <iostream>

int Queue::queueSize() {
    return queue_size;
}

void Queue::enqueue(int val) {

    node *temp = new node;
    temp->value = val;
    temp->next = nullptr;

    if (list == nullptr) {
        list = temp;
        last_element = list;
    } else {
        last_element->next = temp;
        last_element = last_element->next;
    }

    queue_size++;
}

int Queue::dequeue() {

    if (list == nullptr) {
        throw "queue is empty";
    }

    int val = list->value;
    list = list->next;
    queue_size--;

    return val;
}

void Queue::print() {

    node * temp = list;

    while(temp != nullptr) {
        std::cout << temp->value << " -> ";
        temp = temp->next;
    }

    std::cout << std::endl;
}
