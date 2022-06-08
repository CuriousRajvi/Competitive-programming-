#include<iostream>
using namespace std;
int main(){
    string name;
    int num=0,p=1;
    cin>>name;
    for(int i=0;i<name.size();i++){
        for(int j=0;j<i;j++){
            if(name[i]==name[j]){
                num++;
            }
        }
          if(num==0){
        p++;
    }
    num=0;
    }
  if(p%2==0){
      cout<<"IGNORE HIM!";
  }
  else{
      cout<<"CHAT WITH HER!";
  }
}
