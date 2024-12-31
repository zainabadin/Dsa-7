#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;
public:
    Queue(int cap);
    void Enqueue(int val);
    int Dequeue();
    bool Empty() const;
    bool Full() const;
    int getFront() const;
    ~Queue();
};
