class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
        int num1 = INT_MIN, num2 = INT_MIN;
        int count1 = 0, count2 = 0;
        for(int num: arr){
            if(count1 == 0 && num != num2){
                count1++;
                num1 = num;
            }
            else if(count2 == 0 && num != num1){
                count2++;
                num2 = num;
            }
            else if(num == num1){
                count1++;
            }
            else if(num == num2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0, count2 = 0;
        for(int num: arr){
            if(num == num1){
                count1++;
            }
            else if(num == num2){
                count2++;
            }
        }
        int p = int(n/3) + 1;
        vector<int>ans;
        if(count1 >= p){
            ans.push_back(num1);
        }
        if(count2 >= p){
            ans.push_back(num2);
        }
        return ans;
    }
};