#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int element)
{
    int l=0, mid, r=size-1;
    // Start Searching
    while (l <= r){

        mid = (l + r) / 2;
        if (arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    // Searching ends
    return -1;
}

int main()
{   //Unsorted array for linear search
    // int arr[] = {1, 2, 4, 5, 66, 4, 33, 56, 77, 22};
    // int size = sizeof(arr) / sizeof(int);
    // int element = 33;

   //Sorted array for binary search
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr) / sizeof(int);
    int element = 300;
    int searchIndex = BinarySearch(arr, size, element);
    // printf("the element %d was found at index %d \n", element , searchIndex);
    cout << "the element " << element << " was found at index " << searchIndex;
    return 0;
}