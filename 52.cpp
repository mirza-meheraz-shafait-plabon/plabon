#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
if(num<=1){
return false;}
for(int i=2;i<=sqrt(num);i++){
if(num%i==0){
return false;}}
return true;}
int main(){
int number;
cout<<"give the number ";
cin>>number;
if(isPrime(number)){
cout<<"prime";}
else{
cout<<"nope";}



return 0;}
