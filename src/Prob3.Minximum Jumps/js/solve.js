var max = (a, b) => {
    return a > b? a: b
}

class Solution{
    minJumps(arr, n) {
        let min_jumps = 0, pos = 0, optimal_pos = 0
        for (let i = 0; i < n; i++){
            if (arr[i] == 0) return -1
            optimal_pos = max(optimal_pos, i + arr[i])
            if (i + arr[i] >= n - 1) return ++min_jumps;
            if (i == pos) {
                pos = optimal_pos;
                min_jumps++
            }
        }
        if (pos < n - 1) return -1
        return min_jumps;
    }
}