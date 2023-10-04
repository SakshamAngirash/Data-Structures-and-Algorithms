#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &v, int n)
{
   v.resize(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }
}

void display(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reversepart(vector<int> &v, int x, int y)
{
    while (x < y)
    {
        swap(v[x], v[y]);
        x++;
        y--;
    }
}

int main()
{
    int n;
    vector<int> v;
    cout << "Enter the size of vector: ";
    cin >> n;
    input(v, n);
    
    cout << "Enter the indices you want to reverse: ";
    int x, y;
    cin >> x >> y;
    
    if (x >= 0 && y < n && x < y)
    {
        reversepart(v, x, y);
        cout << "Reversed vector: ";
        display(v, n);
    }
    else
    {
        cout << "Invalid indices for reversal." << endl;
    }

    return 0;
}
