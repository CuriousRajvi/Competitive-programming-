//Code by Rajvi Desai
#include<bits/stdc++.h>
using namespace std;
 int digit[]={6,2,5,5,4,5,6,3,7,6};

int main(){
     int a,b;
    cin>>a>>b;
    int count=0;
    for(int j=a;j<=b;j++){
        int n=j;
        while(n>0){
            int n1=n%10;
            for(int i=0;i<=9;i++){
                if(n1==i)
                    {
                        //cout<<j<<endl;
                        count+=digit[i];
                        break;
                    }
            }
            n=n/10;
        }
    }
    cout<<count<<endl;
    return 0;
}
