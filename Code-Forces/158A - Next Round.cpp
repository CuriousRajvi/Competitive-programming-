//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	int n,k,count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>=a[k-1] && a[i]!=0){
			count++;
		}
	}
	cout<<count;
}
signed main(){
fast_io;
answer();

}
