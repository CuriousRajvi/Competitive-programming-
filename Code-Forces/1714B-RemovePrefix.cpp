#include<bits/stdc++.h>
using namespace std;
#define ll long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        map<int,int> mp;
        for(int i=n-1;i>=0;i--){
            if(mp[a[i]]==0)mp[a[i]]++;
            else break;
            count++;
        }
        cout<<n-count<<endl;
        
    }
}
