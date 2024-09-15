#include <iostream>
using namespace std;
class minheap {
public:
    int arr[50];
    int idx;
    minheap() {
        idx = 1;
    }
    int top() {
        return arr[1];
    }
    void push(int x) {
        arr[idx] = x;
        int i = idx;
        idx++;
        while (i != 1) {
            if (arr[i / 2] > arr[i]) {
                swap(arr[i], arr[i / 2]);
            } else {
                break; 
            }
            i = i / 2;
        }
    }
    int size() {
        return idx - 1; 
    }
    void pop()
    {
        idx--; 
        arr[1] = arr[idx]; 
        int i = 1;
        while(true){
            int left = 2*i , right 

        }


    }
};

int main() {
    minheap pq;
    pq.push(10);
    pq.push(20);
    cout << pq.size() << endl;

    return 0; 
}
