class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        result = sum = 0
        for i in range(len(nums)):
            if(nums[i] == 1):
                sum +=1
            else:
                result = max(result , sum)
                sum = 0
        
        return max(result, sum)
            

        