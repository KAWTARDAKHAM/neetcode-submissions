class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(len(prices)-1):
            sell = i +1 
            while(sell < len(prices)):
                currprofit = prices [sell ]- prices[ i]
                profit = max(currprofit if currprofit > 0 else 0 , profit)
                sell += 1
        
        return profit



    

        