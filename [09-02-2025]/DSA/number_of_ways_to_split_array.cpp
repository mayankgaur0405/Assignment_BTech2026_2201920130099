// class Solution {
//     public:
//         int waysToSplitArray(vector<int>& nums) {
//             int n = nums.size() ;
//             long long sum = accumulate(nums.begin(), nums.end(), 0LL) , curr = 0 ;
//             int cnt = 0 ;
//             for(int i = 0; i < n-1; i++){
//                 curr += nums[i] ;
//                 sum -= nums[i] ;
//                 if(curr >= sum) cnt++ ;
//             }
//             return cnt ;
//         }
//     };