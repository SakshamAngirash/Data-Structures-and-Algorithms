#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

long long maxSumAfterConvert(int n, vector<int>& arr) {
    unordered_map<int, int> count;
    long long maxSum = 0;
    long long currentSum = 0;

    // Check if there's at least one '1' in the array
    bool hasOne = false;
    for (int num : arr) {
        if (num == 1) {
            hasOne = true;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if (num == -1 && hasOne) {
            num = 1;  // Convert -1 to 1 if there's at least one 1 in the array
        }

        if (num < 0) {
            int posNum = -num;
            if (count.find(posNum) != count.end() && count[posNum] > 0) {
                count[posNum]--;
                currentSum += posNum;
            }
        } else {
            count[num]++;
            currentSum += num;
        }
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = maxSumAfterConvert(n, arr);
    cout << result << endl;

    return 0;
}
