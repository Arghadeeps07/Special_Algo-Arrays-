#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[6] ={2 , 3, 2, 2, 1, 2};
    int count =0 ;
    int element = 0;
    for(int i=0 ; i<6 ; i++){
        if(count == 0){
            count = 1;
            element = arr[i];
        }
        else if(arr[i] == element)
            count++;
        else
            count--;
    }
    int count1 = 0;
    for(int i=0 ; i<6 ; i++){
        if(arr[i] == element)
            count1++;
    }

    if(count1 > n/2)
        cout<<element;
    else
        cout<<"Not found";
      return 0;
}