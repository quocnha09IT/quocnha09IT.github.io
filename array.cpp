#include <iostream>
#include <math.h>
using namespace std;


void nhap(int arr[],int n ){
    for(int i = 0;i<=n;i++){
        cout << "nhap phan tu thu: ["<< i <<"] : ";
        cin >> arr[i];
    }
}

int main() {
int n;
int arr[1000];
cout << "nhap vao so phan tu trong mang : ";
cin >> n;
nhap(arr,n);

}