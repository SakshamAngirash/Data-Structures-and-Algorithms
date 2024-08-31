class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size(); 
        unordered_map<int,int> m; 
        for(int i=0; i<n;i++)
        {
            m[arr[i]]++;
        }
        unordered_set<int> s; 
        for(auto x : m)
        {
            s.insert(x.second);
        }
        if(s.size()==m.size()) return true; 
        else return false;
    }
};