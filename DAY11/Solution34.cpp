#include <iostream>
using namespace std;


int longestsubarray(int arr[], int n, int t)
{

int maxe = 0;
for(int i = 0; i<n; i++){

int sum = 0;
for(int j = i; j<n; j++){

    sum+=arr[j];

if(sum == t){
    maxe = max(maxe,j-i+1);

}

}

}


return maxe;
    
}

int main()
{

    int arr[3] = {-1, 1, 1};
   cout<< longestsubarray(arr, 3, 1);

    return 0;
}