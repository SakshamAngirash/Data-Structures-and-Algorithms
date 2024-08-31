//M1 USING TWO HASH MAPS

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false; 
        //created two maps 
        unordered_map<char,int> map1; //for s
        unordered_map<char,int> map2; //for t

        for(int i=0; i<s.length(); i++)
        {
            map1[s[i]]++; //this will automatically update the freq.
        }
         for(int i=0; i<t.length(); i++)
        {
            map2[t[i]]++; 
        }
        for(auto x : map1)
        {
            char ch1 = x.first;
            int freq1 = x.second;
            if(map2.find(ch1)!=map2.end())
            {
                int freq2=map2[ch1]; 
                if(freq1!=freq2) return false; 
            }
            else return false;
        }
        return true;
        



        
    }
};

// USING ONE SINGLE HASH MAP (PUSH AND POP TECHNIQUE)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false; 
        unordered_map<char,int> mp; 
        for(int i=0;i<s.length(); i++)
        {
            mp[s[i]]++; 
        }
        for(int i=0; i<t.length();i++)
        {
            char ch = t[i]; 
            if(mp.find(ch)!=mp.end()){
                mp[ch]--; 
                if(mp[ch]==0)mp.erase(ch);
            }
            else return false; 
        }
        if(mp.size()>0) return false;   
        return true;

    }
};