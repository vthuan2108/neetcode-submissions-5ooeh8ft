class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # tạo hashmap lưu value: index
        mp={}
        for i,x in enumerate(nums):
            doiso=target-x
            if doiso in mp:
                return [mp[doiso], i] 
            mp[x] = i