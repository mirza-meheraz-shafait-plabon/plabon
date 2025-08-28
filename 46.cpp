#include<iostream>
using namespace std;
int main(){
int rows,i,j,k;
cout<<"give rows";
cin>>rows;
for(i=rows;i>=1;i--){
for(j=1;j<=rows-i;j++){
cout<<" ";}
for(k=1;k<=2*i-1;k++){
if(i==rows||i==1||k==1||k==2*i-1){
cout<<"*";}
else{
cout<<" ";}}
cout<<endl;}







return 0;}
