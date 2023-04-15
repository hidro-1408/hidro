#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
float avg(int arr[], int n)
{
    float sum = 0;
    float count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 != 0  )
        {
            sum = sum +arr[i];
            count++;
        }
        if (count == 0)
        {
            int tmp = 1;
        } 
    }
    return float(sum/count);
}

void bubblesort(int *a, int *b)
{
    int tmp;
    if (*a < *b)
    {
        tmp = *a;
        *a=*b;
        *b=tmp;
    }
    
    
}
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n -1 ; j >= 0; j--)
        {
            if (arr[j]<arr[j+1])
        {
            bubblesort(&arr[j],&arr[j+1]);
        }
        }
        
        
        
    }
    
}

int main()
{
    int n;
    cout<<"nhap so luong phan tu mang: ";
    cin>>n;
    int arr[n];
    cout<<"nhap phan tu mang: ";
    input(arr,n);
    cout<<"\ncac phan tu sau khi nhap: ";
    output(arr,n);
    cout<<"\ntrung binh cong phan tu le: "<<avg(arr,n);
    cout<<"\nmảng chưa sắp xếp: ";
    output(arr,n);
    cout<<"\nmang sau khi sap xep giam dan: ";
    sort(arr,n);
    output(arr,n);
    return 0;
}