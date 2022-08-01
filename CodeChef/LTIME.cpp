#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;

	while(t--){
	    int n;
	    cin>>n;
	    if(n<=4 && n>=1 || n<=16 && n>=13)
	        cout<<"YES"<<endl;
	   else 
	        cout<<"NO"<<endl;
	 }
	return 0;
}
