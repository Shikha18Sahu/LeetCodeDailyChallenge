class Solution {
public:
 int m = 1e9+7; 
    int countPermutations(vector<int>& complexity) {
       int n = complexity.size(); 
       long long result = 1; 
       for(int i =1; i<n; i++){
        if(complexity[i]<= complexity[0])
        return 0; 
        result = (result*i) % m; 
       }
        return result; 
    }
};
