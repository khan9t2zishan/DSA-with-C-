// Rotate an n x n 2D matrix representing an image, rotate the image by 90 degrees
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
#define n 3


void rotate90Clockwise(int a[n][n])
{
   
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++)
         {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}
void printMatrix(int arr[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}
int main()
{
    int arr[n][n],i,j;
    //printf("Enter the size of the square matrix: ");
    //scanf("%d",&n);
    printf("Enter the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
    rotate90Clockwise(arr);
    printf("Rotated matrix:\n");
    printMatrix(arr);
    return 0;
}


