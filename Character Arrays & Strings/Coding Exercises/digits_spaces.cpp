#include <iostream>
using namespace std;

// Given a sentence output  no of alphabets, digits, spaces;

int main()
{
    char sentence[1000];

    cin.getline(sentence, 1000);

    int alphabets = 0;
    int space = 0;
    int digits = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] >= '0' && sentence[i] <= '9')
        {
            digits++;
        }
        else if (sentence[i] >= 'a' && sentence[i] <= 'z' || sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            alphabets++;
        }
        else if (sentence[i] == ' ' || sentence[i] == '\t')
        {
            space++;
        }
    }

    cout<<"Alphabets = "<<alphabets<<endl;
    cout<<"Spaces = "<<space<<endl;
    cout<<"Digits = "<<digits<<endl;

    return 0;
}