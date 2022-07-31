#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    cout<<((x+y*2)<=n?"YES":"NO")<<endl;
	
	}
	return 0;
}
