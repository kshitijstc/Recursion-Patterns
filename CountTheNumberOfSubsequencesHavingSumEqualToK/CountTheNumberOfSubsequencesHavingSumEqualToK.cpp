#include<bits/stdc++.h>
using namespace std;

// return type will be int
int printS(int index,int s,int sum,int arr[],int n){
    // base case or condition
    if(s>sum){
      return 0;
    }
    if(index==n){
        if(s==sum){
            return 1;
        }
        return 0;
    }
    // pick
    s+=arr[index];
    int l=printS(index+1,s,sum,arr,n);

    // not pick
    s-=arr[index];
    int r=printS(index+1,s,sum,arr,n);
  return l+r;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    printS(0,0,sum,arr,n);
    return 0;
}
