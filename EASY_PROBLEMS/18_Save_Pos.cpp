/*
Save All The Position Of Particular Element Which Occurs Multiple Time Or Atleast Once
*/
#include<iostream>
#include<vector>
using namespace std;
//Using Vector
void savePos(int ar[],int size,int e,int i,vector<int> &pos){
    if(i==size)
        return;
    if(ar[i]==e)
        pos.push_back(i);
    savePos(ar,size,e,i+1,pos);
}
//Using Array Function Will Return The Count Of The Occurance
int savePos2(int ar[],int size,int e,int i,int pos[],int j=0){
    if(i==size)
        return 0;
    if(ar[i]==e)
    {
        pos[j]=i;
        return 1+savePos2(ar,size,e,i+1,pos,j+1);
    }
    else
        return savePos2(ar,size,e,i+1,pos,j);
}
int main(){
    int ar[]={1,2,5,3,4,5};
    int size=sizeof(ar)/sizeof(int);
    vector<int> v;
    savePos(ar,size,5,0,v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    int pos[size]={0};
    int count=savePos2(ar,size,5,0,pos);
    cout<<endl;
    for(int i=0;i<count;i++)
        cout<<pos[i]<<" ";
    return 0;
}
