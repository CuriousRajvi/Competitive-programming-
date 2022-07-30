#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int flag=1;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='H' || a[i]=='9' || a[i]=='Q'){
            flag=0;
            break;
        }
    }
    cout<<(flag==0?"YES":"NO");
    return 0;
}
