#ifdef ATShorts_H
#define ATShorts_H

#include "Arduino.h"


class ATShorts{
  public:
    void ATShorts();
    String read(String strIN);
    void print(String strIN, int wait = 1000);
    void begin();
    void printHex(byte hexIN[]);
    void check();
  private:
    String _strIN
  
}
#endif
