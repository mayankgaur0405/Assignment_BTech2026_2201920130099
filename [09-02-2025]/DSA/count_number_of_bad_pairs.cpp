// class Solution {
//     public:
//         long long countBadPairs(vector<int>& nums) {
//             long long n = nums.size() ;
//             unordered_map<int, int> mp ;
//             long long pairs = 0 ;
//             for(int i = 0; i < n; i++) pairs += mp[nums[i] - i]++ ;
//             return (n * (n-1)) / 2 - pairs ;
//         }
//     };