#include<iostream>
using namespace std;
int main()
{
        int arr[]={3,6,16,8,5};
        int n=5;

        for(int i=0; i<n-1;i++){
            for(int j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        for(int u =0;u<n;u++){cout<<arr[u]<<" ";}

}