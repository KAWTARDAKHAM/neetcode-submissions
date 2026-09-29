class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(int)
        for n in nums :
            count[n] += 1  
        arr =[ [freq , c] for c, freq in count.items()]
        arr.sort(key = lambda x : -x[0])
        Result = []
        for i in range(k):
            Result.append(arr[i][1])
        return Result

        