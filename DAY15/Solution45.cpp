#include <iostream>
using namespace std;


int ceil(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

    int ceil = -1;

	while (s<=e)
	{
		if(arr[mid] >= t){
		
	   ceil = arr[mid];
	   e = mid -1;

		}

		else if(arr[mid]<t){
			 s = mid +1;
		}

		


	
		
		mid = s+(e-s)/2;

	}
	
	
return ceil;

}

int floor(int arr[], int n, int t){

int s = 0;
int e = n-1;
int mid = s+(e-s)/2;
int floor = n;

while (s<=e)
{
	if(arr[mid]<=t){

floor = arr[mid];
s = mid + 1;


	}
	else if (arr[mid]>t)
	{
		e = mid -1;
	}
	
	 mid = s+(e-s)/2;

}

return floor;

}




int main()
{

 int arr[5] =   {3, 5, 8, 15, 19};
		      

cout<<floor(arr,5,6);
    return 0;
}