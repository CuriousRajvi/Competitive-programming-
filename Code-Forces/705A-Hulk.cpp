#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s="I hate";
    cin>>n;
   for(int i=2;i<=n;i++){
       if(i%2==0){
           s+=" that I love";
       }
       else{
           s+=" that I hate";
       }
   }
    s+=" it";
    cout<<s<<endl;
    return 0;
}
