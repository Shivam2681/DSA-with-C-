// class Solution {
// public:
//     string frequencySort(string s) {
//         vector<string>str(s.size()+1,"");

//           unordered_map<char,int>mp;
//           for(auto x:s)
//            mp[x]++;
//         for(auto it : mp)
//         {
//             str[it.second].append(it.second,it.first);
//         }
//         string res="";

//         for(int i=0;i<str.size();i++)
//         {
//             res+=str[i];
//         }
//         reverse(res.begin(),res.end());
//         return res;
//     }
// };