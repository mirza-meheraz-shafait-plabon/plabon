#include<iostream>
using namespace std;
int main(){
int rows,i,j,k;
cout<<"enter rows ";
cin>>rows;
for(i=0;i<rows;i++){
for(j=1;j<=rows-i;j++){
cout<<" ";}

int number=1;
for(k=0;k<=i;k++){
cout<<number<<"  ";
number=number*(i-k)/(k+1);}
cout<<endl;}



return 0;}
