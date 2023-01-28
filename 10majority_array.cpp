//Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
// Function to find the majority element present in a given array
int findMajorityElement(vector<int> const &nums)
{
    // create an empty map
    unordered_map<int, int> map;
 
    // get input size
    int n = nums.size();
 
    // 1. Store each element's frequency in a map
    for (int i = 0; i < n; i++) {
        map[nums[i]]++;
    }
 
    // 2. Return the element if its count is more than `n/2`
    for (auto pair: map)
    {
        if (pair.second > n/2) {
            return pair.first;
        }
    }
 
    // Note that we can merge steps 2 and 3 into one
    /* for (int i = 0; i < n; i++)
    {
        if (++map[nums[i]] > n/2) {
            return nums[i];
        }
    } */
 
    // return -1 if no majority element is present
    return -1;
}
 
int main()
{
    vector<int> input = {7,8,7,5,5,7,1,5,5,7,7,7,7};
 
    int result = findMajorityElement(input);
    if (result != -1) {
        cout << "The majority element is " << result;
    }
    else {
        cout << "The majority element doesn't exist";
    }
 
    return 0;
}
