class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = 0
        sell = 1
        profit = 0
        while(sell < len(prices)):
            currprofit = prices[sell] - prices[buy]
            if(currprofit > 0):
                profit = max(currprofit , profit)
                sell += 1
            else:
                buy += 1
                sell = buy + 1
        
        return profit

        