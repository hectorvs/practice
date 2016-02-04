#pragma once

struct node {
    int value;
    node * next;
};

class Queue {

    node * list;
    int queue_size = 0;
    node * last_element;

public:
    Queue() {
        list = nullptr;
        queue_size = 0;
        last_element = nullptr;
    }

    int queueSize();

    void enqueue(int val);

    int dequeue();

    void print();

};

