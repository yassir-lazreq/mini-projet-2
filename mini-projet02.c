# include <stdio.h>

int main () {
    int length = 4 ;
    char word[4] = {'g','a','m','e'};
    char hidden[4] = {'_','_','_','_'};
    for (int i = 0; i < length ; i++)
    {
        printf("%c ", hidden[i]);
    }
    printf("it's somthing you like \n");
    printf("veuillez entre votre caracter\n");
    const int max_attempts = 5;
    int attempts = 0;
    int count = 0 ;
    int taille = 0 ;
    for (int i = 0; i < 10 ; i++)
    {
        char lettre;
        scanf("%c",&lettre);
        for (int j = 0; j < length; j++)
        {
            if (lettre == word[j])
            {
                hidden[j] = lettre;
                taille++;
                i--;
                count = 1;
                if (taille == length)
                {
                    printf("vous avez gagne\n");
                    return 0 ;
                }
                for (int k = 0; k < length ; k++)
                {
                    printf("%c ", hidden[k]);
                }
                printf("c'est juste\n");
                break ;
            }
        }
        if (count == 1)
        {
            attempts++;
            printf("c'est faux il vous reste %d tentatives\n", max_attempts - attempts);
        }
        printf("veuillez entre votre caracter \n");
        count = 0;
    }
    return 0 ;
}