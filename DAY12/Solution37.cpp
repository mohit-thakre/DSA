#include <iostream>
#include <vector>
using namespace std;

int leader(int arr[],int n){


int last = INT16_MIN;
vector<int>ans;

    for (int i = n - 1; i >= 0; i--) {
       
       if(arr[i]>last){
        last = arr[i];
        ans.push_back(arr[i]);

       }


    }
    for(int i = ans.size()-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }
}

int main()
{

   
    int arr[3] ={0,2,1};
    leader(arr,3);

 

    return 0;
}