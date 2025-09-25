#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int number;
    scanf("%d", &number);
    getchar();

    int counts[26] = {0};
    char line[10005];

    for(int i = 0 ; i < number ; i++)
    {
        if(!fgets(line , sizeof(line) , stdin)) break;

        line[strcspn(line ,"\n")] = '\0';

        for(int j = 0 ; line[j] != '\0' ; j++)
        {
            unsigned char ch =  (unsigned char)line[j];
            if(isalpha(ch))
            {
                ch = (unsigned char)toupper(ch);
                counts[ch - 'A']++;
            }
        }
    }

    char letters[26];
    for(int i = 0 ; i < 26 ; i++)
    {
        letters[i] = 'A' + i;
    }

    for(int i = 0 ; i < 26 ; i++)
    {
        for(int j = i + 1 ; j < 26 ; j++)
        {
            if (counts[i] < counts[j] || (counts[i] == counts[j] && letters[i] > letters[j])) 
            {
            // 1. 次數小於 j → 交換
            // 2. 次數相同但字母大 → 交換
            // 交換 counts
            int tmpCount = counts[i];
            counts[i] = counts[j];
            counts[j] = tmpCount;

            // 交換 letters
            char tmpLetter = letters[i];
            letters[i] = letters[j];
            letters[j] = tmpLetter;
            }
        }
    }

    for(int i = 0 ; i < 26 ; i++)
    {
        if(counts[i] > 0)
        {
            printf("%c %d\n", letters[i], counts[i]);
        }
    }
}