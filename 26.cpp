#include<iostream>
using namespace std;
int main(){

int firstTerm=0,secondTerm=1,next,n,i;
cout<<"give the number of terms";
cin>>n;
cout<<"fibonacci series of n terms "<<firstTerm<<","<<secondTerm<<",";
for(i=3;i<=n;i++){
next=firstTerm+secondTerm;
firstTerm=secondTerm;
secondTerm=next;
cout<<next<<",";

}
return 0;}
