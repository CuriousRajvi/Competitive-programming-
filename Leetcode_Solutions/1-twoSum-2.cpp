//using map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
       unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            if(hash.find(n)!=hash.end()){
                result.push_back(hash[n]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]]=i;
        }
        return result;
    }
};
