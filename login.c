#include "utils.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
    int o_verif_id = open("./data/list.txt");
    while (read(o_verif_id, c, ft_strlen(identifiant)) != identifiant)
    {
        //gerer les lignes et les tab pourr recuperer le prenom et le mot de passe
    }
}







 
