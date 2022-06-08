//Code by Rajvi Desai
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int start=0;
    int end=n-1;
    int max;
    int k=0;
    int Sereja=0,Dima=0;
    while(start<=end){
        if(a[start]>a[end]){
            max=a[start];
            start++;
        }
        else{
            max=a[end];
            end--;
        }
        if(k%2==0){
            Sereja+=max;
        }
        else{
            Dima+=max;
        }
        k++;
    }
    cout<<Sereja<<" "<<Dima<<endl;
}
