//Code by Rajvi Desai

#include<bits/stdc++.h>
#define ll long long
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void answer(){
    int n;
    string s,c="";
    cin>>n>>s;
    bool f=n&1?1:0;
    for(int i=0;i<n;i++){
        if(f){
            c+=s[i];
        }
        else{
            c=s[i]+c;
        }
        f^=1;
    }
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
}
signed main(){
fast_io;
answer();
}
