#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[101],sum=0,sum2=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
    sort(a,a+n);
    int i=n-1;
    while(sum-sum2>=sum2){
        sum2+=a[i];
        i--;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
