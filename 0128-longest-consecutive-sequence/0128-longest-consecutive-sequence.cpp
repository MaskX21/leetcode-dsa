
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st;

       for(int num : nums){
        st.insert(num);
       }

       int longest = 0;
       for(int num : st){
        if(st.find(num - 1) == st.end()){
            int cnt = 1;
            int x = num;

            while(st.find(x+1) != st.end()){
                cnt++;
                x++;
            }
            longest = max(longest,cnt);
        }
       }
       return longest;
    }
};