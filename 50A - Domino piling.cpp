//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	int m,n;
	cin>>m>>n;
	if(m>=1 && m<=n && n>=m && n<=16){
	    cout<<(m*n)/2;
	}

}
signed main(){
fast_io;
answer();

}
