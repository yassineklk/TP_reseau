#ifndef CLIENT_H
#define CLIENT_H

#include "server2.h"

typedef struct
{
   SOCKET sock;
   char name[BUF_SIZE];
   int state;
}Client;

#endif /* guard */
