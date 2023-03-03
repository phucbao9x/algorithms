class Solution:
    def MaximumProductSubarray(self, arr):
        max_ = 1
        min_ = 1
        far_ = 1
        for i in arr:
            max_, min_ = max(max(i, i * max_), i * min_), min(min(i, i * max_), i * min_)
            far_ = max(max_, far_)
        return far_