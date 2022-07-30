#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
	cin>>t;
	while(t--){
	    long long int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    if(n*x>r){
	       cout<<-1<<endl;
	    }
	    else if(n*y<r){
	        cout<<0<<" "<<n<<endl;
	    }
	    else{
	        long long b=(r-n*x)/(y-x);
	        cout<<n-b<<" "<<b<<endl;
	    }        
	     
	  }
	return 0;
}
