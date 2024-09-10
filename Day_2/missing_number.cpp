#include<iostream>
using namespace std;

void missing_number(int arr[], int n){
    long sum = 0, total = n*(n + 1)/2;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    cout<<"Missing number is : "<<(total - sum);
    
}

int main(){
    int n = 5, arr[] = { 1, 2, 3, 4};
    missing_number(arr, n);
}