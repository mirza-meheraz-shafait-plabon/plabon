#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a;
bool isPrime=true;
cout<<"enter a positive integer";
cin>>a;
for(int i=2;i*i<=a;i++){
if(a%i==0){
isPrime=false;
}}
if(isPrime){
cout<<"prime";}
else{
cout<<"nope";
}



return 0;}
