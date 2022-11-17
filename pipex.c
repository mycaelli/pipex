#include "pipex.h"

// COMO USAR FORK
int main()
{   
    int id = fork();
    if (id == 0)
    {
        ft_printf("Hello world from id %d\n", id);
    } else {
        waitpid(id, NULL, 0);
        ft_printf("Hellor from parent process %d\n", id);
    }
    return 0;
    
}

/*
// COMO USAR O EXECVE
int main()
{
    //
    path
        pegar os comandos por cmd
        adicionar o diretorio os comandos devem ser buscados (/usr/bin/)
    
    argv
        passa o comando argv[1]
        passa o comando argv[2]
    
    env
        NULL
    //

    char cmd[] = "/usr/bin/ls";

    char * argvec[] = {"ls", NULL};
    char ** envvec = {NULL};

    if (execve(cmd, argvec, envvec) == -1)
    {
        perror("Could not execute execve");
    }
    ft_printf("something is wrong\n");
   
}
*/
