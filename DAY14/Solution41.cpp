#include <iostream>
using namespace std;


int lowerbound(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

int lb = -1;

	while (s<=e)
	{
		if(arr[mid] >= t){
			lb =  mid;
      e = mid-1;
		}
    else if(arr[mid<t]){
      s = mid+1;
    }
		
		mid = s+(e-s)/2;

	}
	
	
return lb;

}


int main()
{

 int arr[5] =   {3, 5, 8, 15, 19};
		      

cout<<lowerbound(arr,5,16);
    return 0;
}