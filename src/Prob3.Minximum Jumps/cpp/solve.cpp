#include <iostream>
using namespace std;

int minOfJumps(int *arr, int n)
{
    int min_jumps = 0, optimal_pos = 0, pos = 0;
    for (int now_pos = 0; now_pos < n; now_pos++)
    {
        if (arr[now_pos] == 0)
            return -1;
        optimal_pos = optimal_pos > (now_pos + arr[now_pos]) ? optimal_pos : (now_pos + arr[now_pos]);
        if (optimal_pos >= n - 1)
        {
            return ++min_jumps;
        }
        if (now_pos == pos)
        {
            pos = optimal_pos;
            min_jumps++;
        }
    }
    if (pos < n - 1)
        return -1;
    return min_jumps;
}

int main(void)
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int index = 0; index < n; index++)
        cin >> arr[index];

    return 0;
}