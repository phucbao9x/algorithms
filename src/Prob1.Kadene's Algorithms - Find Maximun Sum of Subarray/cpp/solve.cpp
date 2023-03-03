#include <iostream>
using namespace std;

class Solution{
    public:
    int largestMaxSumSubArray(int * arr, int N){
        if (N == 0) return 0;
        else if (N == 1) return arr[0];
        int result = arr[0];
        int crr = 0;
        for (int _ = 0; _ < N; _++){
            if (crr < 0) crr =0;
            crr += arr[_];
            result = crr > result ? crr : result;
        }
        return result;
    }
};

int main(void){
    int N;
    cout << ">>";
    cin >> N;
    cout << "Input the array";
    int * arr = new int[N];
    for (int _ = 0; _ < N; _++){
        cout << "Element " << _ << ": ";
        cin >> arr[_];
    }
    Solution sol;
    cout << "result: " << sol.largestMaxSumSubArray(arr, N) << endl;
    return 0;
}

// Run commandline for built: g++ solve.cpp -o solveWithCpp.o
// Run command for running it: solveWithCpp.o