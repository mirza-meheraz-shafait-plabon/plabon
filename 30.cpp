#include<iostream>
#include<cmath>
using namespace std;

bool isAmstrong(int num){
int originalNumber=num;
int sum=0;
int digitCount=0;
int temp=originalNumber;
if(temp==0)
{
digitCount=1;}
else{while  (temp>0){
temp/=10;
digitCount++;}}
temp=originalNumber;
while(temp>0){
int remainder=temp%10;
sum+=pow(remainder,digitCount);
temp/=10;}
return sum==originalNumber;}
int main(){
int lowerBound,upperBound;
cout<<"lower bound is";
cin>>lowerBound;
cout<<"upper bound is";
cin>>upperBound;
cout<<"amstrrong between"<<lowerBound<<"and"<<upperBound<<"are";
for(int i=lowerBound;i<=upperBound;i++){
if(isAmstrong(i)){
cout<<i<<" ";}}
cout<<endl;
return 0;}
