#include<iostream>
using namespace std;
int main(){
int i,k,j,rows;
cout<<"rows are";
cin>>rows;
for(i=1;i<=rows;i++){
for(j=1;j<=rows-i;j++){
cout<<" ";
}
for(k=1;k<=2*i-1;k++){
cout<<"*";}
cout<<endl;}




return 0;}
