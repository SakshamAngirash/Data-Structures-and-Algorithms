//custom comparator
    bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[1]>b[1]; 
        //solely dependent on the profit (because all boxes weight the same)
    }
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) { 
        int units = 0 ; //initilisting
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        for(int i = 0 ; i<boxTypes.size(); i++)
        {
            if(boxTypes[i][0]<= truckSize)
            {
                units += boxTypes[i][0]*boxTypes[i][1]; // units * no. of boxes avalilable 
                truckSize -= boxTypes[i][0];
            }
            else{
                units += truckSize*boxTypes[i][1]; // jitna size bcha h uske according units daal do
                truckSize = 0 ; 
                break;
            }
       } 
       return units;  
    }
};