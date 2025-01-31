#include <iostream>
using namespace std;


int firstoccurence(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

    int first  = -1;

	while (s<=e)
	{
		if(arr[mid] >= t){
		
	   first = mid;
	   e = mid - 1;

		}

		else if(arr[mid]<t){
			 s = mid +1;
		}
		mid = s+(e-s)/2;

	}
	
	
return first;

}

int lastoccurence(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

    int last  = -1;

	while (s<=e)
	{
		if(arr[mid] <= t){
		
	   last = mid;
	   s = mid + 1;

		}

		else if(arr[mid]>t){
			 e = mid - 1;
		}
		mid = s+(e-s)/2;

	}
	
	
return last;

}

int countoccurence(int arr[],int n,int t){
	int first = firstoccurence(arr,n,t);
	if(first == -1) return 0;
	int last = lastoccurence(arr,n,t);
	return last-first+1;

}



int main()
{

 int arr[5] =   {3, 3, 3, 15, 19};
		      

cout<<countoccurence(arr,5,19);
    return 0;
}