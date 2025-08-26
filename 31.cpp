#include<iostream>
using namespace std;
int main(){
int a=123,reversedNum=0;
int temp=a;
while(int temp!=0){
int digit=temp%10;
reversedNum=reversedNum*10+digit;
temp/=10;
}
int temp=a;
cout<<"the reversed number is "<<reversedNum;






return 0;}
