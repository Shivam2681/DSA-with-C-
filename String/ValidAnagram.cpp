// #include <bits/stdc++.h> 
// bool isAnagram(string str1, string str2)
// {
//     // int count = 0;
//     // if(str1.length() == str2.length()){
//     //     for(int i=0;i<str1.length();i++){
//     //         for(int j=0;j<str2.length();j++){
//     //             if(str1[i] == str2[j]){
//     //                 count++;
//     //             }
//     //         }
//     //     }
//     // }
//     // if(count == str1.length()){
//     //     return true;
//     // }

//     // sort(str1.begin(),str1.end());
//     // sort(str2.begin(),str2.end());

//     // int i=0,j=0;
//     // while(i < str1.length() && j < str2.length()){
//     //     if(str1[i] != str2[j]){
//     //         return false;
//     //     }
//     //     i++;
//     //     j++;
//     // }
//     // return true;

//     if(str1.length() != str2.length()){
//         return false;
//     }

//     int freq[26] = {0};

//     for(int i=0;i<str1.length();i++){
//         freq[str1[i] - 'a']++;
//     }
//     for(int i=0;i<str2.length();i++){
//         freq[str2[i] - 'a']--;
//     }

//     for(int i=0;i<26;i++){
//         if(freq[i] != 0){
//             return false;
//         }
//     }
//     return true;

// }