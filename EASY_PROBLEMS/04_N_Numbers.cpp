/*
Print N Sequence
n=5
1 2 3 4 5
*/
#include<iostream>
using namespace std;
void print(int n){
    if(n==0)
        return;
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}
