/*
Print All Subsequence
*/
#include<iostream>
using namespace std;
void printSubsequence(string s,string o,int i){
    //Base case
    if(i==s.length()){
        cout<<o<<endl;
        return;
    }
    char c=s[i];
    //Take
    printSubsequence(s,o+c,i+1);
    //Not Take
    printSubsequence(s,o,i+1);
}
int main(){
    string s;
    cin>>s;
    printSubsequence(s,"",0);
    return 0;
}
