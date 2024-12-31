#include "Queue.h"

int main() {
    Queue q(5);
    q.Enqueue(6);
    q.Enqueue(4);
    q.Enqueue(2);
    q.Enqueue(10);
    
    cout << "Queue contents: ";
    q.Display();
    
    cout << "Dequeue (removes minimum element): " << q.Dequeue() << endl;
    
    cout << "Queue contents after dequeue: ";
    q.Display();
    
    return 0;
}
