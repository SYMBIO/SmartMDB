//
//  main.c
//  SmartMDB
//
//  Created by Martin Cajthaml on 12.11.15.
//  Copyright (c) 2015 Martin Cajthaml. All rights reserved.
//

#include <stdio.h>
#include "connection.h"
#include "listener.h"

int main(int argc, const char * argv[]) {
    
    int port;
    
    port = openSerialPort("/dev/tty....");
    initConnection(port);
    initListener();
    
    return 0;
}
