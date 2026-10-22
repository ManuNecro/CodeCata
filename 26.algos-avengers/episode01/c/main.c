#include <stdio.h>

int main(int argc, char *argv[]) { // argc nombre d'arguments Argv = les arguments
    for (int i = 1 ; i < argc; i++)
    {
        printf("%s a repondu a l'appel !\n", argv[i]);
    }
    // TODO: pour chaque argument reçu (hors argv[0]), afficher "<nom> a répondu à l'appel !"
    return 0;
}
