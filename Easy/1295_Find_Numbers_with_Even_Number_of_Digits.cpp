class Solution {
public:
int findNumbers(vector<int>& nums) {
    int maxCount=0 ;
    for(int x : nums){
        int count =0;
        while(x >0){
        count++;
        x/=10;
        }
         if ((count&1)==0)
        {
        maxCount++;
        }
    }
   
return maxCount;
}
};