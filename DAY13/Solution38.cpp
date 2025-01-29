#include <iostream>
#include <algorithm>
using namespace std;

int consecutivesequence(int arr[],int n){

int larger = 1;
int count  = 0;
int last = INT16_MIN;


sort(arr, arr + n);

for(int i = 0; i<n; i++){
if(arr[i]-1==last){
    count++;
    last = arr[i];
  
}
    
    else if(arr[i]-1 != last){
        count = 1;
        last = arr[i];
    }

    larger = max(larger,count);

}
 return larger;
}



int main()
{

   
    int arr[6] ={0,2,1,3,11,15};
    cout<<consecutivesequence(arr,6);

 

    return 0;
}