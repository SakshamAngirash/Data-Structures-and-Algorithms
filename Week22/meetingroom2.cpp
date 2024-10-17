int meetingRoom(vector<vector<int>>& intervals)
{
    vector<int> start,ending; 
    for(auto el : intervals)
    {
        start.push_back(el[0]); 
        endinf.push_back(el[1]);
    }
    sort(start.begin(),start.end()); 
    sort(ending.begin(),ending.end()); 

    int ans = 0 ; 
    int rooms = 0 ; 
    int i = 0; 
    int j = 0 ; 
    while(i<start.size() && j<ending.size())
    {
        if(start[i]<ending[j])
        {
            rooms++; 
            ans= max(ans,rooms); 
            i++;
        }
        else if(start[i]>ending[j])
        {
            rooms--; //vacate the room 
            j++;
        }
        else{ //if equal no need to change the required rooms
            i++; 
            j--;
        }
    }
    return ans;

}