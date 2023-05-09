#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int n = b / a;
        if(a!=b)
        cout << n << endl;
    	else if (a==b){
    		cout<<"0"<<endl;
    	}
    	}
    return 0;
}