#ifndef Temporizador_h
#define Temporizador_h

#include "Arduino.h"

class Temporizador
{
  public:
     Temporizador(long baudios_serial);
	 start(long ts, long tm);
	 oriented_conection(unsigned long number);
     void begin();
	 void reset();
	 boolean conection_set();
	 boolean conection_one_signal();
	 unsigned long Time_seconds();
	 unsigned long Time_minutes();
	 boolean conection();
  private:
      long time_seconds; 
	  long time_minutes;
	  long count_temp;
	  unsigned long temp;
	  unsigned long number1;
	  unsigned long numeber2;
	  unsigned long set__c;
	  unsigned long set__d;
	  unsigned long valordeterminado;
	  unsigned long valoroff;
	  long baudios;
	  int i__1__1;
	  int i__1__2;
	  
	  
};











#endif