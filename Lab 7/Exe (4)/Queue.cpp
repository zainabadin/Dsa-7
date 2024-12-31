#include "Queue.h"

Queue::Queue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    size = 0;
}

void Queue::Enqueue(int val) {
    if (size == capacity) {
        cout << "Queue is full, cannot enqueue " << val << endl;
        return;
    }
    arr[size] = val;
    size++;
}

int Queue::Dequeue() {
    if (Empty()) {
        cout << "Queue is empty, cannot dequeue" << endl;
        return -1;
    }
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    int minVal = arr[minIndex];
    for (int i = minIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return minVal;
}

bool Queue::Empty() const {
    return size == 0;
}

void Queue::Display() const {
    if (Empty()) {
        cout << "Queue is empty!" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

Queue::~Queue() {
    delete[] arr;
}
