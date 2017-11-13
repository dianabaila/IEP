#ifndef SERIAL_H
#define SERIAL_H

#include <stdint.h>

class AbstractClassSerial {
public:
  virtual uint8_t transfer(uint8_t send_data) = 0;
};

#endif // SERIAL_H
