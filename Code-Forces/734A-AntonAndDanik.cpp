#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countA=0,countD=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') countA++;
        else if(s[i]=='D') countD++;
    }
    if(countA>countD)
        cout<<"Anton"<<endl;
    else if(countA<countD)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}
