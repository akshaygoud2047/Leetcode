class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxwater =  0;
        int i=0;
        int j=n-1;
        while(i<j){

            int width = j-i;

            int heigt = min(height[i],height[j]);
            maxwater = max(maxwater,(width*heigt));
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        
        
        return maxwater;
    }
};