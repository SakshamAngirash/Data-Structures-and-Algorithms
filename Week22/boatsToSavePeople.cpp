class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size(); 
        sort(people.begin(),people.end(),greater<int>()); //sorting people of their weight 
        int boats = 0 ; // initilising number of boats required 
        int i = 0 ; 
        int j = n-1; 
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            {
                j--;
            }
            i++;
            boats++;
        }
        return boats;
    }
};