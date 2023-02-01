// write a program to print repeat and print missing number in an array
// Input 3,1,2,5,3
// Output repeat number -3
// Missing -4                      
#include<iostream>
using namespace std;
int main()
 {
    int i,m,n;
     cout<<"Enter the size of the array:"<<endl;
     cin>>m;
    int A[m];
     cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<m;i++)
     cin>>A[i];
    cout<<"Array:"<<endl;
    for(i=0;i<m;i++)
     cout<<A[i]<<" ";
    cout<<"\nRepeated: ";
    for(i=0;i<m;i++)
    {
      for(int j=i+1;j<m;j++)
      {
        if(A[i]==A[j])
       {
       cout<<A[i]<<" ";
       } 
      }
    }
    cout<<"\nMissing: ";
    n = m+1;
    int total = n*(n + 1)/2;
    int sum = 0;
    for (int i = 0; i < m; i++) 
    {
        sum=sum+A[i];
    }
    //return total - sum;
    cout<<total-sum;
    return 0;
}