#include<iostream>
using namespace std;
int findGCd(int a,int b){

while( b!=0){
int temp=b;
b=a%b;
a=temp;}
return a;}
int findLCM(int a,int b){
return(a/findGCd(a,b))*b;}

int main(){
int num1,num2;
cout<<"enter1st number";
cin>>num1;
cout<<"enter2nd number";
cin>>num2;
if(num1==0||num2==0){
cout<<"lcm is0";}
else{int lcm=findLCM(num1,num2);
cout<<"LCM is"<<lcm;}
return 0;}
