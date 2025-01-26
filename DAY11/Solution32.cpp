#include <iostream>
using namespace std;

int maxelement(int arr[],int s){
    for(int i = 0; i<s; i++){

int count = 0;

        for(int j = 0; j<s; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>s/2){
            return arr[i];
        }
    }
}

int main()
{

   
    int arr[7] ={1,1,1,2,2,2,2};
    cout<<maxelement(arr,7);

 

    return 0;
}