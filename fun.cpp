#include <iostream>
using namespace std;

void func(int  a[] ){

a[0]=90;

}



int main(){
int b[]={4,5};

func(b);

for(auto x:b)
  cout<<x;


}

