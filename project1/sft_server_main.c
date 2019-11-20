#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "sft_server.h"

int main(int argc, char const *argv[])
{
    printf("in server main");
    start_server(1600);
    return 0;
}
