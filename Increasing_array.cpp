#include <iostream>
using namespace std;
int x=0;
void shellsort(int A[], int n){
	int aux,j, k=n+1;
	while(k>1){
		k=k/2;
		for(int i=k+1;i<=n;i++){
			aux=A[i];
			j=i;
			while(j-k>=1 && A[j-k]>aux){
				A[j]=A[j-k];
				j=j-k;
			}
			A[j]=aux;
			x=x+1;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int A[n];
	for (int i=0;i<n;i++){
		cin >> A[i];
	}
	shellsort(A,n);
	for (int i=0;i<n;i++){
		cout << A[i] << " ";
	}
	cout<<endl;
	cout<<x;
}
