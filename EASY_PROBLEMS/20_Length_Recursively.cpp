/*
Length Of Character Array
*/
#include<iostream>
using namespace std;
//Length Of Character Array
int length(char input[]){
    if(input[0]=='\0')
        return 0;
    return 1+length(input+1);
}
//Print Correct Order
void print(char input[]){
    if(input[0]=='\0')
        return;
    cout<<input[0];
    print(input+1);
}
//Print In Reverse Order
void reversePrint(char input[]){
    if(input[0]=='\0')
        return;
    reversePrint(input+1);
    cout<<input[0];
}
int main(){
    char word[]="abc";
    print(word);
    cout<<endl;
    reversePrint(word);
    cout<<"\nLength: "<<length(word);
    return 0;
}
