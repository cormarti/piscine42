/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 23:17:48 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 23:17:50 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <unistd.h>
 #include <stdio.h>
 
 int main(void)
 {
    int i;
    int handle;
    int output;
    char buffer[4097];

    output = 1;
    i = 0;
    handle = open("file.txt", O_RDONLY);
    if (handle == -1)
    {
        printf("Open fail");
        return(0);
    }
    while (output == 1 && ++i)
        output = read(handle, buffer, 1);
    printf("File size in bytes: %d\nMeaning %d octets\n", i, i*8);

    buffer[output] = '\0'; //Dernier bit
    printf("%s", buffer);
    if (close(handle) == -1)
    {
        printf("Close fail");
        return(0);
    }
    return(0);
 }