#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

static void install_sigh (void);

void parent (void)
{
    int status;

    install_sigh();

    printf("parent! PID %d\n", getpid());

    wait(&status);

    printf("child quit with status %d\n", status);

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
