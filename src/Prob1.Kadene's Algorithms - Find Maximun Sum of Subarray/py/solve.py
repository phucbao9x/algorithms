class Solution(object):
    def lagestSumSubArray(self, arr):
        result = arr[0]
        curr = 0
        for item in arr:
            if curr < 0:
                curr = 0
            curr += item
            result = curr if curr > result else result
        return result

data = input(">>")
data = data.replace(" ", '')
dataslist = data.split(',')
dataslist = [int(item) for item in dataslist]
print(Solution().lagestSumSubArray(dataslist))


# Using command: >> "python solve.py" to running it