class Solution:
    def MaximumProductSubarray(self, arr):
        max_, min_, far_ = [arr[0]]*3
        for i in arr[1:]: 
            max_, min_= max(max(i, i * max_), i * min_), min(min(i, i * max_), i * min_)
            far_ = max(max_, far_)
        return far_
print(Solution().MaximumProductSubarray([0, 0, -12, 0, 0, -2, 0]))