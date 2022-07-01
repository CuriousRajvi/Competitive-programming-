class Solution {
public:
    static bool compare(vector<int> &a,vector<int>&b){
        //comparator function
        if(a[1]>b[1])
            return true;
        return false;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        //sorting in descending order on basis of units
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int maxUnits=0,boxes=0;
        for(int i=0;i<boxTypes.size();i++){
            //checking if box size is less than or equal to truck's capacity for boxes 
            if(boxTypes[i][0]<=truckSize){
                //add the units per box
                maxUnits+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0]; //decrement the capacity of truck
            }
            else if(boxTypes[i][0]>truckSize){
                //for remaining capacity take amount of boxes left
                maxUnits+=truckSize*boxTypes[i][1];
                break;
            }
        }
     return maxUnits;   
    }
};
