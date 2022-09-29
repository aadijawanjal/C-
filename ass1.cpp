#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, vcon = 0, ccon = 0;
    cout << "Enter a line" << endl;
    getline(cin, str);

    for (i = 0; i <= str.length(); i++)
    {
        if (str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
        {
            vcon++;
            continue;
        }
        else if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
        {

            ccon++;
        }
    }
    cout << "Vowels count: " << vcon << endl
         << "Consonants count: " << ccon;

    return 0;
}