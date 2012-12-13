void starter(){
  startModule();
}

void startModule(){
  Serial.begin(115200);                // UART baud rate
  delay(2000);
  pinMode(led, OUTPUT);
  pinMode(onModulePin, OUTPUT);
  switchModule();                    // switches the module ON

  for (int i=0;i< 5;i++){
    delay(5000);
  } 

  Serial.println("AT+CGSOCKCONT=1,\"IP\",\"internet\"");
  Serial.flush();
  while(Serial.read()!='K');  
}

void switchModule(){
    digitalWrite(onModulePin,HIGH);
    delay(2000);
    digitalWrite(onModulePin,LOW);
}


