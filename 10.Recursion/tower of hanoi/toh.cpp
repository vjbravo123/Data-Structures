#include <iostream>

void towerOfHanoi(int n, char source, char helper, char destination) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, helper);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {
    int n;

    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
