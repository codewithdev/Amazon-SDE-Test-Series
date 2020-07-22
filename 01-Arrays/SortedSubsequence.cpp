/*Sorted subsequence of size 3 
Given an array A of N integers, find any 3 elements in it such that A[i] < A[j] < A[k] and i < j < k.*/


/*Example:
Input:
2
5
1 2 1 1 3
3
1 1 3
Output:
1
0*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2, int n, int m) {

    if (m == 0) return true;
    if (n == 0) return false;

    if (v1[n - 1] == v2[m - 1]) return isSubSequence(v1, v2, n - 1, m - 1);

    return isSubSequence(v1, v2, n - 1, m);
}

vector<int> find3Numbers(vector<int>, int);

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        auto res = find3Numbers(a, n);

        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and
                   isSubSequence(a, res, n, res.size())) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}// } Driver Code Ends


/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
vector<int> find3Numbers(vector<int> arr, int n) {
    int dec[N],inc[N];
   inc[0]=-1;
   dec[N-1]=-1;
   int min=0;
   for(int i=1;i<N;i++)
   {
       if(A[i]<=A[min])
       {
           inc[i]=-1;
           min=i;
       }
       else
        inc[i]=min;
   }
   int max=N-1;
   for(int i=N-2;i>=0;i--)
   {
       if(A[i]>=A[max])
       {
           dec[i]=-1;
           max=i;
       }
       else
        dec[i]=max;
   }
   vector<int> v1;
   for(int i=0;i<N;i++)
   {
       if(inc[i]!=-1 && dec[i]!=-1)
       {
           v1.push_back(A[inc[i]]);
           v1.push_back(A[i]);
           v1.push_back(A[dec[i]]);
           return v1;
       }
   }
   return v1;
}
    // Your code here