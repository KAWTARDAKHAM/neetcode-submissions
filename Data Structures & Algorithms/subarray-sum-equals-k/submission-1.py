class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        res = 0
        sum = 0
        prefix_count ={0 : 1}
        for n in nums:
            sum += n
            rest = sum - k
            if(rest in prefix_count):
                res += prefix_count[rest]

            prefix_count[sum] = 1 + prefix_count.get(sum,0)
        
        return res


        