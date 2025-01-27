#include <iostream>
using namespace std;

int signarray(int arr[], int n)
{
  int pos[n];
  int p = 0;
  int neg[n];
  int nn = 0;
 
  for(int i = 0; i<n; i++){

    if(arr[i]>0){
      pos[p] = arr[i];
      p++;
    }
    else if(arr[i]<0){
      neg[nn] = arr[i];
      nn++;
    }

  }
 

  for(int i = 0; i < n; i++) {

  arr[2*i] = pos[i];
  arr[2*i+1] = neg[i];

  }
  for(int i = 0; i < n; i++) {

 cout<<arr[i]<<" ";

  }

}

int signarray1(int arr[], int n){


int posI = 0;
int negI = 1;


for(int i = 0; i<n; i++){

  if(arr[i]>0){
    arr[posI] = arr[i];
    posI= posI+2;
  }
  if(arr[i]<0){
    arr[negI] = arr[i];
    negI= negI+2;
  }

}
for(int i = 0; i < n; i++) {

 cout<<arr[i]<<" ";

  }


}



int main()
{

  int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
 cout<<signarray1(arr,9);

  return 0;
}