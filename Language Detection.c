#include <stdio.h>
#include <string.h> 

int main() {
    char s[20]; 
    int T = 0;
    
    while (scanf("%s", s) == 1 && strcmp(s, "#") != 0) {
        printf("Case %d: ", ++T);
        
        if (strcmp(s, "HELLO") == 0)        printf("ENGLISH\n");
        else if (strcmp(s, "HOLA") == 0)         printf("SPANISH\n");
        else if (strcmp(s, "HALLO") == 0)        printf("GERMAN\n");
        else if (strcmp(s, "BONJOUR") == 0)      printf("FRENCH\n");
        else if (strcmp(s, "CIAO") == 0)         printf("ITALIAN\n");
        else if (strcmp(s, "ZDRAVSTVUJTE") == 0) printf("RUSSIAN\n");
        else                                     printf("UNKNOWN\n");
    }
    
    return 0;
}