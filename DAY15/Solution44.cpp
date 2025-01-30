#include <iostream>
using namespace std;


int searchinsert(int arr[],int n,int t)
{
	int s = 0; int e = n-1; int mid = s +(e-s)/2;



	while (s<=e)
	{
		if(arr[mid] == t){

			return mid;	
      
		}

    else if(arr[mid]>t){
      e = mid-1;
    }

	 else if(arr[mid]<t){
      s = mid+1;
    }
		
		mid = s+(e-s)/2;

	}
	
	
return n;

}


int main()
{

 int arr[5] =   {1,2,4,7,11};
		      

cout<<searchinsert(arr,5,2);
    return 0;
}