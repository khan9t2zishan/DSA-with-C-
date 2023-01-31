//program to print reverse of an array
#include<iostream>
using namespace std;
int main()
{  
    int m;
     cout<<"Enter the size of the array:"<<endl;
     cin>>m;
    int A[m];
     cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<m;i++)
     cin>>A[i];
     cout<<"Original Array:"<<endl;
    for(int i=0;i<m;i++)
     cout<<A[i]<<" ";
     cout<<endl<<"Reversed Array:"<<endl;
    for(int i=m-1; i>=0; i--)
     cout<<A[i]<<" ";
    return 0;
}