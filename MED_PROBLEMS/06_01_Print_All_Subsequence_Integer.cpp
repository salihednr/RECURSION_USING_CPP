/*
Print Subsequence
*/
#include<iostream>
#include<vector>
using namespace std;
void sumSubsequence(int ar[],vector<int> v,int i,int size){
    //Base Case
    if(size==i){
        for(int j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
        return;
    }
    //Take
    v.push_back(ar[i]);
    sumSubsequence(ar,v,i+1,size);
    //Not Take
    v.pop_back();
    sumSubsequence(ar,v,i+1,size);
    
}
int main(){
    int ar[]={1,2,3,4};
    vector<int> v;
    int size=sizeof(ar)/sizeof(int);
    sumSubsequence(ar,v,0,size);
    return 0;
}
