#ifndef SOCKET_H
#define SOCKET_H

#include <QString>

#include <stdio.h>
#include <QDebug>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

#define TCP 1
#define UDP 2

class Socket {

public:
    Socket(int type, int port, int packetSize);
    int SetAsClient(const char * str);
    int SetAsServer();


    int tx(const char * str, int length);
    int tx(const QString str);
    int rx(char * str);
private:
    void createTCPSocket();
    void createUDPSocket();
    int TCPServer();
    int UDPServer();
    int SetupSocket(const char * str);

    int buflen_;
    int socketType_;
    int sPort_;
    struct sockaddr_in client_, server_;
    int serverLength_;
    int socketDescriptor_;


};

#endif
