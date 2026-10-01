#include <iostream>
using namespace std;

inline int pow(int a, int b)
{   
    int res = 0;
    for(int i=0; i<b;i++){
        res+=a*a;
    }
    return res;
}


inline int factorial(int num){
    int res=1 ;
    if(num==0) return 0;
    else{
        for(int i=1;i<=num; i++){
            res = res * i;
        }
    }

    return res;
}
int main()
{
    int num1 = 2;
    int num2 = 4;

    int fact = 6;
    cout<<"Pow of : "<<num1<<"^"<<num2<<" is --> "<<pow(num1,num2)<<endl;

    cout<<"Fact of "<<fact <<" is : "<<factorial(fact)<<endl;
    
}