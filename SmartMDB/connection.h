//
//  connection.h
//  SmartMDB
//
//  Created by Martin Cajthaml on 12.11.15.
//  Copyright (c) 2015 Martin Cajthaml. All rights reserved.
//

#ifndef VendingController_connection_h
#define VendingController_connection_h

static struct termios gOriginalTTYAttrs;

static int openSerialPort(const char *bsdPath);
static bool initConnection(int port);

#endif
