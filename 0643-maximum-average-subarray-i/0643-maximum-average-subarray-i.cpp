class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0 , maxsum = 0 ;
        for(int i = 0 ; i< k;i++){
            sum+= nums[i];
            maxsum +=nums[i];
        }
        for(int j = k , i=0 ; j<nums.size();i++,j++){
            sum -= nums[i];
            sum += nums[j];
            maxsum= max(sum , maxsum);
        }
        return maxsum/k;
    }
};