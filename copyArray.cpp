#include <iostream>
#include <math.h>
using namespace std;


void nhap(int arr[],int n ){
    for(int i = 0;i<n;i++){
        cout << "nhap phan tu thu: ["<< i <<"] : ";
        cin >> arr[i];
    }
}
void copyArr(int copyarr[],int arr[],int n)
{
    int start = 0;
    int end = n - 1;
     for(int i = 0; i < n ;i++){
       copyarr[i] = arr[i];
    }

     while (start < end)
    {

        int temp = copyarr[start];
        copyarr[start] = copyarr[end];
        copyarr[end] = temp;
        start++;
        end--;
    }

    for(int i = 0; i < n; i++){
        cout << "\n" << copyarr[i];
    }
}

int main() {
int n;
int arr[1000];
int copyarr[1000];

cout << "nhap vao so phan tu trong mang : ";
cin >> n;
nhap(arr,n);
cout << "mang dao nguoc \n";
copyArr(copyarr,arr,n);

}