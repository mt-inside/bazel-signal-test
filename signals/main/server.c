#include <unistd.h>

#include "parent/parent.h"
#include "child/child.h"

void server (void)
{
    pid_t pid = fork();

    if (pid == 0)
    {
        child();
    }
    else
    {
        parent();
    }
}
