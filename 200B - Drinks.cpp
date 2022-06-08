//Code by Rajvi Desai
#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
	int n;
	double sum=0.0,avg;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    sum=sum+a[i];
    }
   	avg=(double)sum/n;
   
    cout<<avg<<endl;
}
signed main(){
fast_io;
answer();
}
