//brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp;
        int l=0,r=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    temp.push_back(i);
                    temp.push_back(j);
                }
            }
        }
        return temp;
    }
};
