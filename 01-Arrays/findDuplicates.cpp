/*Program to Find the Duplicate in the array*/

/*Standard Input:

2
6
2 2 3 3 5 1
8
1 1 2 3 4 8 7 7 


Standard Output:

2 3
1 7*/

#include<iostream>
using namespace std;
void findDuplicate(int *arr, int n){
	for(int i=0;i<n;i++){
		int p= arr[i]%n;
		arr[p]+=n;
	}
	for(int i=0;i<n;i++){
		if((arr[i]/n)>1){
			cout<<i<<" ";
		}
	}
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int n;
		int *arr= new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		findDuplicate(arr,n);
	}
}