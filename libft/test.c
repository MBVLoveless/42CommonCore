#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h> // for fd functions (open)

/* int main(void)
{
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    //char *message = "Hello, world!";
    ft_putnbr_fd(-2147483648, fd);
    printf("String written to file.\n");

    close(fd);
    return 0;
} */
// fd test

/* int main(void)
{
    char    src[] = "palavra";
    char    *new = ft_memchr(src, 'v', 2);
    if (!new)
        printf("Not found.\n");
    else
        printf("Character found: %c\n", *new);
    return (0);
} */
//ft_memchr test

/* void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Create some nodes for the linked list
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    
    // Assign content to the nodes
    node1->content = "lol";
    node2->content = "xd";
    node3->content = "ahah";
    
    // Initialize next pointers to NULL
    node1->next = NULL;
    node2->next = NULL;
    node3->next = NULL;
    
    // Create a pointer to the head of the linked list
    t_list *head = node1;
    
    ft_lstadd_front(&head, node3);
    ft_lstadd_front(&head, node2);
    
    // Print the linked list to verify the result
    print_list(head);
    
    // Free dynamically allocated memory
    free(node1);
    free(node2);
    free(node3);
    
    return 0;
} */
//ft_lstadd_back/front test

/* void    print_content(void *content) {
    printf("%s\n", (char *)content);
}

int main(void) {
    // Creating a linked list
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = "First";
    t_list *node2 = malloc(sizeof(t_list));
    node2->content = "Second";
    t_list *node3 = malloc(sizeof(t_list));
    node3->content = "Third";
    t_list *node4 = malloc(sizeof(t_list));
    node4->content = "Fourth";
    t_list *node5 = malloc(sizeof(t_list));
    node5->content = "Fifth";

    // Linking the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    // Applying ft_lstiter to print the content of each node
    ft_lstiter(node1, &print_content);

    // Freeing memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
} */
//ft_lstiter test

/* int	main(void)
{
	char *res = ft_itoa(-2147483648LL);
	printf("%s\n", res);
	return (0);
} */

#include<stdio.h>

static int	ft_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;
    char* str = "azazazaza";
    char delimiter = 'z';

    char** tabstr = ft_split(str, delimiter);
    int i = 0;

    if (tabstr == NULL) {
        printf("Splitting failed.\n");
        return 1; // or handle the error accordingly
    }

    while (tabstr[i])
    {
        printf("str: %s\n", tabstr[i]);
        free(tabstr[i]);
        i++;
    }

    free(tabstr);
    tabstr = NULL;
    return 0;
}
