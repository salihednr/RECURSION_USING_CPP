/*
Remove Particular Character From Character Array
eg:
salihahanu 
remove a
slihhnu
*/
#include<iostream>
using namespace std;
void print(char input[]){
    if(input[0]=='\0')
        return;
    cout<<input[0];
    print(input+1);
}
void removeChar(char input[],char match){
    if(input[0]=='\0')
        return;
    if(input[0]==match){
        for(int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];
        }
        removeChar(input,match);
    }
    else
        removeChar(input+1,match);
}
int main(){
    char c[]="salihahanu";
    print(c);
    cout<<endl;
    removeChar(c,'a');
    print(c);
    return 0;
}
