#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n;
	int x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n%4==0){
	    int x=++n;
	    cout<<x<<endl;
	    }else
	        x=(n/5)*4 + (n%5);
	   cout<<x<<endl;
	}
	return 0;
}