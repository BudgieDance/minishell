int main()
{
	t_args my_args;
	int temp_fd = dup(0);
	printf("temp_fd = %d\n", temp_fd);
	char *first[] = {"ls", "-l", NULL};
	char *second[] = {"grep", "proc2.c", NULL};
	char *third[] = {"ls", NULL};
	char *forth[] = {"grep", "main.c", NULL};
	char *fifth[] = {"echo", "testtesttest", NULL};
	char *sixth[]= {"echo", "hello there blyat", NULL};
	char *eigth[]= {"grep", "test", NULL};
	char *tenth[] ={"sort", NULL};

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
	exec_command(my_args, 0, temp_fd);*/
	//sixth
/*	my_args.args = sixth;
	my_args.red_file = "filejeka.txt";
	my_args.write_append = 0;
	exec_command(my_args, 2, temp_fd);
	//seventh
	my_args.args = sixth;
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
	my_args.args = eigth;
	my_args.inp_file = "input.txt";
	my_args.out_pipe_red = 1;
	exec_command(my_args, 3, temp_fd);

	my_args.args = tenth;
	exec_command(my_args, 0, temp_fd);
	
	
	return (0);
}