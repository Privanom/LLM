// NOTE: Will only work for POSIX platforms (Unix, Linux, MacOS, etc)
// TODO: Make fileui.h (it will be a file GUI like the one in nnn).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>

#ifndef _POSIX_VERSION
fprintf(stderr, "LLM: Only works with POSIX-based systems");
return -1;
#endif

#include "search.h"

int main(int argc, const char *argv[])
{
    if(argv[0] == "search")
    {
        if(argc < 2 || argc > 3)
            fprintf(stderr, "llm: search: Only 2-3 arguments allowed\n");
        
        else
            search(argv[0]);
    }
}
