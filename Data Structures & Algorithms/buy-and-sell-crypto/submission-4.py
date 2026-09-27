class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxP = 0
        miBuy = prices [0]

        for sell in prices :
            maxP = max(maxP , sell - miBuy)
            miBuy = min(miBuy , sell)
        return maxP
        