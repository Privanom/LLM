char *searchfilename(const char *keyword[], const char filename[])
{
    int keywordsize = strlen(keyword);
    for(int i = 0; i < strlen(filename); i++)
    {
        int iskeyword = i + keywordsize
        if(filename[iskeyword] == keyword)
            goto end;
        end:
        return 0;
    }
}

int search(const char *argv[])
{
    DIR *d;
    int dir_list[sizeof(d)/sizeof(int)];
    struct dirent *dir;
        
    if(argv[2] != NULL)
        d = opendir(argv[2]);
    
    else
        chdir("/");
        
    if(d)
        for(int i = 0; i < sizeof(d)/sizeof(int); i++)
            dir_list[i] = dir->d_name;
    closedir(d);

    for(int i = 0; i < sizeof(dir_list); i++)
    {
        char *__restrict files[sizeof(dir_list[i])];
        sprintf(files, "%p", &dir_list[i]);
        FILE * fp = fopen(files[i], "r");

        if(chdir(argv[2]) == 0)
        {
            chdir(argv[2]);
                
            if(fgets(argv[1], sizeof(fp), fp) == 0 || searchfilename(argv, files[i]) == 0)
            {
                // Use fileui.h
            }
            
            else if(i == sizeof(dir_list) && fgets(argv[1], sizeof(fp), fp) == 1) || searchfilename(argv, files[i]) == 1)
            {
                fprintf(stderr, "LLM: search: No matching files found");
                return -1;
            }
        }
    }
    
    return 0;
}
