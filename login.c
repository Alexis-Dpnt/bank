#include "utils.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int line_count()
{
    char c;
    int count;
    int Wcount = open("./data/list.txt", O_RDONLY);
    count = 0;
    while (read(Wcount, &c, 1))
    {
        if (c == '\n')
            count++;
    }
    close (Wcount);
    return (count);
}

void get_passWord(int file)
{
    int i;
    int tab;
    char c;
    i = 0;
    tab = 0;
    while (i != line())
    {
        while (tab != 3)
        {
            read(file, &c, 1);
            if (c = '\t')
                tab++; //position du dernier tab pour recuperer la chaine de caracter qui se trouve apres
        }
        i++;
    }
}

void login()
{
    system("clear");
    ft_putstr("  _                    _       \n");
    ft_putstr(" | |                  (_)      \n");
    ft_putstr(" | |     ___   __ _    _ _ __  \n");
    ft_putstr(" | |    / _ \\ / _` |  | | '_ \\ \n");
    ft_putstr(" | |___| (_) | (_| |  | | | | |\n");
    ft_putstr(" |______\\___/ \\__, |  |_|_| |_|\n");
    ft_putstr("               __/ |          \n");
    ft_putstr("              |___/           \n");
    char identifiant[15];
    char c;
    ft_putstr("entrez votre identifiant :");
    scanf("%14s", identifiant);
    int o_verif_id = open("./data/list.txt", O_RDONLY);
    if (o_verif_id == -1)
    {
        write(1, "erreur lors de l'ouverture du fichier", 1);
        return ;
    }
    while (read(o_verif_id, &c, ft_strlen(identifiant)) > 0)
    {
        //utiliser strcmp entre la chaine et l'entree de l'utilisateur 
    }
    close(o_verif_id);
}
