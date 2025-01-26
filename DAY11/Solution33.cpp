#include <iostream>
using namespace std;

int sumsubarray(int arr[], int s)
{
  int maxe = INT8_MIN;
  int sum = 0;

  for(int i = 0; i<s; i++){

    sum+=arr[i];

    if(sum<0){
      sum = 0;
    }

   if(sum>maxe){
    maxe = sum;
   }


  }
  return maxe;
  
}

// print subarray
int sumsubarray1(int arr[], int s)
{
  int maxe = INT8_MIN;
  int sum = 0;
  int start = -1;
  int end = -1;
  int tstart = -1;


  for(int i = 0; i<s; i++){

    sum+=arr[i];

    if(sum<0){
      sum = 0;
      tstart = i+1;
    }

   if(sum>maxe){
    maxe = sum;
    start = tstart;
    end = i;
   }


  }
  for(int i =start; i<=end; i++){
    cout<<arr[i]<<" ";
  }
  return maxe;
  
}

int main()
{

  int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
 cout<<sumsubarray(arr,9);

  return 0;
}