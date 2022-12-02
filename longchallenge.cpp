#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        bool condition = false;
        cin >> S;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '1' && (S[i + 1] == '1' || S[i + 1] == '0'))
            {
                condition = true;
                cout << "Yes" << endl;
                break;
            }
        }
        if (condition == false)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}