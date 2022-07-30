#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long int r=(n%2==0? n/2: (n/2)+1);
    cout<<(k<=r?2*k-1:2*(k-r))<<endl;
    return 0;
}
