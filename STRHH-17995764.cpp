#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,len;
	cin>>n;
	char a[1000];
	while(n--){
		cin>>a;
		len = strlen(a);
		for(i=0;i<len/2;i++){
			cout<<a[i];++i;
		}
		cout<<endl;
	}
	return 0;
}