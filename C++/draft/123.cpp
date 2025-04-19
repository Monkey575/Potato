#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> corpFlightBookings(std::vector<std::vector<int>>& bookings, int n) 
    {
        std::vector<int> answer(n);
        std::vector<int> diff(n);
        long long num;

        for (int i = 0 ; i < bookings.size() ; i++)
        {
            if (bookings[i][0] == 1)
                answer[0] += bookings[i][2];
        }
        diff[0] = answer[0];
        
        /*
        for (int i = 0 ; i < n ; i++)
        {
            if (bookings[i][0] == 2)
                diff[1] += bookings[i][2];
        }
        */

        for (int i = 0 ; i < bookings.size() ; i++)
        {
            for (int j = 2 ; j < n ; j++)
                if (bookings[i][0] == j)
                    diff[j-1] += bookings[i][2];
        }

        for (int i = 0 ; i < bookings.size() ; i++)
        {
            if (bookings[i][0] == bookings[i][1])
            {
                num = bookings[i][0];
                diff[num] -= bookings[i][2];
                if (num == 1)
                    diff[num-1] += bookings[i][2];
            }
        }
        answer[0] = diff[0];

        for (int i = 1 ; i < n ; i++)
        {
            answer[i] = answer[i-1] + diff[i];
        }

        return answer;
    }
};

int main()
{
    Solution sol;
    std::vector<std::vector<int>> bookings = {{1,2,10},{2,3,20},{2,5,25}};
    int n = 5;
    std::vector<int> answer = sol.corpFlightBookings(bookings, n);

    for (int i = 0 ; i < n ; i++)
        std::cout << answer[i] << " ";
    std::cout << std::endl;
    
    return 0;
}