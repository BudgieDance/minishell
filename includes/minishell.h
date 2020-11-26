#ifndef MINISHELL 
# define MINISHELL 
# include <unistd.h>
# include <errno.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h> //delete later

# include <fcntl.h>
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/libft.h"

typedef struct	s_args
{
	char	**args;
	char	**env;
	char	*red_file;
	char	*inp_file;
	int		write_append;
	int		out_pipe_red;
	int		orig_imp;
	int		temp_fd_0;
	int		temp_fd_1;
}               t_args;

/*
**BUILTIN IMPLEMENTATIONS
*/
void	cd(char **args);
void	echo(char **args);
void	envp(char **env);
void	my_exit(char **arg, char **env);
char	**export(char **args, char **env);
int		find_doub_array_len(char **env);
int		check_args_export(char *arg);
int		keylen(char *key);
void	pwd();
char	**unset(char **args, char **env);

void    free_arrah(char **env);
char    **convert_array(char **args);

/*
**EXEC COMMANDS
*/
void from_file(t_args *x);
void from_file_imp(t_args *x);
void exec_command(t_args *x, int flag);
void exec_command_imp(t_args *x, int flag);
char **implement(char **args, char **env, int imp);


#endif
