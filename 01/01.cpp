#include <iostream>
#include <string>
using namespace std;

string MergeWord(string str1, string str2)
{
    int i = 0;
    int j = 0;
    int m = str1.size();
    int n = str2.size();
    string word3 = "";

    word3.append(str1,i,1);
    word3.append(str2,i,1);

    return word3;
   
}

int main()
{
    string word1 = "abc";
    string word2 = "123";

    int m= word1.size();
    int n= word2.size();

    cout << m << endl;
    cout << n << endl;

    string word3;
    if(m<=n)
    {
        for(int j=0;j<m;j++)
        {
            word3.append(word1,j,1);
            word3.append(word2,j,1);
        }
    word3.append(word2,n);
    }
    else if(m>n)
    {
        for(int j=0;j<n;j++)
        {
            word3.append(word1,j,1);
            word3.append(word2,j,1);
        }
    word3.append(word1,n);

    }
   cout<<word3<<endl;
//cout<<MergeWord(word1, word2)<<endl;
    return 0;
}