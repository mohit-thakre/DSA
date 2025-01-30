#include <iostream>
using namespace std;


int binarysearch(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s+(e-s)/2;

	while (s<=e)
	{
		if(arr[mid] == t){
			return mid;
		}
		else if(arr[mid]>t){

			e = mid-1;
			
		}
		else if (arr[mid<t])
		{
			s = mid+1;
		}
		mid = s+(e-s)/2;

	}
	
	
return -1;

}


int main()
{

 int arr[8] =  { 1, 2, 3, 4,5,6,7,8 };
		      

cout<<binarysearch(arr,8,5);
    return 0;
}