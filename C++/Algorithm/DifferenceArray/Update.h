#include <vector>
//���²������
std::vector<int> Update(std::vector<int> diff, int left, int right, int val)
{
    diff[left-1] += val;    //����߽����+����
    if(right < diff.size()) //������������Χ�����ұ߽�,����Ҫ���ұ߽����-����
        diff[right] -= val;   //���ұ߽����-����  
    return diff;
}