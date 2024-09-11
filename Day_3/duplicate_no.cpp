#include<iostream>
using namespace std;

void duplicate(int arr[], int n){
    long sum = 0, total = n*(n + 1)/2;
    for (int i = 0; i < n + 1; i++)
    {
        sum += arr[i];
    }
    cout<<"Duplicate number is : "<<(sum - total);
    
}

int main(){
    int n = 5, arr[] = { 1, 2, 4, 4, 5, 3};
    duplicate(arr, n);
}