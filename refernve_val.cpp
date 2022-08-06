#include <iostream>
using namespace std;

 void swap1(int a,int b){
  a+=b;
  b=a-b;
  a=a-b; 
 } 

void swap2(int & a,int & b){
  a+=b;
  b=a-b;
  a=a-b; 
 } 


void swap3(int *a,int *b){
  int temp=*a;
   *a=*b;
  *b=temp;
 
   } 



int main(){

  cout<<"a = ";
  int a;
  cin>>a;

  cout<<"b = ";
  int b;
  cin>>b;

  cout<<"Before swapped : "<<"\n";
  cout<<"a = "<<a<<"\n";
  cout<<"b = "<<b<<"\n";

  //  swap1(a,b); 
  //  swap2(a,b);
    swap3(&a,&b);
    
  cout<<"After swapped : "<<"\n";
  cout<<"a = "<<a<<"\n";
  cout<<"b = "<<b<<"\n";



    return 0;
}