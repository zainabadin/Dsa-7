#include "Node.h"

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue();
    void Enqueue(int val);
    int Dequeue();
    bool Empty() const;
    int getFront() const;
    ~Queue();
};
