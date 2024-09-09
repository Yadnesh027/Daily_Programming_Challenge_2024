#include<iostream>
using namespace std;

int main(){
    int n, low = 0, mid = 0;
    cout<<"Enter the no of elements : ";
    cin>>n;
    int* arr = new int[n], high = n - 1;
    cout<<"Enter the nos : \n";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    while(mid <= high) {
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if (arr[mid] == 1){
            mid++;
        } 
        else{  
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}