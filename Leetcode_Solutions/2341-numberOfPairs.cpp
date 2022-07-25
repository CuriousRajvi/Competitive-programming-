class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        if(nums.size()==0) return {};
        if(nums.size()==1) return{0,1};
        //vector<int> ans;
        int pairs=0;
        int remain=0;
        sort(nums.begin(),nums.end());
      
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1]){
               pairs++;
               nums[i]=-1;
               nums[i+1]=-1;
               i++;
           }
       }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=-1){
                remain++;
            }
        }
        return {pairs,remain};
    }
};
