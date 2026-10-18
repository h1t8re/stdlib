typedef struct chaine_of_character
{
        char c;
        chars chaine_of_characters;
}chars;

void *calloc(int n)
{
        int i = 0;
        chars *characters;
        beginning_of_the_chaine_of_characters = characters;
        while(i < n)
        {
                characters->c = 0 + '0';
                characters = characters->chaine_of_charactera;
                i++;
        }
        charaters->c = '\0';
        i = 0;
        return beginning_of_the_chaine_of_characters;
}
