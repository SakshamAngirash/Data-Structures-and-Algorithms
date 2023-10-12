class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v(150, 1000);  // character ka special array with base value 1000
        if (s.length() != t.length()) return false;
        // filling the array
        // this is from s to t
        for (int i = 0; i < s.length(); i++) {
            int idx = (int)s[i];
            if (v[idx] == 1000) v[idx] = s[i] - t[i];
            else if (v[idx] != s[i] - t[i]) return false;
        }
        
        // reset the array for the next loop
        for (int i = 0; i < v.size(); i++) {
            v[i] = 1000;
        }

        // now from t to s
        for (int i = 0; i < t.length(); i++) {
            int idx = (int)t[i];
            if (v[idx] == 1000) v[idx] = t[i] - s[i];
            else if (v[idx] != t[i] - s[i]) return false;
        }

        return true;  // Move this outside of the loops
    }
};
