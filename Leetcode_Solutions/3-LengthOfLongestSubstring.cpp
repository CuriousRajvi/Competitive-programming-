class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int MaxString=0;
        int l=0;
        unordered_set<int> set;
        for(int i=0;i<s.length();i++){
            if(set.find(s[i])!=set.end()){
                while(l<i && set.find(s[i])!=set.end()){
                    set.erase(s[l]);
                    l++;
                }
            }
            set.insert(s[i]);
            MaxString=max(MaxString,i-l+1);
        }
        return MaxString;
    }
};
