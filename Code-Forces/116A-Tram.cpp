#include<iostream>
using namespace std;
int main(){
    int stations;
    cin>>stations;
    int count=0,ans=0;
    while(stations--){
        int a,b;
        cin>>a>>b;
        count=count-a+b;
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}
