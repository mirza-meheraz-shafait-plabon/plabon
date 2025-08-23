#include<iostream>
using namespace std;
int main(){

int n,i;
cout<<"give the number to find all the numbers upto that number";
cin>>n;

for (i=2;i<=n;i++){
bool isPrime=true;
for(int j=2;j*j<=i;j++){
if(i%j==0){
isPrime=false;
break;}}
if (isPrime){
cout<<i<<" ";
}
}



return 0;}
