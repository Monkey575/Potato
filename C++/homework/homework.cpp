#include <iostream>
#include <cstring>
using namespace std;

int fun(char *szIn, int nTest);

int main()
{
    int i,j = 0;
    cout << "按1临近变量覆盖，按2为返回值覆盖" << endl;
    cin >> i;

    if ( i == 1)
    {
        char sz_In2[] = "1234567890";
        j = fun(sz_In2,888);
    }
    else if ( i == 2)
    {
        char sz_In3[] = "123456789abcdefghijklemnksjssjdfj";
        i = fun(sz_In3,888);
    }    
    else
    {
        char sz_In1[] = "123";
        j = fun(sz_In1,888);
    }
    return 0;
}

int fun(char *szIn, int nTest)
{
    int a=1,b=2,c=0;
    char szBuf[8];
    memcpy(szBuf,szIn,strlen(szIn));
    c = a+b;
    return c;
}