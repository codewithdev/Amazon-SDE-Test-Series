/*Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. */

/*Sample Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Sample Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int *arr= new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        rotate(arr,arr+d,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}