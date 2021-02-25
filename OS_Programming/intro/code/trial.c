#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>


int main()
{    char filename1[100];
{    char filename2[100]; 
printf("Enter file 1");
scanf('%s',filename1);
printf("Enter file 2");
scanf('%s',filename2);

    int fd
    char buf[1024];
    int sourcefile,destfile,n;
    if(argc!=3)
    {
        write(1,"prgm1 <sourcefile> <destination file>\n",1024);   
        exit(1);
    }
    else
    {
         sourcefile=open(filename1,O_RDONLY);
         if(sourcefile==-1)
         {
            perror("SOURCE FILE ERROR");
            exit(0);
         }
         else
         {
            destfile=open(filename2,O_WRONLY | O_CREAT , 0641);
            if(destfile==-1)
            {
                perror("DESTINATION FILE ERROR");
                exit(0);
            }
            else
            {
                while((n=read(sourcefile,buf, 1)) != -1)
                {
                    write( destfile, &buf, 1 );
                }
                write(1, "FILES COPIED\n" , 15);    
                close(sourcefile);
                close(destfile);
            }
        }
    }
    return 0;
}