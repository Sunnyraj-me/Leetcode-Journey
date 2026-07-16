class Solution {
public:
int pivotIndex(vector<int>& nums) {
int n = nums.size();
int leftSum = 0;
int totalSum =0;
for(int i=0; i<n; i++){
  totalSum +=nums[i]; 
}
for(int j=0; j<n; j++){
int rightSum = totalSum - leftSum - nums[j];
if(leftSum == rightSum){
  return j;
}else{
  leftSum+=nums[j];
}
}
return -1;
}
};