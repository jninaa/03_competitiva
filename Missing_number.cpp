#include <iostream>
using namespace std;

int main(){
	long s=0,n,num;
	cin >> n;
	int A[n];
	for(int i = 1 ; i < n ;i++){
		cin >> A[i];		
		s=s+A[i];
	}
	cout << (n * (n+1) / 2)-s;
	return 0;
	}
