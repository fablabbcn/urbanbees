/*
 *  FABLABBCN 3G COSM // URBAN BEES (BETA)
 *
 *  >> Proudly based on:
 *
 *  Version 0.1
 *  Author: Alejandro Gállego
 *  Copyright (C) 2012 Libelium Comunicaciones Distribuidas S.L.
 *  http://www.libelium.com
 *
 *  >> License:
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.
 */
 
 
#define APIKEY         "nKn8ldoeUYHFdcLymuWAAm6KfblczFJFCIc8GT2_G30" // replace your pachube api key here
#define FEEDID         91765 // replace your feed ID
#define USERAGENT      "URBAN BEES" // user agent is the project name
#define PACHUBE_SERVER "api.pachube.com"
#define PACHUBE_SERVER_PORT  "80"
#define DELAY_TIME 30000

#define led 13
#define onModulePin 2

int TEMPvalue = 200;
int HUMvalue = 0;
int NOISEvalue = 0;


int x = 0;
char data[1024];
int data_size;

char server[ ]= PACHUBE_SERVER;
char port[ ]= PACHUBE_SERVER_PORT;


void setup(){
  starter();
}

void loop()
{
  http_put();
  delay(DELAY_TIME);
}


