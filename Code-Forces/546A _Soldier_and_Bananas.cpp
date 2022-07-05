//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	int k,n,w;
	cin>>k>>n>>w;
	cout<<max(0LL,(w*(w+1)/2)*k-n)<<endl;
}
signed main(){
fast_io;
answer();
}
