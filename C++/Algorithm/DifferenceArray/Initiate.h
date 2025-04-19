#include <vector>
//初始化差分数组
std::vector<int> Initiate(std::vector<int> arr, int n)
{
    std::vector<int> diff(n);
    diff[0] = arr[0];
    for (int i = 1; i < n ; i++)
    {
        diff[i] = arr[i] - arr[i-1];
    }
    return diff;
}