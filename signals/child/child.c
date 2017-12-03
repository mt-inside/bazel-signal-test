#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void install_sigh (void);

void child (void)
{
    printf("child! PID %d\n", getpid());

    exit(0);
}

static void sigh (int signum)
{
    printf("Got signal %d (is CHLD %d) (is HUP %d)\n", signum, signum == SIGCHLD, signum == SIGHUP);
}

static void install_sigh (void)
{
    signal(SIGCHLD, &sigh);
    signal(SIGHUP, &sigh);
}
