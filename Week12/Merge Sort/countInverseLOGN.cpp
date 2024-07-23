#include <iostream>
#include <vector>
using namespace std;

int c = 0;

int inversion(vector<int> &a, vector<int> &b)
{
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            count += a.size() - i;
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            ans[k] = arr1[i];
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (j < arr2.size())
    {
        ans[k] = arr2[j];
        j++;
        k++;
    }
    while (i < arr1.size())
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }
}

void mergeSort(vector<int> &v)
{
    int n = v.size();
    // base case
    if (n == 1)
        return;
    // sizes of two subarrays
    int n1 = n / 2;
    int n2 = n - n1;
    vector<int> a(n1), b(n2); // creation of two subarrays
    // copy pasting
    for (int i = 0; i < n1; i++)
        a[i] = v[i]; // first half
    for (int i = 0; i < n2; i++)
        b[i] = v[i + n1]; // second half
    // recursion
    mergeSort(a);
    mergeSort(b);
    // count inversions
    c += inversion(a, b);
    // last merge
    merge(a, b, v);
    a.clear();
    b.clear();
}

int main()
{
    int arr[] = {1, 5, 10, 4, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // storing it into a vector
    vector<int> v(arr, arr + n);
    mergeSort(v);
    cout<<c++;
    return 0;
}
