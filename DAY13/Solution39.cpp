#include <iostream>
using namespace std;

int spiral(int arr[][4], int row ,int col)
{


int left = 0; int right = col-1;
int top = 0; int bottom = row-1;

while (left<=right && top<=bottom)
{
  
  for(int i = left; i<= right; i++){
    cout<<arr[top][i]<<" ";
  }
  top++;

  for(int i = top; i<=bottom; i++){
    cout<<arr[i][right];
  }
  right--;
  if(top<=bottom){

    for(int i = right; i>=left; i--){

       cout<<arr[bottom][i]<<" ";



    }

  }
   if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
  
}




}


int main()
{

  int arr[4][4] = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } };

spiral(arr,4,4);

  return 0;
}