#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    cout << "Priority Queue Operations:\n";
    cout << "1. Push (enqueue)\n";
    cout << "2. Pop (dequeue)\n";
    cout << "3. Top (peek)\n";
    cout << "4. Size\n";
    cout << "5. Is Empty\n";
    cout << "6. Quit\n";

    int choice, value;
    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to push: ";
                cin >> value;
                pq.push(value);
                break;
            case 2:
                if (!pq.empty()) {
                    pq.pop();
                    cout << "Element popped.\n";
                } else {
                    cout << "Priority queue is empty.\n";
                }
                break;
            case 3:
                if (!pq.empty()) {
                    cout << "Top element: " << pq.top() << endl;
                } else {
                    cout << "Priority queue is empty.\n";
                }
                break;
            case 4:
                cout << "Size of priority queue: " << pq.size() << endl;
                break;
            case 5:
                if (pq.empty()) {
                    cout << "Priority queue is empty.\n";
                } else {
                    cout << "Priority queue is not empty.\n";
                }
                break;
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
