#include<iostream>
using namespace std;
int main(){
bool isPrime=true;

int a;
cin>>a;
if (a<2){
cout<<"not prime";}
else{
for(int i=2;i*i<=a;i++){
if (a%i==0){
isPrime=false;
}

}

}
if(isPrime==false)
cout<<"not prime";

else cout<<"is prime";









return 0;}
