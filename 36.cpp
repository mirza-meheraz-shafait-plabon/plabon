#include<iostream>
using namespace std;
int main(){
int num;
cout<<"give";
cin>>num;
cout<<"the factors of thee num are";
if(num<=0){
cout<<"enter positive";}

else{
for(int i=1;i<=num;i++){
if(num%i==0){
cout<<i<<" ";}}}


return 0;}
