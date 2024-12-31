#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int size;
    int capacity;
public:
    Queue(int cap);
    void Enqueue(int val);
    int Dequeue();
    bool Empty() const;
    void Display() const;
    ~Queue();
};
