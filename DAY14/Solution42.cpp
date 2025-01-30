#include <iostream>
using namespace std;


int upperbound(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

int ub = n;

	while (s<=e)
	{
		if(arr[mid] > t){
			ub =  mid;
      e = mid-1;
		}
    else if(arr[mid<t]){
      s = mid+1;
    }
		
		mid = s+(e-s)/2;

	}
	
	
return ub;

}


int main()
{

 int arr[5] =   {3, 5, 8, 15, 19};
		      

cout<<upperbound(arr,5,3);
    return 0;
}