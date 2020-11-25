#include "../../includes/minishell.h"

void write_to_pipe(char **args)
{
	int id;
	int fd[2];
	char *command = "/usr/bin/";

	pipe(fd);
	id = fork();
	command = ft_strjoin(command, *args);
	if (id == 0)
	//child process
	{
		dup2(fd[1], 1);
		close(fd[0]);
		close(fd[1]);
		execv(command, args);
		return ;
	}
	//parent process
	waitpid(id, NULL, 0);
	free(command);
	dup2(fd[0], 0);
	close(fd[1]);
	close(fd[0]);
}

void write_to_stdout(char **args, int temp_fd)
{
	int id;
	char *command = "/usr/bin/";

	id = fork();
	command = ft_strjoin(command, *args);
	if (id == 0)
	//child process
	{
		execv(command, args);
		return ;
	}
	//parent process
	waitpid(id, NULL, 0);
	free(command);
	dup2(temp_fd, 0);
}
	
void write_to_file(t_args x, int temp_fd)
{
	int id;
	int fd;
	int len;
	char *command = "/usr/bin/";
	

	if (x.write_append == 0)
		fd = open(x.red_file, O_WRONLY|O_TRUNC|O_CREAT, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	else
		fd = open(x.red_file, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	id = fork();
	command = ft_strjoin(command, *(x.args));
	if (id == 0)
	//child process
	{
		dup2(fd, 1);
		execv(command, x.args);
		return ;
	}
	//parent process
	waitpid(id, NULL, 0);
	free(command);
	dup2(temp_fd, 0);
}

void exec_command(t_args x, int flag, int temp_fd)
{
	
	if (flag == 1)
		write_to_pipe(x.args);
	else if (flag == 2)
		write_to_file(x, temp_fd);
	else if (flag == 3)
		from_file(x, temp_fd); 
	else
		write_to_stdout(x.args, temp_fd);
}
