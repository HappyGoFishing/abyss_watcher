#pragma once
#include <sys/types.h>
void strip_whitespace(char* msg);
int count_substrings(const char *str);
int send_message(int sock_fd, const char* msg);
ssize_t receive_message(int sock_fd, char* response_buffer, size_t max_len);
