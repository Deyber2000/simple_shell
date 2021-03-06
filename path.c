#include "shell.h"

/**
 * parse_text_path - parse the input path
 * @str: string of the path
 * @parsed: string parsed, in chunks
 *
 * Return: void
 */
void parse_text_path(char *str, char **parsed)
{
	const char delimiters[] = "=:;";
	char *dest = NULL;
	int i;

	dest = _strtok(str, delimiters);
	i = 0;
	while (dest)
	{
		parsed[i] = dest;
		dest = _strtok(NULL, delimiters);
		i++;
	}
	parsed[i] = NULL;
	free(dest);
}

/**
 * create_struct - print nodes size
 * @head: node
 * @str: string
 *
 * Return: nodes head
 */
paths_t *create_struct(paths_t **head, char *str)
{
	paths_t *new_node = (paths_t *)malloc(sizeof(paths_t));

	if (!new_node)
		return (NULL);
	new_node->path = _strdup(str);
	if (!new_node->path)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


/**
 * get_path - Function to generate the path
 * @env: Receive the env of the shell
 *
 * Return: string whit the path
 */
paths_t *get_path(char **env)
{
	int i = 0, j = 0, num, count;
	char **ramoncito;
	char *tmp, **tmp2 = NULL;
	paths_t *head;
	char *comparation = "PATH";
/*in this part, iterate inside the environment */
	ramoncito = env;
	while (ramoncito[i] != NULL)
	{
		count = 0;
		for (j = 0; ramoncito[i][j]; j++)
		{
			if (ramoncito[i][j] == comparation[j] && j < 4)
			{
				count++;
				/*check for a coincidence whit the path */
				if (count == 4 && j == 3)
					num = i;
			}
			else
				count = 0;
		}
		i++;
	}
	tmp = _strdup(ramoncito[num]);
	tmp2 = malloc(sizeof(char *) * 1024);
	if (!tmp2)
		return (NULL);
	/*send the coincidence to another function for tokens*/
	parse_text_path(tmp, tmp2);
	head = NULL;
	for (i = 0; tmp2[i]; i++)
		create_struct(&head, tmp2[i]);
	free(tmp);
	free(tmp2);
	return (head);
}
