#include <vector>
//更新差分数组
std::vector<int> Update(std::vector<int> diff, int left, int right, int val)
{
    diff[left-1] += val;    //对左边界进行+操作
    if(right < diff.size()) //如果区间操作范围涵盖右边界,则不需要对右边界进行-操作
        diff[right] -= val;   //对右边界进行-操作  
    return diff;
}