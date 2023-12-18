#include<iostream>
using namespace std;

class CircularArrayQueue{
    int* arr;
    int n;
    int front = -1, back = -1;

    public:
    CircularArrayQueue(int size){
        this->n = size;
        arr = new int[size];
    }

    void enqueue(int x){
        //condition for Queue overflow
        if( (back+1)% n == front ){
            return ;
        }

        //if the queue is empty
        if(front == -1){
            front = 0;
        }

       back = (back+1)%n;
       arr[back]=x;
    }

    int dequeue(){
        //if the queue is empty
        if(front == -1){
            cout<<"queue Underflow : No Elements are there in the Queue"<<endl;
            return -1;
        }
        int result = arr[front];

        //front = back then it means there is only one element in the Queue  reset the values to -1
        if(front == back){
            front = back = -1;
        }

        else{
            front=(front+1)%n;
        }
        return result;
    }

    void peek(){
        if(front==-1){
            cout<<"Queue underflow"<<endl;
            return ;
        }

        cout<<arr[front]<<endl;
    }
    
};

int main(){
    CircularArrayQueue q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.peek();
    q.dequeue();

    q.peek();
    q.dequeue();

    q.peek();
    q.dequeue();

    q.peek();
    q.dequeue();

    q.peek();
    q.dequeue();


    return 0;
}

// #include <iostream>
// using namespace std;

// class CircularQueue {
// private:
//     int* arr;
//     int front;
//     int rear;
//     int maxSize;

// public:
//     CircularQueue(int size) {
//         maxSize = size;
//         arr = new int[maxSize];
//         front = rear = -1;
//     }

//     ~CircularQueue() {
//         delete[] arr;
//     }

//     bool isEmpty() {
//         return front == -1 && rear == -1;
//     }

//     bool isFull() {
//         return (rear + 1) % maxSize == front;
//     }

//     void enqueue(int value) {
//         if (isFull()) {
//             cout << "Queue is full. Cannot enqueue." << endl;
//             return;
//         }

//         if (isEmpty()) {
//             front = rear = 0;
//         } else {
//             rear = (rear + 1) % maxSize;
//         }
//         arr[rear] = value;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty. Cannot dequeue." << endl;
//             return -1; // Return a sentinel value to indicate an error
//         }
//         int value = arr[front];
//         if (front == rear) {
//             front = rear = -1;
//         } else {
//             front = (front + 1) % maxSize;
//         }
//         return value;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         int i = front;
//         cout << "Queue: ";
//         do {
//             cout << arr[i] << " ";
//             i = (i + 1) % maxSize;
//         } while (i != (rear + 1) % maxSize);
//         cout << endl;
//     }
// };

// int main() {
//     int size;
//     cout << "Enter the size of the circular queue: ";
//     cin >> size;

//     CircularQueue queue(size);

//     int choice, value;
//     do {
//         cout << "\nCircular Queue Menu:\n";
//         cout << "1. Enqueue\n";
//         cout << "2. Dequeue\n";
//         cout << "3. Display\n";
//         cout << "4. Quit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter a value to enqueue: ";
//                 cin >> value;
//                 queue.enqueue(value);
//                 break;
//             case 2:
//                 value = queue.dequeue();
//                 if (value != -1) {
//                     cout << "Dequeued element: " << value << endl;
//                 }
//                 break;
//             case 3:
//                 queue.display();
//                 break;
//             case 4:
//                 cout << "Exiting the program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != 4);

//     return 0;
// }
