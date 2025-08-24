#include<iostream>
using namespace std;
int main(){
float a,b,d;
char c;
cout<<"give the1st number";
cin>>a;
cout<<"give the 2nd number";
cin>>b;
cout<<"choose operands+/-/*//";
cin>>c;
if(c=='+'){
d=a+b;}

else if(c=='-'){

d=a-b;}
else if(c=='*'){
d=a*b;
}
else if(c=='/'){
d=a/b;}

else{
cout<<"invalid";}
cout<<d;
return 0;}
