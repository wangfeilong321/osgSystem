#ifndef _SENDFILE_H_
#define _SENDFILE_H_

#include <osgDB/ReadFile> 
#include <osgViewer/Viewer> 
#include <osg/Group> 
#include <osgGA/GUIEventHandler> 
#include <osgUtil/LineSegmentIntersector> 
#include <iostream>
using namespace std;

#define MASTER_PORT 6666
#define SERVER_PORT 36677
#define CLIENT_DATA_PORT 8888
#define BUFFER_SIZE 1024 /// 控制命令缓冲区大小
#define BUFFER_SIZE_FILE 1024 * 1024
#define MAX_CONNECTION 10 // 最大连接客户端个数
#define BYTES_PER_TRANS 100000
#define MAX_SERVER_NUM 100 //

class serverInfo {
public:
    serverInfo(int server_num , char server_ip[][BUFFER_SIZE]) ;
    int getServerCons(int server_id) ;
    int addServerCons(int server_id);
    int decServerCons(int server_id);
    char * getServerIp(int server_id) ;
    int getServerId(char *ip);
    int getServerNum();
    
protected:
    char serverIp[MAX_SERVER_NUM][BUFFER_SIZE];
    int serverCons[MAX_SERVER_NUM];
    int serverNum;
};


#endif
