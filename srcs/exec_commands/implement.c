#include "../../includes/minishell.h"

char **implement(char **args, char **env, int imp)
{
   if (imp == 1) 
        echo(args);
    else if (imp == 2)
        cd(args);
    else if (imp == 3)
        pwd();
    else if (imp == 4)
        env = export(args, env);
    else if (imp == 5)
        env = unset(args, env);
    else if (imp == 6)
        envp(env);
    else 
        my_exit(args, env);
    return (env);
}