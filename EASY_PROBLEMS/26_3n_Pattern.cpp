/*
Start From Number N
If Number Is Even Next Number Is n/2
If Number Is Odd Next Number Is (3*n+1)
If Number Is One Stop
5: 5 16 8 4 2 1
10: 10 5 16 8 4 2 1
*/
#include<iostream>
using namespace std;
void sequnce(int n){
    if(n==1)
    {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    if(n%2==0)
        sequnce(n/2);
    else
        sequnce(3*n+1);

}
int main(){
    int n;
    cin>>n;
    sequnce(n);
    return 0;
}
