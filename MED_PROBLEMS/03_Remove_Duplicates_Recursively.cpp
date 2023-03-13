/*
Remove Consecutive Duplicates
eg:
ssssaaaallllihhhhhhh
Remove Consecutive Duplicates
salih
*/
#include<iostream>
using namespace std;
void print(char input[]){
    if(input[0]=='\0')
        return;
    cout<<input[0];
    print(input+1);
}
void removeConsecutive(char input[]){
    if(input[0]=='\0')
        return;
    if(input[0]==input[1]){
        for(int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];
        }
        removeConsecutive(input);
    }
    else
        removeConsecutive(input+1);
}
int main(){
    char c[]="ssssaaaallllihhhhhhh";
    print(c);
    cout<<endl;
    removeConsecutive(c);
    print(c);
    return 0;
}
