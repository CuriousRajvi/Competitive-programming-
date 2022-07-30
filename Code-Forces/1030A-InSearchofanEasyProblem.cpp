#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a!=0){
            flag=1;
            break;
        }
    }
    cout<<(flag==1?"HARD":"EASY")<<endl;
    return 0;
}
