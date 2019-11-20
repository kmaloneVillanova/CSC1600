#include <stdio.h>
 #include <stdio.h>
 #include <string.h>
 #include <errno.h>
 #include <stdlib.h>
 #include <sys/socket.h>
 #include <arpa/inet.h>
 #include <unistd.h>
 #include <netdb.h>
 #define BUFFER_SIZE 1600

 
int make_request(char* request, char* server, int port) 
{
    /*connect to SFT server 
    *send file request to server
    *write response to a file in client_files directory
    */
    
}