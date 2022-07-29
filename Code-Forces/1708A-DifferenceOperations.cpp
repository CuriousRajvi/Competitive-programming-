#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag=1;
        cin>>n;
        int a[n];
        int i;
        for( i=1;i<=n;i++){
            cin>>a[i];
        }
        for( i=2;i<=n;i++){
            if(a[i]%a[1]) break;
        }
        cout<<(i<=n?"NO":"YES")<<endl;
    }

    return 0;
}
