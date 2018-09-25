#include <iostream>

using namespace std;
int suma(int arr[ ],int t){
    long suma=0;
    for (int i=0;i<t;i++){
    suma=suma+i;
    }
    return suma;

}
int menor(int arr[ ],int n){
    int menor=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]< menor){
        menor=arr[i];
        }

    }
    return menor;
}
int perfecto(int arr[ ],int n){
    int i,suma=0;
    for(i=1;i<n;i++){
        if(n%i==0){
        suma=suma+i;}
    }
    if (n==suma)
    return suma;
    else
    return 0;
}
int contperf(int arr[ ],int a)

int main()
{
    int a[4]={1,2,3,4};
    int b[5]={2,8,69,45,8};
    int c[7]={6,12,15,28};
    cout <<"La suma de los elementos es :" << suma(a,5)<< endl;
    cout <<"El menor elemento es : " << menor(b,6)<< endl;

    return 0;
}
