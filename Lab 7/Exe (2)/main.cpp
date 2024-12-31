#include "Queue.h"

int main() {
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    cout << "Front element: " << q.getFront() << endl;
    q.Dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;
    q.Enqueue(40);
    q.Enqueue(50);
    q.Enqueue(60);
    cout << "Is queue full? " << (q.Full() ? "Yes" : "No") << endl;
    q.Dequeue();
    cout << "Front element after another dequeue: " << q.getFront() << endl;
    return 0;
}
