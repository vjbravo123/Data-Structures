// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "Enter the size of the array:";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements in the array:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     //Selection Sort
//     for (int i = 0; i < n - 1 ; i++)
//     {

//       int min_idx = i ;

//       for (int j = i + 1  ; j < n ; j++)
//       {
//         if(arr[j] < arr[min_idx]){
//             min_idx = j ;
//         }
//       }
//       int temp = arr[i];
//       arr[i]=arr[min_idx];
//       arr[min_idx]=temp;

//     }

//         for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;

// }

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n];

    cout << "Enter elements in the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection sort
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}