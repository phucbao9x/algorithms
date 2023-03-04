ENGLISH VERSION

# Find minimum of jumps for reach the end of the array.

### Description:

We have an array **arr** of length **n**. Your task is to find the minimum number of hops to jump to the end of the above array arr. Given the maximum value you can jump at a position i is **x = arr[i]** and **the value you will jump is y** then **y <= x**. Knowing that, **the first position is arr[0]**. In particular, if the value is 0 or cannot reach the end, return -1.
Good luck to you.

### Input data:

2 parameters: n and an array that is arr
<br>
n is an integer. It has value between 1 to 10.000.000<br>
0 <= arr[i] <= 1000.000.000

### Maximum time: in 0.5s

### Example:

Input:
<br>
3
<br>
0 1 1
<br>
Out:
<br>
-1
<br>
Because the first value is 0.
<br>
<br>
Input:
<br>
11
<br>
1 3 5 6 12 1 1 1 1 1 0 1
<br>
Output: 3.
<br>
We start at the first element "1". With the maximum number of hops "1", we can jump to the second element "3". From the 2nd element we can jump up to 3 then we will jump to the 5th element which is "12". In the 5th element with 12 jumps we easily jump to the last position.

---

VIETNAMESE VERSION

# Tìm số bước nhảy nhỏ nhất đế tới cuối mảng.

### Mô tả:

Ta có một mảng **arr** có độ dài là **n**. Nhiệm vụ của bạn là tìm số bước nhảy nhỏ nhất để nhảy tới vị trí cuối cùng của mảng arr trên. Với giá trị tối đa mà bạn có thể nhảy tại một vị trí i là **x = arr[i]** và giá trị bạn sẽ nhảy là y thì **y <= x**. Biết rằng, **vị trí đầu tiên là arr[0]**. Đặc biệt, nếu gặp giá trị là 0 hoặc không thể tới vị trí cuối thì trả về -1.
Chúc bạn may mắn không toạch.

### Giá trị đầu vào:

2 tham số: n và một mảng arr
<br>
n là một số tự nhiên. Nó có giá trị giữa 1 đến 10.000.000<br>
0 <= arr[i] <= 100.000.000

### Thời gian tối đa: trong 0.5s

### Ví dụ:

Đầu vào:
<br>
3
<br>
0 1 1
<br>
Đầu ra:
<br>
-1
<br>
Vì phần tử đầu tiên là 0.

<br>
<br>
Đầu vào:
<br>
11
<br>
1 3 5 6 12 1 1 1 1 1 0 1
<br>
Đầu ra: 3.
<br>
Chúng ta bắt đầu ở phần tử đầu tiên là "1". Với số bước nhảy tối đa là "1" ta có thể nhảy đến phần tử thứ 2 là "3". Từ phần tử thứ 2 ta có thể nhảy tối đa là 3 thì ta sẽ nhảy tới phần tử thứ 5 là "12". Ở phần tử thứ 5 với 12 bước nhảy ta dễ dàng nhảy tới vị trí cuối cùng.
