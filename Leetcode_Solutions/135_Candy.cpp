class Solution {
public:
    int candy(vector<int>& rat) {
        int n=rat.size();
        vector<int> left(n, 1);
        vector<int> right(n,1);
        int totalCandies=0;
        //left array
        for(int i=1;i<n;i++ ){
            if(rat[i]>rat[i-1]) left[i]=left[i-1]+1;
        }
        //right array
        for(int i=n-2;i>=0;i--){
            if(rat[i]>rat[i+1]) right[i]=right[i+1]+1;
        }
        //merging both the arrays and picking the maximum
        for(int i=0;i<n;i++){
            totalCandies+=max(left[i],right[i]);
        }
        
        return totalCandies;
    }
};
