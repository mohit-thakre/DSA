#include <iostream>
using namespace std;


int searchrotated(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;



	while (s<=e)
	{
		if(arr[mid] == t){
			return mid;
		}

		else if(arr[s]<=arr[mid]){

			if(arr[s]<=t && arr[mid]>t){
				e  = mid - 1;
			}
			else{
				s = mid + 1;
			}
			

		}
		
		else{

if(arr[e]>=t && arr[mid]<t){
	s = mid +1;
}
else{
	e = mid - 1;
}

		}
        
		
		mid = s+(e-s)/2;

	}
	
	
return -1;

}

int main()
{

 int arr[8] ={4,5,6,7,0,1,2,3};
		      

cout<<searchrotated(arr,8,0);
    return 0;
}