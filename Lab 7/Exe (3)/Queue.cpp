#include "Queue.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

void Queue::Enqueue(int val) {
    Node* newNode = new Node(val);
    if (rear == nullptr) {  // If the queue is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int Queue::Dequeue() {
    if (Empty()) return -1;  // If the queue is empty, return -1
    Node* temp = front;
    int val = front->data;
    front = front->next;
    if (front == nullptr) rear = nullptr;  // If the queue becomes empty
    delete temp;
    return val;
}

bool Queue::Empty() const {
    return front == nullptr;
}

int Queue::getFront() const {
    if (Empty()) return -1;  // If the queue is empty
    return front->data;
}

Queue::~Queue() {
    while (!Empty()) {
        Dequeue();
    }
}
