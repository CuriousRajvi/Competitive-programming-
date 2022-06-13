class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1;
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        int curr=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==prev+1)
                curr+=1;
            else if(nums[i]!=prev)
                curr=1;
            prev=nums[i];
            count=max(count,curr);
            
        }
        return count;
    }
};
