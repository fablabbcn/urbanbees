
void http_put() { 

  int contentLenght = 2 + getLength(TEMPvalue) + 2 + getLength(HUMvalue) + 2 + getLength(NOISEvalue);
  
  Serial.print("AT+CHTTPACT=\""); //Connects with the HTTP server
  Serial.print(server);
  Serial.print("\",");
  Serial.println(port);        
  Serial.flush();
  x=0;
  do{
    while(Serial.available()==0);
    data[x]=Serial.read();  
    x++;  
  }
  while(!(data[x-1]=='T'&&data[x-2]=='S'));        //waits for response "REQUEST"

  Serial.print("PUT /v2/feeds/");
  Serial.print(FEEDID);
  Serial.println(".csv HTTP/1.1");
  Serial.println("Host: api.pachube.com");
  Serial.print("X-PachubeApiKey: ");
  Serial.println(APIKEY);
  Serial.print("User-Agent: ");
  Serial.println(USERAGENT);
  Serial.print("Content-Length: ");
  Serial.println(contentLenght);
  Serial.println("Content-Type: text/csv");
  Serial.println("Connection: close");
  
  Serial.println();
  Serial.print("0,");
  Serial.println(TEMPvalue);
  Serial.print("1,");
  Serial.println(HUMvalue);
  Serial.print("2,");
  Serial.println(NOISEvalue);
  
  Serial.write(0x1A);       
  Serial.write(0x0D);
  Serial.write(0x0A);
}





