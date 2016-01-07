#include <iostream>
#include "header.h"
using namespace std;

int main() {
    Queue Q;
    int choice;
    do{
        cout << "Choose an option:\n0. Reach the front element (without dequeue!).\n1. Check is the queue is full.\n2. Check if the queue is Empty.\n3. Add an element to the queue." << endl;
        cout << "4. Delete an element from the queue(moving queue!).\n5. Delete an element from the queue(static queue!).\n6. Print the queue." << endl;
        cin >> choice;
		
		if(choice == 0) {
			if(Q.isEmpty() == 1)
				cout << "The queue is empty" << endl << endl;
			else
				cout << "The front of the queue is " << Q.peek() << endl << endl;
		}
		else if(choice == 1) {
			if(Q.isFull() == 1)
				cout << "The queue is full" << endl;
			cout << endl;
			if(Q.isFull() == 0)
				cout << "The queue is not full" << endl;
			cout << endl;
		}
		else if(choice == 2) {
			if(Q.isEmpty() == 1)
				cout << "The queue is empty" << endl;
			cout << endl;
			if(Q.isEmpty() == 0)
				cout << "The queue is not empty" << endl;
			cout << endl;
		}
		else if(choice == 3) {
			int data;
			cout << "Input the element to add to the queue: " << endl;
			cin >> data;
			Q.enqueue(data);
			cout << endl;
			cout << "The queue : " << endl;
			Q.Print();
			cout << endl << endl;
		}
		else if(choice == 4) {
			Q.movingDequeue();
			cout << "The queue : " << endl;
			Q.Print();
			cout << endl << endl;
		}
		else if(choice == 5) {
			Q.staticDequeue();
			cout << "The queue : " << endl;
			Q.Print();
			cout << endl << endl;
		}
		else if(choice == 6) {
			cout << "The queue : " << endl;
			Q.Print();
			cout << endl << endl;
		}
		else if(choice < 0 || choice > 6) {
			cout << "Input a valide entry !!" << endl;
			cout << endl;
		}
	} while(!Q.isFull());

    return 0;
}
