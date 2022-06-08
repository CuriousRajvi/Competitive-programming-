//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	string s1,s2;
	int flag=0;
	cin>>s1;
    cin>>s2;
	for(int i=0;i<s1.length();i++){
		s1[i]=toupper(s1[i]);
		s2[i]=toupper(s2[i]);
	}
	for(int i=0;i<s1.length();i++){
		if(s1[i]>s2[i]){
			cout<<"1";
			flag=0;
			break;
		}
		else if(s1[i]<s2[i]){
			cout<<"-1";
			flag=0;
			break;
		}
		
		else{
		    flag=1;
		}
		}
		if(flag==1){
		    cout<<"0";
		}
}
signed main(){
fast_io;
answer();
}
