/*
Convert String To Integer

Notes
char-char = integer
char+char = integer

'8'-'0'= 8
ASCII Value Of 8 Is 56
ASCII Value Of 0 Is 48
56-48 = 8
So We Will Get Integer Number If We Substract Character 0 From That Character Integer
This Is The Way To Convert Character Integer To Integer

*/
#include<iostream>
using namespace std;
//Print String
void print(char input[]){
    if(input[0]=='\0')
        return;
    cout<<input[0];
    print(input+1);
}
//Convert String To Integer
int stringToInteger(char input[],int i){
    if(i==-1)
        return 0;
    return stringToInteger(input,i-1)*10+input[i]-'0';
}
//length Of The String
int length(char input[]){
    if(input[0]=='\0')
        return 0;
    return 1+length(input+1);
}
int main()
{
    char input[]="123";
    int inp=stringToInteger(input,length(input)-1);
    cout<<inp<<endl;
    return 0;
}
