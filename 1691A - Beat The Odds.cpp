#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	int b=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0)b++;
	}
	cout<<min(b,n-b)<<endl;
}
signed main(){
fast_io;
int t=1;
cin>>t;
while(t-->0){
	solve();
}
}
