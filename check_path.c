#include "shell.h"

/**
 * check_path - compare two strings
 * @parsed: string1 from input
 * @h: path list
 *
 * Return: number acci code
 */
char *check_path(char **parsed, paths_t *h)
{
	char *tmp = NULL;
	char *tmp2 = NULL;
	char *ramoncito = NULL;
	struct stat buf;
	char *slash = "/";
	char *var;

	var = parsed[0];
	tmp = str_concat(slash, var);
	if (!h)
		return (NULL);
	while (h)
	{
		if (h->path)
		{
			ramoncito = _strdup(h->path);
			tmp2 = (str_concat(ramoncito, tmp));
			if (stat(tmp2, &buf) == 0)
			{
				free(ramoncito);
				free(tmp);
				return (tmp2);
			}
			h = h->next;
		}
		free(tmp2);
		free(ramoncito);
	}
	free(tmp);
	return (parsed[0]);
}
