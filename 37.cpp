#include<iostream>
using namespace std;
int main(){
int n,firstNumber=0,secondNumber=1,next,evenSum=0;
cout<<"give the number ";
cin>>n;
if(n>=0){
evenSum+=firstNumber;}
for(int i=2;i<=n;i++){
next=firstNumber+secondNumber;
firstNumber=secondNumber;
secondNumber=next;
if(i%2==0){
evenSum+=next;
}}
cout<<evenSum;









return 0;}
