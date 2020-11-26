#include "../includes/minishell.h"

int main(int argc, char **argv, char **environ)
{
	t_args my_args;
	my_args.temp_fd_0 = dup(0);
	my_args.temp_fd_1 = dup(1);

	char *first[] = {"ls", "-l", NULL};
	char *second[] = {"grep", "proc2.c", NULL};
	char *third[] = {"ls", NULL};
	char *forth[] = {"grep", "main.c", NULL};
	char *fifth[] = {"echo", "testtesttest", NULL};
	char *sixth[]= {"echo", "hello there blyat", NULL};
	char *eigth[]= {"grep", "test", NULL};
	char *tenth[] ={"sort", NULL};
	my_args.env = convert_array(environ);

/*	//first
	my_args.args = first;
	exec_command(my_args, 1, temp_fd);
	//second
	my_args.args = second;
	exec_command(my_args, 0, temp_fd);
	//third
	my_args.args = third;
	exec_command(my_args, 1, temp_fd);
	//forth
	my_args.args = forth;
	exec_command(my_args, 0, temp_fd);
	//fifth
	my_args.args = fifth;
	exec_command(&my_args, 0);*/
	//sixth
	/*my_args.args = sixth;
	my_args.red_file = "filejeka.txt";
	my_args.write_append = 1;
	exec_command(&my_args, 2);*/
	//seventh
/*	my_args.args = sixth;
	my_args.red_file = "filejeka2.txt";
	my_args.write_append = 1;
	exec_command(my_args, 2, temp_fd);*/

/*	//eigth
	my_args.args = eigth;
	my_args.inp_file = "input.txt";
	my_args.out_pipe_red = 0;
	exec_command(my_args, 3, temp_fd);*/

/*	//ninth
	my_args.args = eigth;
	my_args.inp_file = "input.txt";
	my_args.red_file = "filejeka.txt";
	my_args.out_pipe_red = 2;
	my_args.write_append = 0;
	exec_command(my_args, 3, temp_fd);
	//ninth
	my_args.args = eigth;
	my_args.inp_file = "input.txt";
	my_args.red_file = "filejeka2.txt";
	my_args.out_pipe_red = 2;
	my_args.write_append = 1;
	exec_command(my_args, 3, temp_fd);*/

	//tenth
	/*my_args.args = eigth;
	my_args.inp_file = "input.txt";
	my_args.out_pipe_red = 1;
	exec_command(&my_args, 3);

	my_args.args = tenth;
	exec_command(&my_args, 0);*/
	char *eleventh[] = {"export", "PWD=jejeje", "j*ka=", "SHELL=testtesttest", NULL};
	char *eleventh2[] = {"export", NULL};

	//eleventh2
	my_args.args = eleventh2;
	exec_command(&my_args, 0);
	printf("\n\n");
	//eleventh
	my_args.args = eleventh;
	exec_command(&my_args, 0);
	//eleventh2
	my_args.args = eleventh2;
	exec_command(&my_args, 0);
	
	return (0);
}