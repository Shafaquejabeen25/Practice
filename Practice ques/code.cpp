#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int s,n,x;
	    cin>>n>>x;
	   s=n/6;
	   if(n<=6){
	       cout<<x<<endl;
	   }
	   else{
	       if(n%6==0){
	           cout<<x*s<<endl;
	       }
	       else{
	       s++;
	       cout<<x*s<<endl;
	       }
	   }
	}
	return 0;
}
