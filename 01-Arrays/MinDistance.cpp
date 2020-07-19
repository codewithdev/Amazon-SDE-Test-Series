/*You are given an array A, of N elements.
Find minimum index based distance between two elements of the array, x and y.*/

/*Constraints:
1 <= T <= 100
1 <= N <= 105
0 <= A[i], x, y <= 105

Example:
Sample Input:
2
4
1 2 3 2
1 2
7
86 39 90 67 84 66 62 
42 12

Sample Output:
1
-1*/


#include<bits/stdc++.h>
using namespace std;
void minDist(int a[], int n, int x, int y){
	auto ix= lower_bound(a,a+n,x);


}
int main()
{
	int t;
	cin>>t;
	int n,x,y;
	int *arr= new int[n];
	while(t--){
		cin>>n;
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     }
     cin>>x>>y;
     cout<<minDist(a,n,x,y)<<endl;
	}
	return 0;
}


