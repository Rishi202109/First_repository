#include <iostream>
#include <map> 
#include <fstream> 
#include <string> 
using namespace std;
template <class KTy, class Ty>
void PrintMap(map<KTy, Ty> map)
{
    typedef std::map<KTy, Ty>::iterator iterator;
    for (iterator p = map.begin(); p != map.end(); p++)
        cout << p->first << ": " << p->second << endl;
}

int main(void)
{
    static const char* fileName = "C:\\MyFile.txt";

  
    map<string, unsigned int> wordsCount;


    {
        ifstream fileStream(fileName);

        if (fileStream.is_open())
            while (fileStream.good())
            {
               
                string word;
                fileStream >> word;

                
                if (wordsCount.find(word) == wordsCount.end()) // Then we've encountered the word for a first time.
                    wordsCount[word] = 1; // Initialize it to 1.
                else // Then we've already seen it before..
                    wordsCount[word]++; // Just increment it.
            }
        else  
        {
            cerr << "Couldn't open the file." << endl;
            return EXIT_FAILURE;
        }

        
        PrintMap(wordsCount);
    }

    return EXIT_SUCCESS;
}
