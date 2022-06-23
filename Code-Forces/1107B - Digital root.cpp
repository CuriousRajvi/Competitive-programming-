//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	int x,k;
	cin>>k>>x;
	cout<<x+((k-1)*9)<<endl;
}
signed main(){
fast_io;
int t=1;
cin>>t;
while(t-->0){
answer();
}

}
