#include <iostream>
#include<stdlib.h>
using namespace std;

void popArray(int arr[], int n, int& m)
{
    cin>>m;
    for(int i=0;i<n;++i)
    {
        arr[i]=rand()%m;
    }

}

float getAvgLarSmaSortedArray(int arr[],int n,int &large,int & small,int *&ptr)
{
    ptr=new int [n];
    float sum=0;
    large=-99999999;
    small=99999999999;
    for(int i=0;i<n;++i)
    {
        sum+=arr[i];
    }
    float avg;
    avg=sum/n*1.0;
        for(int i=0;i<n;++i)
    {
       if(arr[i]>large)
       {
           large=arr[i];
       }
       if(arr[i]<small)
       {
           small=arr[i];
       }
    }
    int temp;

    for(int i=0;i<n;++i)
    {
        ptr[i]=arr[i];
    }
cout<<"Copied arr";
    for(int i=0;i<n;++i)
    {

        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        cout<<ptr[i]<<" ";
    }cout<<endl;

    return avg;
}

int main()
{
    int n;
    cout<<"Array Size"<<endl;
    cin>>n;
    int arr[n];
    int max;
    popArray(arr,n,max);
    cout<<"Arrray Elements within upper limit"<<max<<" are"<<endl;
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float avg;
    int larg, small,*ptr;
    avg=getAvgLarSmaSortedArray(arr,n,larg,small,ptr);
    cout<<"Average is "<<avg<<endl;
    cout<<"Large is "<<larg<<endl;
    cout<<"Small  is "<<small<<endl;
    cout<<"Sorted array is ";
    for(int i=0;i<n;++i)
    {
        cout<<ptr[i]<<" ";
        cout<<endl;
    }

    return 0;
}
