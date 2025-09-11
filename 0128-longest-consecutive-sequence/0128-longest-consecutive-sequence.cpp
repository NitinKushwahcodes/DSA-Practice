class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
      if(arr.size() == 0) return 0;
      unordered_set<int>st;
      int max_len = INT_MIN;
      for(int num: arr){
          st.insert(num);
      }
      for(auto it: st){
          if(st.find(it-1) == st.end()){
              int len = 1;
              int nex = it+1;
              while(st.find(nex) != st.end()){
                  len++;
                  nex++;
              }
              max_len = max(max_len, len);
          }
      }
      return max_len;
    }
};