//Code by Rajvi Desai
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int r=2*n;
    int g=5*n;
    int b=8*n;
    int req=ceil(1.0*r/k)+ceil(1.0*g/k)+ceil(1.0*b/k);
    cout<<req;
    return 0;
}
