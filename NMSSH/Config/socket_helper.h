#import "libssh2.h"

int waitsocket(int socket_fd, LIBSSH2_SESSION *session);
int select(int, fd_set * __restrict, fd_set * __restrict, fd_set * __restrict, struct timeval * __restrict);
