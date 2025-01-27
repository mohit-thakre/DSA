#include <iostream>
using namespace std;


int buyandsell(int arr[], int n)
{


int profit = 0;
for(int i = 0; i<n; i++){

  
  for(int j = i+1 ; j<n; j++){

   if(arr[j]>arr[i]){
    profit = max(profit,arr[j]-arr[i]);
   }




  }



}




return profit;
    
}


//optimal
int buyandsell(int arr[], int n)
{

int minprice = INT16_MAX;
int profit = 0;
for(int i = 0; i<n; i++){

  
  minprice = min(minprice,arr[i]);
  profit = max(profit,arr[i]-minprice);



  }






return profit;
    
}

int main()
{

    int arr[3] = {1,2,3};
   cout<< buyandsell(arr, 3);

    return 0;
}