//Code by Rajvi Desai
#include<iostream>
using namespace std;

int countSteps(int x, int y)
{	if (x%y == 0)
		return x/y;
	return x/y + countSteps(y, x%y);
}

int main()
{
int n;
cin>>n;
for (int i=0;i<n;i++){
long int x,y;
    cin>>x;
    cin>>y;
    cout << countSteps(x, y)<<endl;
}
return 0;
}
