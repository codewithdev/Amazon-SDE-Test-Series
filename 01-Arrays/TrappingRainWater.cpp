#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int res=0;
  int leftmax=0,rightmax=0;
  int *arr= new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=1;i<n;i++){
    leftmax= arr[i];
    for(int j=0;j<i;j++){
      leftmax= max(leftmax,arr[j]);
    }
    rightmax= arr[i];
    for(int j=i+1;j<n;j++){
      rightmax= max(rightmax,arr[j]);
    }
  res= res+(min(leftmax,rightmax)-arr[i]);
}
cout<<res<<endl;
}