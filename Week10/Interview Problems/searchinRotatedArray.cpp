class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        int pivot = -1;

        // Special case for array of size 2
        if (n == 2) {
            if (target == nums[0]) return 0;
            else if (target == nums[1]) return 1;
            else return -1;
        }

        // Finding the pivot
        while (low <= high) {
            int mid = low + (high - low) / 2;
            // Avoid out-of-bounds by checking if mid is at the ends  
            if (mid == 0) {
                low = mid + 1;
            } else if (mid == n - 1) {
                high = mid - 1;
            } else if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]) {
                pivot = mid;
                break;
            } else if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
                pivot = mid + 1;
                break;
            } else if (nums[mid] < nums[high]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // If no pivot found, array is not rotated
        if (pivot == -1) {
            low = 0;
            high = n - 1;
            // Normal binary search
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target) return mid;
                else if (nums[mid] > target) high = mid - 1;
                else low = mid + 1;
            }
            return -1;
        }
    

        // Binary search in the correct subarray
        if (target >= nums[0] && target <= nums[pivot - 1]) {
            low = 0;
            high = pivot - 1;
        } else {
            low = pivot;
            high = n - 1;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }

        return -1; // Target not found
    }
};
