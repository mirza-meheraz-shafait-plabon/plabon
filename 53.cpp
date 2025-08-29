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
int number1,number2;
cout<<"give the1st number ";
cin>>number1;
cout<<"give the2nd number";
cin>>number2;
for(int i=number1;i<=number2;i++){
if (isPrime(i)){
cout<<i<<" ";}
}



return 0;}
