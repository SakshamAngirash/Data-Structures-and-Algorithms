//M1

class Solution {
public:
    string rev(string str)
    {   
        reverse(str.begin(), str.end());
        return str;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s; 
        int n = words.size();
        for(int i = 0; i<n ; i++)
        {
            s.insert(words[i]);
        }
        int count = 0 ; 
        for(int i = 0 ; i<n ; i++)
        {
            string temp = words[i];
            s.erase(words[i]); 
            if(s.find(rev(temp))!=s.end())
            {
                count ++; 

            }
        }
        return count;
        
    }
};

//M2 
class Solution {
public:
    string rev(string str)
    {
        reverse(str.begin(),str.end()); 
        return str;
    }
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size(); 
        int count = 0 ; 
        unordered_set<string> s; 
        for(int i=0; i<n; i++)
        {
            if(s.find(rev(arr[i]))!=s.end()) count++;
            else s.insert(arr[i]);
        }
        return count;
        
    }
};