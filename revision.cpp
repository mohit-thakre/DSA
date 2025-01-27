#include <iostream>
using namespace std;

int countnumber(int n){
int count = 0;
while (n>0)
{
    n = n/10;
    count++;
}

return count;

}

int reverse(int n){

int num = 0;
int last = 0;

while (n>0)
{
   last  = n % 10;
   n/=10;
    num = num*10+last;
}

return num;
}

bool palindrome(int n){
    int l  = n%10;
    int f = 0;
    while(n>0){

f = n%10;

n/=10;

    }
    if(f==l){
        return true;
    }
    return false;
};

int main(){

cout<<palindrome(121);
    
}