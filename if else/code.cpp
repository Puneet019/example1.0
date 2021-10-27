#include<iostream>
using namespace std;

int main() {

int a;
cin>>a;

if(a<0) {                        // --> a is less than 0
    cout<<"False"<<endl;    
    return -1;
}
if(a%2==0){                      // -->  when a is divided by 2 then remainder is  equal to zero
    cout<<"true";
}
else{                            // -->  a is more than 0
    cout<<"false"<<" ";
}

return 0;
}
