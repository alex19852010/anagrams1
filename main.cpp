#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check(string word_1, string word_2)
{
    map <char, int> charcount;
    int n = 0;
    int number = 1;
    auto it = charcount.find(word_1[n]);
    
    if(word_1.length() != word_2.length())
      {
        return 0;

      }
     

      for( n = 0; n < word_1.length(); n ++)
        {
          it = charcount.find(word_1[n]);
          
          if(it == charcount.end())
            {
              charcount.insert(pair <char, int>(word_1[n], number));
            }
          
            else
              {
              it->second ++;

              }
         
         }

         for(n = 0; n < word_2.length(); n ++)
          {
             it = charcount.find(word_2[n]);
              if(it == charcount.end())
                {
                 return 0;
                }
                else
                  {
                    int a = it->second;

                    if(a > 1)
                     {
                      it->second --;
                     }
                      else
                      {
                        charcount.erase(word_2[n]);
                      }

                  }                
            }

            if(charcount.empty())
            {
              return 1;
            }

           

      

  return 0;
}

int main() {
    string word_1 = "lekarstvo";
    string word_2 = "steklovar";
    
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