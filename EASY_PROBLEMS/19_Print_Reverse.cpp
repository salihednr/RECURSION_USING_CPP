/*
Print A Character Array In Correct Order And Reverse Order
*/
#include<iostream>
using namespace std;
void print(char input[]){
    if(input[0]=='\0')
        return;
    cout<<input[0];
    print(input+1);
}
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
    return 0;
}
