#include <iostream>
#include <vector>
#include "Initiate.h"
#include "Update.h"
#include "Restore.h"
int main()
{
    int n;
    std::vector<int> arr = {1, 2, 3, 4, 5};
    n = arr.size();
    std::vector<int> diff(n);
    diff = Initiate(arr, n);
    diff = Update(diff, 1, 3, 10);
    arr = Restore(diff,arr);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}