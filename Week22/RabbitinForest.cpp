class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp ;
        int result = 0 ; 
        for(int i=0; i<answers.size();i++)
        {
            if(answers[i]==0) 
            {
                result++;
                continue;
            }

            if(!mp[answers[i]+1]) //+1 is for one based indexing
            {
                result += answers[i]+1;//added to the result
                //now pushed to the map 
                mp[answers[i]+1]=1; //inserting for the first time 
            }
            
            else
            {//now if already existed 
                
                mp[answers[i]+1]++;
                int key = answers[i]+1; 
                int val = mp[key];
                if(key==val)
                {
                    //we found all the rabbits of group : eliminate the group 
                    mp.erase(key);
                } 
            }


        }
        return result; 



        
        
    }
};