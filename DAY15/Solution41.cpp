#include <iostream>
using namespace std;


int firstoccurence(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

int ans = -1;

	while (s<=e)
	{
		if(arr[mid] >= t){
			ans =  mid;
			 e = mid-1;
		}
        else if(arr[mid<t]){
         s = mid+1;
        }
		
		mid = s+(e-s)/2;

	}
	
	
return ans;

}

int lastoccurence(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

int ans = -1;

	while (s<=e)
	{
		if(arr[mid] <= t){
			ans =  mid;
			 s = mid+1;
		}
        else if(arr[mid]>t){
         e = mid-1;
        }
		
		mid = s+(e-s)/2;

	}
	
	
return ans;

}


int main()
{

 int arr[5] =   {1, 3, 3, 3, 19};
		      

cout<<lastoccurence(arr,5,3);
    return 0;
}