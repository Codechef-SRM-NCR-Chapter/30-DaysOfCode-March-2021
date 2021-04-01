#include <bits/stdc++.h>
using namespace std;

char *delDuplicate(char inp[], int length)
{

    for (int i = 0; i < length; i++)
    {

        int j;
        for (j = 0; j < i; j++)
            if (inp[i] == inp[j])
                break;
        int start = 0;
        if (j == i)
            inp[start++] = inp[i];
    }

    return inp;
}

int main()
{
    char inp[] = "AABBCCDD";
    int length = sizeof(inp) / sizeof(inp[0]);
    cout << delDuplicate(inp, length);
    return 0;
}
