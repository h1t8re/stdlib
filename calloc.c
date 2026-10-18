typedef struct chain_of_characters
{
        char c;
        chars *next;
}chars;

void *calloc(int n)
{
        int i = 0;
        chars *character;
        chars *tnp = character;
        while(i < n)
        {
                character->c = 0 + '0';
                character = character->next;
                i++;
        }
        charater->c = '\0';
	character = tmp;
        i = 0;
        return character;
}

void *calloc_0(int n)
{
        int i = 0;
        chars *character;
        chars *tnp = character;
        for(int i = 0; i < n; i++)
        {
                character->c = 0 + '0';
                character = character->next;
        }
	charater->c = '\0';
        character = tmp;
	return character;
}
