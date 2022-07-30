#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("Rishi");
    if(!file.is_open()) return 1;
    map<string, int> categories;
    while(file.good())
    {
        string s;
        getline(file, s);
        int pos = s.find_first_of(' ');
        if(pos < 0) continue;
        while(s.size() > 0)
        {
            pos = s.find_first_of(' ');
            if(pos < 0)
                pos = s.size();
            string word = s.substr(0, pos);
            if(word != "")
                categories[word]++;
            s = s.erase(0, pos+1);
        }
    }
    for(map<string, int>::iterator wit = categories.begin(); wit != categories.end(); ++wit)
        cout << "word: " << wit->first << "\t" << wit->second << endl;
    return 0;
}
