class Solution {
public:
int maxProfit(vector<int>& price) {
int minimumPrice=INT_MAX;
int maximumProfit=0;
for (int x: price){
    minimumPrice=min(x,minimumPrice);
    int todayProfit=x-minimumPrice;
    maximumProfit=max(maximumProfit,todayProfit);
}
return maximumProfit;
}
};