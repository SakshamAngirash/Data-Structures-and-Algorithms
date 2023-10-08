#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of sq. matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    // Taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Printing the diagonal elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j==n-i-1)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
