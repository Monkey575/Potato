#include <vector>
//根据差分数组还原原数组

std::vector<int> Restore(std::vector<int> diff, std::vector<int> arr)
{
    arr[0] = diff[0];
    for(int i = 1; i < diff.size(); i++)
    {
        arr[i] = arr[i-1] + diff[i];
    }
    return arr;
}