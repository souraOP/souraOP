#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    int sum=0;
    int originalx=x;                //Storing our original number and use it for comparing with our while loop function.s
    while(x>0){
        int lastdigit;
        lastdigit=x%10;             //separates the lastdigit from our given number.
        sum+=pow(lastdigit,3);      //for cube rooting each value of our number.
        x=x/10;                     //for removing the last digit.
    }
    if(originalx==sum){
        cout<<"It is an armstrong number"<<endl;
    }
    else{
        cout<<"It is not an amrstrong number"<<endl;
    }
    return 0;
}