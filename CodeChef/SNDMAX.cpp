#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	   if((b<a && b>c)||(b>a && b<c))
	        cout<<b<<endl;
	   else if((a<b && c<a) || (a>b && c>a))
	        cout<<a<<endl;
	   else if((c>a && c<b)||(c>b && c<a ))
	        cout<<c<<endl;
	}
	return 0;
}
