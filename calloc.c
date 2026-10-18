typedef struct chain_of_characters
{
        char c;
        chars *next;
}chars;

void *calloc(int n)
{
        int i = 0;
        chars *character;
        beginning_of_the_chain_of_characters = character;
        while(i < n)
        {
                character->c = 0 + '0';
                character = character->next;
                i++;
        }
        charater->c = '\0';
        i = 0;
        return beginning_of_the_chain_of_characters;
}
