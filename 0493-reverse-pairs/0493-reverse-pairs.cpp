class Solution {
public:
    void merge(vector<int>&arr, int l, int mid, int r){
        vector<int>temp;
        int i=l, j=mid+1;
        while(i <= mid && j <= r){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
        }
        while(i <= mid){
            temp.push_back(arr[i++]);
        }
        while(j <= r){
            temp.push_back(arr[j++]);
        }
        for(int i=0; i<temp.size(); i++){
            arr[i+l] = temp[i];
        }
    }
    int countReverse(vector<int>&arr, int low, int mid, int high){
        int right = mid+1;
        int count = 0;
        for(int i=low; i<=mid; i++){
            while(right <= high && (long long)arr[i] > 2LL*arr[right]){
                right++;
            }
            count += (right - (mid + 1));
        }
        return count;
    }
    int mergeSort(vector<int>&arr, int l, int r){
        if(l >= r){
            return 0;
        }
        int countRv = 0;
        int mid = l + (r-l)/2;
        countRv += mergeSort(arr, l, mid);
        countRv += mergeSort(arr, mid+1, r);
        countRv += countReverse(arr, l , mid, r);
        merge(arr, l , mid, r);
        return countRv;
    }
    int reversePairs(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        return mergeSort(nums, l, r);
    }
};