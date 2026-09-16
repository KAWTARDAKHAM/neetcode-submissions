class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result =[]
        nums.sort()
        for i in range(len(nums)- 2):
            target = -nums[i]
            right = i+1
            left = len(nums) - 1
            while(right < left ):
                sum = nums[ right ] + nums[left]
                if(sum > target):
                    left -= 1
                elif( sum < target ):
                    right += 1
                else :
                    result.append([nums[i],nums[right] , nums[left]])
                    right += 1
                    left -= 1
        
        r = [list(x) for x in dict.fromkeys(map(tuple, result))]
        return r

                
            

        