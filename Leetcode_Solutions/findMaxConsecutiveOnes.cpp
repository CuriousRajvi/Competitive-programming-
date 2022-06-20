class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum+=1;
            }
            else{
                sum=0;
            }
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};
