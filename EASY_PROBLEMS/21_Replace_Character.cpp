/*
Replace Character 
abcadac
replace a with x
xbcxdxc
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
//Replace Character
//This Is From Right To Left. Left To Right Method Can Also Be Used
void replaceCharacter(char input[],char rep){
    if(input[0]=='\0')
        return;
    replaceCharacter(input+1,rep);
    if(input[0]=='a')
        input[0]=rep;
}
/*
Left To Right
void replaceCharacter(char input[],char rep){
    if(input[0]=='\0')
        return;
    if(input[0]=='a')
        input[0]=rep;
    replaceCharacter(input+1,rep);
}
*/
int main(){
    char word[]="abcabac";
    print(word);
    cout<<endl;
    reversePrint(word);
    cout<<"\nLength: "<<length(word);
    cout<<"\nReplacing 'a' with 'x'"<<endl;
    replaceCharacter(word,'x');
    print(word);
    return 0;
}
