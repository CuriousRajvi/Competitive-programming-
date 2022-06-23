//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	int n,ones=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            ones++;
        }
	}
	cout<<ones<<endl;
	
	for(int i=0;i<n;i++)
	{
	    if(a[i+1]==1 || (i==n-1))
            cout<<a[i]<<" ";
	}
	}
signed main(){
fast_io;
answer();
}
