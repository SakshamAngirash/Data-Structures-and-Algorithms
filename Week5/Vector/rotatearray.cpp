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
void rotate(vector<int> &v,int n,int k )
{
    reversepart(v,0,n-k-1);
    reversepart(v,n-k,n-1);
    reversepart(v,0,n-1);
}

int main()
{
    int n;
    vector<int> v;
    cout << "Enter the size of vector: ";
    cin >> n;
    input(v, n);
    cout<<"Our array : "<<endl;
    display(v,n);
    int k;
    cout<<"Enter the rotation factor : ";
    cin>>k;
    if (k>n)
    {
        k=k%n;
    }
    rotate(v,n,k);
    cout<<"Rotated Vector: "<<endl;
    display(v,n);

    return 0;
}
