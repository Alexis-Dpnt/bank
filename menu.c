#include "utils.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void menu()
{
    int choix;
    system("clear");
    ft_putstr("  _ __ ___   ___ _ __  _   _ \n");
    ft_putstr(" | '_ ` _ \\ / _ \\ '_ \\| | | |\n");
    ft_putstr(" | | | | | |  __/ | | | |_| |\n");
    ft_putstr(" |_| |_| |_|\\___|_| |_|\\__,_|\n");
    ft_putstr("1-ajouter de l'argent a un utilisateur\n");
    ft_putstr("2-enlever de l'argent a un utilisateur\n");
    ft_putstr("3-voir le solde d'un utilisateur\n");
    ft_putstr("4-changer le nom d'un utilisateur\n");
    ft_putstr("5-changer le prenom d'un utilisateur\n");
    ft_putstr("6-supprimer un utilisateur\n");
    ft_putstr("retour a la page de connection");
    choix = 0;
    ft_putstr("votre choix :");
    scanf("%d", &choix);
//     if (choix == 1)
//         t;
//     else if (choix == 2)
//         t;
//     else if (choix == 3)
//         t;
//     else if (choix == 4)
//         t;
//     else if (choix == 5)
//         t;
//     else if (choix == 6)
// }



