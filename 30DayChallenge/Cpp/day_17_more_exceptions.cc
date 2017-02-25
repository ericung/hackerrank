#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cstdio>
using namespace std;

//Write your code here
struct negative_exception : public exception {
    const char* what() const throw()  {
        return "n and p should be non-negative";
    }
};

class Calculator {
    public:
        int power(int num, int power) {
            if ((num < 0)||(power < 0)){
                throw negative_exception();
            }
            return (int)pow(num,power);
        }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
