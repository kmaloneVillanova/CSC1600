typedef struct workdetails {
    char* full_request;
    char* filepath;
    int socket_descriptor;
}workdetails;

void start_server(int port);