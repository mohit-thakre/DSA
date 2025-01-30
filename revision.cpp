#include <iostream>
#include<algorithm>

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

int gcd(int n1, int n2){

int num = min(n1,n2);
int count = 1;

for(int i = 1; i<num; i++){
    if(n1%i==0 && n2%i==0){
        count = i;
    }
}
return count;
}

bool armstrong(int n){

int sum = 0; 
int digit = 0;
int num = n;

while(n>0){

    digit = n%10;
    n/=10;
    sum += digit*digit*digit;

}
if(sum == num){
  return true;
}
else return false;

}

void divisor(int n){
    for(int i = 1; i<n; i++){
      
        if(n % i == 0){

            cout<<i<<" ";
        }
    }
}

bool prime(int n){

    bool prime = true;
    for(int i = 2; i<n; i++){

        if(n % i == 0){
            prime = false;
        }
        
    }
    return prime;
}


void recursion(){

int n = 0; //need to initialize outside the funtion

if(n == 5){
    return ;
}

cout<<n<<" ";
n++;
recursion();

}

void recursivename(int i,int n){

if(i>n){
    return;
}
cout<<"mohit"<<endl;
i++;
recursivename(i ,n);

}


void printnumber(int i ,int n){

    if(i>n){
        return;
    }

   
    cout<<i<<" ";
     i++;
    printnumber(i,n);


}

void printnto1(int n){

if(n<=0){
    return;
}
cout<< n<<" ";
n--;
printnto1(n);

}


void naturalsum(int n,int i,int sum){
    
    if(i>n){
        return;
    }
    sum+=i;
    i++;
    cout<<sum<<" ";

    naturalsum(n,i,sum);

}

int main(){

naturalsum(5,1,0);
    
}