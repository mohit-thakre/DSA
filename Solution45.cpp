#include <iostream>
using namespace std;


int ceil(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;

    int count = 0;

	while (s<=e)
	{
		if(arr[mid] <= t){
		
	   count++;
	     s = mid +1;

		}

		else if(arr[mid]>=t){
			e = mid -1;
			count++;
		}
		
		mid = s+(e-s)/2;

	}
	
	
return count;

}


int main()
{

 int arr[5] =   {3, 3, 3, 5, 5};
		      

cout<<ceil(arr,5,3);
    return 0;
}