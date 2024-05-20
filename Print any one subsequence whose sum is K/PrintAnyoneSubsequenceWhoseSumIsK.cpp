// Funda
// Return TRUE OR FALSE
// avoid further recursion calls if you get true

#include<bits/stdc++.h>
using namespace std;

// return type should be bool
bool printS(int index,vector<int> ds,int s,int sum,int arr[],int n){
    // base case
    if(index==n){
        if(s==sum){
            for(auto it:ds){cout<<it<<" ";}
            cout<<endl;
          return true;
        }
        return false;
    }
    // pick
    ds.push_back(arr[index]);
    s+=arr[index];
    if(printS(index+1,ds,s,sum,arr,n)==true){
    return true;
    }

    // not pick
    s-=arr[index];
    ds.pop_back();
    if(printS(index+1,ds,s,sum,arr,n)==true){
      return true;
    }
  return false;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;
    printS(0,ds,0,sum,arr,n);
    return 0;
}
