#include<bits/stdc++.h>
using namespace std;
int trappingRainWater(int *arr, int n){
  int i=0;
  int j= n-1;
  int res=0;
  int maxleft=0;
  int maxright=0;
  while(i<j){
    if(arr[i]<=arr[j]){
      if(arr[i]>=maxleft){
        maxleft= arr[i];
      }
      else{
        res+= maxleft- arr[i];
        i++;
      }
    }
      else
      {
        if(arr[j]>= maxright) maxright= arr[j];
        else res+= maxright- arr[j];
        j--;
      }
    }
  return res;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<trappingRainWater(a,n)<<endl;
  }
  return 0;
}