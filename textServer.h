#ifndef TEXTSERVER_H
#define TEXTSERVER_H

#include <QObject>
#include "socket.h"
#include "component.h"

/*
struct ClientSpecs {
    ClientSpecs():ipAddr(0){}
    char *ipAddr;
};
*/

class TextServer : public Component {
    Q_OBJECT

public:
    TextServer(int, int);
    ~TextServer();
public slots:
    void slotClientConnect(char*);
    void slotClientDisconnect(char*);
    virtual void Start();
signals:
    void signalClientDisconnected(MessageStruct *);
    void signalShowClientConnected(MessageStruct *);
    void connectionError(const char*);

private:
    SocketClass *pSocket_;
};

#endif // TEXTSERVER
