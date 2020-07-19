/*You are given an integer N. You need to convert all zeroes of N to 5.*/

/*Constraints:
1 <= T <= 100
1 <= n <= 10000

Example:
Sample Input:
2
1004
121*

Sample Output:
1554
121*/

#include<bits/stdc++.h>
using namespace std;
int conversion(int n){
	if(n==0) return 0;
	int last_digit= n%10;
	if(last_digit==0)
		last_digit= 5;
	return conversion(n/10)*10 +last_digit;   //for other remaining digits(whether '0' or '5')
}
int main()
{
	int t,n;
	cin>>t;
	while(t--){
        cin>>n;
        cout<<conversion(n)<<endl;
	}
}