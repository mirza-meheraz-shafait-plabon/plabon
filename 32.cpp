#include<iostream>
using namespace std;
int main(){
int a=123,reversedNum=0;
int temp=a;
while(temp!=0){
int digit=temp%10;
reversedNum=reversedNum*10+digit;
temp/=10;
}
cout<<"the reversed number is "<<reversedNum<<"\n";
if(a==reversedNum){
cout<<"palindrome";}
else{
cout<<"nope";}





return 0;}
