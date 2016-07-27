#include "master.h"
#include <string.h>

serverInfo::serverInfo(int server_num , char server_ip[][BUFFER_SIZE]) {
    serverNum = server_num;
    for(int i=0; i<server_num; i++) {
        strcpy(serverIp[i] , server_ip[i]);
        serverCons[i] = 0;
    }
}

int serverInfo :: getServerCons(int server_id) {
    return serverCons[server_id];
}

int serverInfo :: addServerCons(int server_id) {
    serverCons[server_id] ++;
    return 1;
}

int serverInfo :: decServerCons(int server_id) {
    serverCons[server_id] --;
    return 1
}

char * serverInfo :: getServerIp(int server_id) {
    return serverIp[server_id]; 
}

int serverInfo :: getServerNum() {
	return serverNum;
}

int serverInfo :: getServerId(char *ip) {
    for(int i=0; i<getServerNum(); i++) {
        if(strcmp(getServerIp(i) , ip) == 0)
            return i;
    }
    return -1;
}
