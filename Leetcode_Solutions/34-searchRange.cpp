//code by Rajvi Desai
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        
        int n=nums.size();
        if(n==0) return {-1,-1};
        int start=0;
        int end=n-1;
        
        while(start<end){
            int mid=(start+end)/2;
            if(nums[mid]<target)
                start=mid+1;
            else
                end=mid;

        }
        
        if(nums[start]!=target)
            return ans;
        else
            ans[0]=start;
        
        end=n-1;
        
         while(start<end){
             int mid=(start+end)/2 +1;
             if(nums[mid]>target)
                 end=mid-1;
             else
                 start=mid;
         }
        ans[1]=end;
        return ans;
    }
};
