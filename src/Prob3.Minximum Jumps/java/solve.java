class Solution{
    static int minJumps(int[] arr){
        int min_jumps = 0, pos = 0, optimal_pos = 0, n = arr.length;
        for(int index = 0; index < n; index++){
            if (arr[index] == 0) return -1;
            optimal_pos = optimal_pos > index + arr[index] ? optimal_pos : index + arr[index];
            if (index + arr[index] >= n - 1) return ++min_jumps;
            if (index == pos){
                pos = optimal_pos;
                min_jumps++;
            }
        }
        if (pos <n- 1) return -1;
        return min_jumps;
    }
}