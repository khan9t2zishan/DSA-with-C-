//Program to find the length of largest subarray with 0 sum
#include <bits/stdc++.h>
using namespace std;
int maxLen(int A[], int N)
{
	int max_len = 0;
	for (int i = 0; i < N; i++) 
    {
		int curr_sum = 0;
		for (int j = i; j < N; j++) 
        {
			curr_sum +=A[j];
			if (curr_sum == 0)
				max_len = max(max_len, j - i + 1);
		}
	}
	return max_len;
}
int main()
{
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;
    int A[N];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<N;i++)
     cin>>A[i];
    cout << "Length of the longest 0 sum subarray is "<< maxLen(A, N);
    return 0;
}
