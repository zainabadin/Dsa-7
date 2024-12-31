#include <iostream>
#include "Queue.h"

int main() {
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    std::cout << "Front element: " << q.getFront() << std::endl;
    q.Dequeue();
    std::cout << "Front element after dequeue: " << q.getFront() << std::endl;
    q.Enqueue(40);
    q.Enqueue(50);
    std::cout << "Front element after enqueue: " << q.getFront() << std::endl;
    std::cout << "Dequeue: " << q.Dequeue() << std::endl;
    std::cout << "Front element after dequeue: " << q.getFront() << std::endl;
    return 0;
}
