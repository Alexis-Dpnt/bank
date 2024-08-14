#include "utils.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void sign_in()
{
    char prenom[10];
    char name[10];
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
    //ajout mot de passe
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
        write(o_list_data, "\n", 1) == -1) //ajout mot de passe
    {
        ft_putstr("Erreur d'écriture dans le fichier.\n");
        close(o_list_data);
        return;
    }
    close(o_list_data);
}
