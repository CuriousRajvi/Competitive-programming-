class Solution {
public:
    int maxArea(int h, int w, vector<int>& hC,vector<int>& vC){
        hC.push_back(h);
	    sort(hC.begin(),hC.end());
	    int max_height=hC[0];
	    for(int  i=1;i<hC.size();i++){
		    max_height=max(max_height,hC[i]-hC[i-1]);
	    }
	    vC.push_back(w);
	    sort(vC.begin(),vC.end());
	    int max_width=vC[0];
	    for(int i=1;i<vC.size();i++){
    		max_width=max(max_width,vC[i]-vC[i-1]);
	    }
	    return (1LL*max_height*max_width) % 1000000007;
    }
};
