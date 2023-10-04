#include<iostream>
#include<vector>
using namespace std;

void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void input(vector<int>& v, int size) {
    v.resize(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
}

void display(vector<int>& v, int size) {
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;E
    input(v, n);
    cout << "Initial Vector: ";
    display(v, n);
    int target;
    cout<<"How much you want to rotate: ";
    cin>>target;
    
    if(target>=v.size())
    {
        target=target%v.size();
    }
    for (int i = 0; i < target; i++)
    {
        /* code */
    }
    

}