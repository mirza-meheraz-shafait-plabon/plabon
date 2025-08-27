#include<iostream>
using namespace std;
int main(){
int rows,i,j,k;
cout<<"give rows";
cin>>rows;
for(i=1;i<=rows;i++){
for(j=1;j<=rows-i;j++){
cout<<" ";}

for(k=1;k<=2*i-1;k++){
cout<<"*";}
cout<<endl;}
/////after1800rotation the pyramid will basically be the same inshaalloh.so,the code is for a single pyramid



return 0;}
