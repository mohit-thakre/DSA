#include <iostream>
using namespace std;


int mat90(int arr[][4], int row,int col)
{
	int newarr[row][col];


for(int i = 0; i<row; i++){
	for(int j = 0; j<col; j++){

		newarr[j][row - 1 - i] = arr[i][j]; 

	}
}


for(int i = 0; i<row; i++){
	for(int j = 0; j<col; j++){

		cout << newarr[i][j] << " ";

	}
	 cout << endl;
}


}











int main()
{

 int arr[4][4] = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } };

mat90(arr,4,4);
    return 0;
}