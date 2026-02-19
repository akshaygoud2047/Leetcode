class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target[i]){
                continue;
            }
            else{
                s.insert(nums[i]);
            }
        }
        return s.size();
    }
};


// class Solution {
// public:
//     int minOperations(vector<int>& nums, vector<int>& target) {
//         int n = nums.size();
//         map<int,vector<int>>hash;
//         for(int i=0;i<n;i++){
//             hash[nums[i]].push_back(i);
//         }
//         int operations=0;
//         map<int,int>hash1;
//         for(int j=0;j<n;j++){
//             int ele = nums[j];
//             bool exists = (hash1.find(ele)!= hash1.end());
//             if(!exists){
//                 if(nums[j] == target[j]){
//                     continue;
//                 }
//             else{
//             //int ele = nums[j];
//                 if(hash.find(ele)!=hash.end()){
//                     //int m = hash[nums[j]].size();
//                     operations+=1;
//                     hash1[j] = nums[j];
//                 }
//             }
//             }
//         }
//         return operations;
        
//         for(int i=0;i<n;i++){
//             int ele = nums[i];
//             //map<int,int>hash;
            
//             if(nums[i]!=target[j]){
//                 count++;
//             }
//         }
//     }
// };