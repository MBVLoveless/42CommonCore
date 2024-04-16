#include "libft.h"
#include <stdio.h>
#include <string.h>
//#include <fcntl.h> - for fd functions (open)

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
    char    *new = ft_memchr(src, 'z', 5);
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
        printf("%s -> ", (char *)lst->content); // Assuming content is a string
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
    
    // Add nodes to the linked list using ft_lstadd_back
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

/* void print_str_array(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
    {
        printf("%s\n", arr[i]);
    }
}

int main(void)
{
    char *str = "";
    char **result = ft_split(str, ' ');

    if (result)
    {
        printf("Original string: %s\n", str);
        printf("Resulting strings after splitting:\n");
        print_str_array(result);
        
        // Free memory allocated for result
        for (int i = 0; result[i] != NULL; i++)
        {
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Error: ft_split returned NULL\n");
    }

    return 0;
} */
//ft_split test

void    print_content(void *content) {
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
}