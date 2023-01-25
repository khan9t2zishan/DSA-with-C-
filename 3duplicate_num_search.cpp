//find the duplicate of an array of n+1 integers
#include<iostream>
#include<conio.h>
int main()
 {
  int i,arr[20],j,no;
   std::cout<<"Enter Size of array: ";
   std::cin>>no;
   std::cout<<"Enter any "<<no<<" num in array: ";
  for(i=0;i<no;i++)
  {
    std::cin>>arr[i];
  }
   std::cout<<"Dublicate Values are: ";
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
     std::cout<<"\n"<<arr[i];
    }
   }
   }
   return 0;
 }