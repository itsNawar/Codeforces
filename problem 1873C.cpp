#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        char arr[10][10];
        int sum = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    int layer = min({i, j, 9 - i, 9 - j});
                    sum =sum+ (layer + 1);
                }
            }
        }

        cout << sum << endl;
    }
}
