class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = 0
        sell = 1
        profit = 0
        while(sell < len(prices)):
            currprofit = prices[sell] - prices[buy]
            if(currprofit > 0):
                profit = max(currprofit , profit)
                
            else:
                buy = sell
            
            sell += 1
        
        return profit

        