class Solution:
    def minximumJumps(self, arr, n):
        max_ = jumps = halt = 0
        for i in range(n):
            if arr[i] == 0: return -1
            max_ = max(max_, i + arr[i])
            if i + arr[i] > n - 1: return (jumps + 1)
            if i == halt:
                halt = max_
                jumps += 1
        if halt < n - 1: return -1
        return jumps
    
a = [1,3,7,1,6,1,1,1,1,1,9], [1,3,5,8,9,2,6,7,6,8,9]
for _a in a:
    print(Solution().minximumJumps(_a, len(_a)))