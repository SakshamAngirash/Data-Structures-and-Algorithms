class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> result;
        unordered_map<int, int> numFreq;

        // Populate the frequency map for nums1
        for (int i = 0; i < n1; ++i) {
            numFreq[nums1[i]]++;
        }

        // Find the intersection
        for (int i = 0; i < n2; ++i) {
            if (numFreq.find(nums2[i]) != numFreq.end() && numFreq[nums2[i]] > 0) {
                result.push_back(nums2[i]);
                numFreq[nums2[i]]--;
            }
        }

        return result;
    }
};