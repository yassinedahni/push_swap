/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:02:42 by ydahni            #+#    #+#             */
/*   Updated: 2022/06/01 14:33:51 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_errors(t_lexer *lexer)
{
	if (error_pipe(lexer) == NULL)
		return (0);
	if (rdr(lexer) == NULL)
		return (0);
	return (1);
}

void    ft_cd(char *cmd, char *pathname)
{
    int     chgdir;
    int i = 0;
    while (cmd[i])
    {
        chgdir = chdir(pathname);
        if (chgdir < 0)
            break;
        else
            break;
        i++;
    }
}

void    ft_pwd(char *line)
{
    int i = 0;
    char cwd[100];
    while (line[i])
    {
        if (getcwd(cwd, sizeof(cwd)) != NULL)
        {
            printf("%s\n", cwd);
            break;
        } 
        else 
        perror("getcwd() error");
        i++;
   }
}


int check_opt(char *opt)
{
	int i;

	i = 0;
	if (opt == NULL)
		return (0);
	if (opt[i] == '-')
		i++;
	while (opt[i])
	{
		if (opt[i] != 'n')
			return (1);
		i++;
	}
	return (0);
}

void    builtins_function(t_token *n)
{
	t_token *tmp;
	int	i;
	int j;

	i = 0;
	j = 0;
	tmp = n;
	if (tmp != NULL)
	{
		if (tmp->arg[0] == NULL)
			tmp->arg = NULL;
    	if (ft_strcmp(tmp->cmd,"echo") == 0)
		{
			if (tmp->opt == NULL && tmp->arg ==  NULL)
				printf("\n");
			if (tmp->opt != NULL)
			{	
				if (check_opt(tmp->opt) == 0)
				{
					if (tmp->opt[0] == '-' && tmp->opt[1] == '\0')
						printf("%s\n",tmp->opt);
					if (tmp->arg != NULL)
					{
						if (tmp->arg[i][0] == '-')
						{
							while (tmp->arg[i])
							{
								if (check_opt(tmp->arg[i]))
									break ;
								i++;
							}
						}
						while (tmp->arg[i])
						{
							printf("%s", tmp->arg[i]);
							if (tmp->arg[i + 1] != NULL)
								printf(" ");
							i++;
						}
					}
				}
				if (check_opt(tmp->opt) == 1)
				{
					printf("%s", tmp->opt);
					printf(" ");
					if (tmp->arg == NULL)
						printf("\n");
					if (tmp->arg != NULL)
					{
						while (tmp->arg[i])
						{
							printf("%s ", tmp->arg[i]);
							i++;
						}
						printf("\n");
					}
				}
			}
			if (tmp->opt == NULL && tmp->arg != NULL)
			{

				while (tmp->arg[i])
				{
					printf("%s ", tmp->arg[i]);
					i++;
				}
				printf("\n");
			}
		}
		else if (ft_strcmp(tmp->cmd,"cd") == 0)
		{
			if (tmp->arg != NULL)
				ft_cd(tmp->cmd, tmp->arg[0]);
		}
    	else if (ft_strcmp(tmp->cmd, "pwd") == 0)
    	    ft_pwd(tmp->cmd);
		else
		{
			printf("minishell: %s: command not found\n", tmp->cmd);
		}
	}
}

int	main(int ac, char **av, char **env)
{
	char	*line;
	t_lexer	*tmp;
	t_node	*head;
	t_token	*n;
	t_env	*ev;
	char	*new;
	int		i;
	int		j;

	(void)av;
	(void)ac;
	i = 0;
	j = 0;
	ev = get_env2(env);
	while (1)
	{
		line = readline("minishell $ ");
		add_history(line);
		tmp = init_lexer(line);
		if (check_errors(tmp) != 0 && check_error_quote(tmp) != 0)
		{
			new = add_space(line, tmp);
			head = create_linked_list(new, ev);
			n = final_struct(head);
			// play3(head, n);
			builtins_function(n);
		}
       	// system ("leaks minishell");
        // free(tmp);
	}
}