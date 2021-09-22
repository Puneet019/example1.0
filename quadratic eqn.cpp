#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a,b,c,discriminant,root1,root2;
    cout<<"input three no:";
    cin>>a>>b>>c;

    discriminant= (b*b - 4*a*c);

    if(discriminant>0){
        cout<<"root1="<<(-b+sqrt(discriminant)/2*a) <<"     roots are real and different" <<endl;
        cout<<"root2="<<(-b-sqrt(discriminant)/2*a) <<"     roots are real and different"<<endl;
    }
    else if(discriminant==0){
        cout<<((-b)/2*a) <<"    roots are real and equal"<<endl;
    }

    else{
        cout <<"root1="<< (-b/2*a) + sqrt(-discriminant)/2*a<<"     roots are different and complex" <<endl;
        cout<< "root2="<< (-b/2*a) - sqrt(-(discriminant))/2*a<<"   roots are different and complex" <<endl;
    }

    return 0;

    
}
