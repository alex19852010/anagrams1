#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check(string word_1, string word_2)
{
    if(word_1.length() != word_2.length())
    {
        return 0;
    }
    int a = 0;

    for(int i = 0; i < word_1.length(); i ++)
      {
        for(int n = 0; n < word_2.length(); n ++)
        {
            if(word_1[i] == word_2[n])
            {
                a = 1;
            }
           
        }
        if(a == 0)
        {
          return 0;
        }

        a = 0;

      }

  return 1;
}

int main() {
    string word_1 = "лекарство";
    string word_2 = "стекловар";

    bool result = check(word_1, word_2);

    if(result){
        cout << "is an anagram";
    }
    else
    {
        
         cout << "is not an anagram";

    }


    return 0;

}