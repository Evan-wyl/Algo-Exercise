#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr[m + n];
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < m && j < n)
        {
            if(nums1[i] < nums2[j]){
                arr[k++] = nums1[i++];
            }else{
                arr[k++] = nums2[j++];
            }
        }
        while (i < m)
        {
            arr[k++] = nums1[i++];
        }
        for(int l = 0; l < m + n; l++){
            nums1[l] = arr[l];
        }

        while (j < n)
        {
            nums1[k++] = nums2[j++];
        }
    }
};
