#include <iostream>
using namespace std;
#define MAXSIZE 20

class Queue {
    int a[MAXSIZE];
    int rear;
    int front;
public:
    Queue(){
        rear = -1;
        front = -1;
    }

    int peek() {
        return a[front];
    }

    bool isFull() {
        if(rear == (MAXSIZE - 1)) {
            return true;
        }else {
            return false;
        }
    }

    bool isEmpty() {
        if(front < 0 || front > rear) {
            return true;
        }else {
            return false;
        }
    }

    void enqueue(int data) {
        if(isFull()) {
             cout << "Impossible, the queue is full!" << endl;
        }
		if (isEmpty()) {
			front = rear = 0;
			a[rear] = data;
		}else {
            rear = rear + 1;
            a[rear] = data;
            cout << "The element " << data << " was enqueued." << endl;
			cout << "The front of the queue is: " << a[front] << endl;
			cout << "The rear of the queue is " << a[rear] << endl;
        }
    }

    void movingDequeue() {
        if(isEmpty()) {
            cout << "Impossible, the queue is empty!" << endl;
        }else {
            int data = a[front];
            front = front + 1;
            cout << "The element " << data << " was dequeued." << endl;
			cout << "The front of the queue is " << a[front] << endl;
			cout << "The rear of the queue is " << a[rear] << endl;
        }
    }

    void staticDequeue() {
        if(isEmpty()) {
            cout << "Impossible, the queue is empty!" << endl;
        }else {
            cout << "The element " << a[front] << " was dequeued." << endl;
            for(int i = front; i < rear; i++) {
                a[i] = a[i+1];
            }
			rear = rear - 1;
			cout << "The front of the queue is " << a[front] << endl;
			cout << "The rear of the queue is " << a[rear] << endl;
        }
    }

    void Print() {
        for(int i = front; i <= rear; i++) {
            cout << a[i] << " ";
        }
    }
};




