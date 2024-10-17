class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int> mp; 
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++; //for frequency 
        }
        priority_queue<pair<char,int>> pq; 
        for(auto p: mp)
        {
            pq.push(p);
        }
        string result=""; 
        while(pq.size()>0)
        {
            auto largest = pq.top(); 
            pq.pop(); 
            int len = min (repeatLimit,largest.second); //minimum of both 
            //adding it to the answer
            for(int i = 0 ; i<len ; i++)
            {
                result+=largest.first; 
            }
            //now check if we still left with some of the frequency of the largest
            pair<char,int>secondlargest; 
            
            if(largest.second - len > 0)
            {
                if(pq.size()!=0)//to check the existance of second largest
                {
                    secondlargest = pq.top();
                    pq.pop(); 
                    //now add the second largest 
                    result += secondlargest.first;
                }
                else return result;
                if(secondlargest.second-1>0)pq.push({secondlargest.first,secondlargest.second-1}); 
                pq.push({largest.first,largest.second-len});
            }
        }
        return result;
    }
};