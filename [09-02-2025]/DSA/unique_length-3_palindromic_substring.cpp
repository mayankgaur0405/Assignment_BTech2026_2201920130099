// class Solution {
//     public:
//         int countPalindromicSubsequence(string s) {
//             int n = s.length() ;
//             unordered_map<char, vector<int>> mp ;
//             int cnt = 0 ;
//             for(int i = 0; i < n; i++) mp[s[i]].push_back(i) ;
//             for(auto& pair : mp){
//                 int sz = pair.second.size() ;
//                 if(sz > 1){
//                     int l = pair.second[0], r = pair.second[sz-1] ;
//                     if(r - l > 1){
//                         vector<bool> v(26, false) ;
//                         for(int i = l+1; i < r; i++){
//                             if(v[s[i] - 'a']) continue ;
//                             cnt++ ;
//                             v[s[i] - 'a'] = true ;
//                         }
//                     }
//                 }
//             }
//             return cnt ;
//         }
//     };