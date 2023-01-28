//Program to find all elements that appear more than ⌊ n/3 ⌋ times, Given an integer array of size n .
#include <bits/stdc++.h>

using namespace std;

vector < int > majorityElement(int arr[], int n) {
  vector < int > ans;
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] == arr[i])
        cnt++;
    }

    if (cnt > (n / 3)) 
      ans.push_back(arr[i]);
  }

  return ans;
}

int main() {
  int n,arr[]={3,1,3,4,15,3,2,2,3};
  vector<int> majority;
  majority = majorityElement(arr, 5);
  cout << "The majority element is" << endl;
  set < int > s(majority.begin(), majority.end());
  for (auto it: s) {
    cout << it << " ";
  }
}