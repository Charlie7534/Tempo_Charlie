#include "Arduino.h"
#include "Temporizador.h"

Temporizador::Temporizador(long baudios_serial){
   baudios = baudios_serial;
   i__1__1 = 0;
   i__1__2 = 0;
}


Temporizador::start(long tm, long ts){
   time_minutes = tm;
   time_seconds = ts;
}	
	
void Temporizador::begin()
{
	Serial.begin(baudios);
}

unsigned long Temporizador::Time_seconds(){
    delay(100);
    time_seconds = time_seconds + 100;
    return time_seconds*1/1000;
}

unsigned long Temporizador::Time_minutes(){
    delay(100);
    time_minutes = time_minutes + 100;
    return time_minutes*1/60000;
}
Temporizador::oriented_conection(unsigned long number1){
   if(i__1__1 == 0){
   set__c = number1;
   i__1__1 = 1;
   }
}

Temporizador::oriented_desconection(unsigned long number2, unsigned long valordeterminado, unsigned long valoroff){
   if(i__1__2 == 0){
   set__d = number2;
   i__1__2 = 1;
   valordeterminado = vdte;
   valoroff = offd
   }
}

boolena Temporizador::desconection(){
if(i__1__2 == 1 && vdte == offd){
   delay(100);
   time_seconds = time_seconds + 100;
   count_temp = time_seconds*1/1000;
  if(set__d < count_temp){
   return 1;
  }
  else{
   return 0;
  }
}
else{
 return 0;
}
}
}


boolean Temporizador::conection_set(){
if(i__1__1 == 1){
   delay(100);
   time_seconds = time_seconds + 100;
   count_temp = time_seconds*1/1000;
  if(set__c < count_temp){
   return 1;
  }
  else{
   return 0;
  }
}
else{
 return 0;
}
}

boolean Temporizador::conection_one_signal(){
if(i__1__1 == 1){
   delay(100);
   time_seconds = time_seconds + 100;
   count_temp = time_seconds*1/1000;
   if(set__c == count_temp){
     return 1;
   }
   else{
    return 0;
   }
}
else{
  return 0;
}
}

void Temporizador::reset(){
  i__1__1 = 0;
  i__1__2 = 0;
  valoroff = 0;
  valordeterminado = 0;
  count_temp = 0;
  time_seconds = 0;
  set__c = 0;
  set__d = 0;
}
