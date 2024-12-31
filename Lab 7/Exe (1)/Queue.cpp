#include "Queue.h"

Queue::Queue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    front = -1;
    rear = -1;
    size = 0;
}

void Queue::Enqueue(int val) {
    if (Full()) {
        cout << "Queue is full, cannot enqueue " << val << endl;
        return;
    }
    if (front == -1) front = 0;
    rear++;
    arr[rear] = val;
    size++;
}

int Queue::Dequeue() {
    if (Empty()) {
        cout << "Queue is empty, cannot dequeue" << endl;
        return -1;
    }
    int val = arr[front];
    front++;
    size--;
    if (size == 0) {
        front = -1;
        rear = -1;
    }
    return val;
}

bool Queue::Empty() const {
    return size == 0;
}

bool Queue::Full() const {
    return size == capacity;
}

int Queue::getFront() const {
    if (Empty()) {
        cout << "Queue is empty, no front element" << endl;
        return -1;
    }
    return arr[front];
}

Queue::~Queue() {
    delete[] arr;
}
