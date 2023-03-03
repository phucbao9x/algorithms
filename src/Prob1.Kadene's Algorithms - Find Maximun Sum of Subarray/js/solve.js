class Solution{
    constructor(arr){
        this.arr = arr;
        this.lenght = arr.lenght;
    }
    largestSumSubArray(){
        let current = 0
        let result = this.arr[0]
        this.arr.forEach((ele)=> {
            if (current < 0) current = 0;
            current += ele;
            result = (current > result) ? current : result;
        })
        return result;
    }
}

input = [-32, -32, 123, -32, 12]
console.log((new Solution(input)).largestSumSubArray())