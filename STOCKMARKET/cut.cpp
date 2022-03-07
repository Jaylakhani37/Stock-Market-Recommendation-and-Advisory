#include <iostream>
using namespace std;
int main()
{
    int t, i, j, stick_len[50];

    cin >> t;

    for (i = 0; i < t; i++)
        cin >> stick_len[i];

    int temp=0;
    for (i = 1; i < t; i++)
    {
        temp = stick_len[i];
        j = i - 1;

        while (j >= 0 && temp >= stick_len[j])
        {
            stick_len[j + 1] = stick_len[j];
            j = j - 1;
        }
        stick_len[j + 1] = temp;
    }

    while (t > 0)
    {
        int len_min = stick_len[t - 1];
        for (int k = t - 1; k >= 0; k--)
        {
            stick_len[k] -= len_min;
        }
        cout << t << endl;
        while (t > 0 && !stick_len[t - 1])
        {
            t--;
        }
    }
    return 0;
}
