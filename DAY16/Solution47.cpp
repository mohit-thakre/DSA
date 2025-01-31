#include <iostream>
using namespace std;


int singlelement(int arr[],int n)
{
	int s = 1; int e = n-2; int mid = s +(e-s)/2;

	if(arr[0]!=arr[1]) return arr[0];
	if(arr[n-1]!=arr[n-2]) return arr[n-1];


	while (s<=e)
	{
		if(arr[mid] !=arr[mid-1] && arr[mid]!=arr[mid+1]){
			return arr[mid];
		}

		if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
            (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            
            s = mid + 1;

        } else {
           
            e = mid - 1;
        }
   
		
		mid = s+(e-s)/2;

	}
	
	
return n;

}


int main()
{

 int arr[11] = {1,1,2,2,3,3,4,5,5,6,6};
		      

cout<<singlelement(arr,11);
    return 0;
}