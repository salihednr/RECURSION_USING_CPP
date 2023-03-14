/*
Print Subsequence Whose Sum Is K
*/
#include<iostream>
#include<vector>
using namespace std;
void sumSubsequence(int ar[],vector<int> v,int i,int size,int sum,int k){
    //Base Case
    if(size==i){
        if(sum==k){
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //Take
    v.push_back(ar[i]);
    sum+=ar[i];
    sumSubsequence(ar,v,i+1,size,sum,k);
    //Not Take
    sum-=ar[i];
    v.pop_back();
    sumSubsequence(ar,v,i+1,size,sum,k);
    
}
int main(){
    int ar[]={1,2,3,4,5,6,7,8,9};
    vector<int> v;
    int size=sizeof(ar)/sizeof(int);
    sumSubsequence(ar,v,0,size,0,8);
    return 0;
}
