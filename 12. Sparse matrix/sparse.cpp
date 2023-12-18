#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;

    int noz = 0;
    int nonz = 0;

    int arr[rows][cols] = {
        {0, 0, 3},
        {0, 2, 0},
        {0, 4, 1}};

    // Displaying the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 0)
            {
                noz++;
            }
            else
            {
                nonz++;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "No of zeroes : " << noz << endl;
    cout << "No of non zeroes : " << nonz << endl;

    int coordinateList[3][nonz];
    int numNonZero = 0;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (arr[i][j] != 0)
            {
                coordinateList[0][numNonZero] = i;         // Row
                coordinateList[1][numNonZero] = j;         // Column
                coordinateList[2][numNonZero] = arr[i][j]; // Value
                numNonZero++;
            }
        }
    }

    cout << "Coordinate List:\n";
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < numNonZero; i++)
        {
            if (j!=2)
            {
                cout<<coordinateList[j][i]+1<<" ";
            }
            else{
                cout<<coordinateList[j][i]<<" ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}
