#include <iostream>
#include <string>
using namespace std;

string mergeWord(string word1, string word2)
{
    int m = word1.size();
    int n = word2.size();
    cout<<m<<endl;
    cout<<n<<endl;
    int i = 0;
    string word3 = "";
    while(i < m && i < n)
    {
        word3 = word3 + word1[i];
        word3 = word3 + word2[i];
        i++;
    }
    if (m>n)
    {
        word3 = word3 + word1.substr((n),m-n);
    }
    else if (m<n)
    {
        word3 = word3 + word2.substr((m),n-m);
    }
    return word3;
}
int main()
{

    string s = "abc";
    string t = "mny5112";

    cout << mergeWord(s, t) << endl;

    return 0;
}
