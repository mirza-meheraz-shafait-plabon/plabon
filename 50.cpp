#include<iostream>
using namespace std;
int main(){
int rows,i,j,k;
cout<<"enter rows ";
cin>>rows;
int number=1;
for(i=1;i<=rows;i++){
for(j=1;j<=i;j++){
cout<<number<<" ";
number++;}

cout<<"\n";
}



return 0;}
