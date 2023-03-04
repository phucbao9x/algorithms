function max (a, b){
    return a > b? a: b
}

function min(a, b){
    return a < b ? a: b
}

var findMaximumProductSubarray = (arr) => {
    let max_ = arr[0]
    let min_ = arr[0]
    let result = arr[0]
    let tmp_max = 0
    arr.forEach((ele, index) => {
        if (index === 0) return
        tmp_max = max(max(ele, ele * max_), ele * min_)
        min_ = min(min(ele, ele* max_), ele * min_)
        max_ = tmp_max
        result = max(result, max_)
    });
    return result
}

console.log(findMaximumProductSubarray([0, 1, 2, -20, -12, 0, 0]))