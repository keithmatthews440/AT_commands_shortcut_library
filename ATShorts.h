#ifdef AT_SHORTS_H
#define AT_SHORTS_H

#include "Arduino.h"


class ATShorts{
  public:
    ATShorts();
    String read(String strIN);
    void print(String strIN, int wait = 1000);
    void begin();
    void printHex(byte hexIN[]);
  private:
    String _strIN
  
}
#endif
