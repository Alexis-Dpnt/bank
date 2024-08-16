#include "utils.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int ft_strcmp(char *str1, char *str2)
{
    int min;
    int max;
    int i;
    if (ft_strlen(str1) > ft_strlen(str2))
        max = ft_strlen(str1);
    else if (ft_strlen(str1) < ft_strlen(str2))
        max = ft_strlen(str2);
    else if (ft_strlen(str1) == ft_strlen(str2))
        max = ft_strlen(str1);
    i = 0;
    while (i < max)
    {
        if (str1[i] == str2[i])
            i++;
        else
            return (0);
    }
    return (1);
}

void sign_in()
{
    char prenom[10];
    char name[10];
    char mdp[50];
    char mdp1[50];
    int nbr;
    system("clear");
    ft_putstr("   _____ _                _       \n");
    ft_putstr("  / ____(_)              (_)      \n");
    ft_putstr(" | (___  _  __ _ _ __     _ _ __  \n");
    ft_putstr("  \\___ \\| |/ _` | '_ \\   | | '_ \\ \n");
    ft_putstr("  ____) | | (_| | | | |  | | | | |\n");
    ft_putstr(" |_____/|_|\\__, |_| |_|  |_|_| |_|\n");
    ft_putstr("            __/ |                 \n");
    ft_putstr("           |___/                  \n");
    ft_putstr("Quel est ton prénom ? ");
    scanf("%9s", prenom);
    ft_putstr("Quel est ton nom ? ");
    scanf("%9s", name);
    ft_putstr("definit ton mot de passe ");
    scanf("%s", mdp);
    ft_putstr("entre le meme mot de passe ");
    scanf("%9s", mdp1);
    while (ft_strcmp(mdp1, mdp) != 1)
    {
        ft_putstr("les mots de passes sont differents.\n");
        ft_putstr("definit ton mot de passe ");
        scanf("%s", mdp);
        ft_putstr("entre le meme mot de passe ");
        scanf("%9s", mdp1);
    }
    int o_list_data = open("./data/list.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (o_list_data == -1)
    {
        ft_putstr("L'ouverture du fichier a échoué.\n");
        return;
    }
    nbr = 1000;
    if (write(o_list_data, prenom, ft_strlen(prenom)) == -1 ||
        write(o_list_data, "\t", 1) == -1 ||
        write(o_list_data, name, ft_strlen(name)) == -1 ||
        write(o_list_data, "\t", 1) == -1 ||
        write(o_list_data, "1000$", 5) == -1 ||
        write(o_list_data, "\t", 1) == -1 ||
        write(o_list_data, mdp, ft_strlen(mdp)) == -1 ||
        write(o_list_data, "\n", 1) == -1)
    {
        ft_putstr("Erreur d'écriture dans le fichier.\n");
        close(o_list_data);
        return;
    }
    close(o_list_data);
    login();
}
