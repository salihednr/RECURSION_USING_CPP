/*
Tower Of Hanoi

Tower Of Hanoi Consists Of 3 Rods Named As A,B,C
And Consisting Of N Disks
Naming Start From Bigger Disk 1,2,3....

Rules
1) Bigger Disk Can't Place On Top Of Smaller Disks
2) Only One Disk Can Move At A Time
3) In Each Move Only Upper Disk Can Be Moved 

Solution
1) N-1 Disks Move From A To B
2) Remaining 1 Disks Move From A To C
3) N-1 Disks Move From B To C

Number Of Steps
1) 2^n-1 Steps
*/
#include<iostream>
using namespace std;
int TOH(int n){
    if(n==0)
        return 0;
    return TOH(n-1)+1+TOH(n-1);
}
//Little Bit Optimized Solution
// TOH(n-1)+TOH(n-1)=2*TOH(n-1)
int TOH2(int n){
    if(n==0)
        return 0;
    return 2*TOH2(n-1)+1;
}
int main(){
    int n;
    cin>>n;
    cout<<"Number Of Steps In Tower Of Hanoi: "<<TOH(n)<<endl;
}
