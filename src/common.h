#ifndef __PERILIB_COMMON_H__
#define __PERILIB_COMMON_H__

#include <Arduino.h>

namespace Perilib
{

enum ProcessMode
{
    SELF = 1,
    SUBS = 2,
    BOTH = 3
};

enum ParseStatus
{
    IDLE = 0,
    STARTING = 1,
    IN_PROGRESS = 2,
    COMPLETE = 3
};

class UartStream;

class Device;
class Packet;
class Protocol;

class Stream;
class StreamDevice;
class StreamPacket;
class StreamProtocol;
class StreamParserGenerator;

} // namespace Perilib

#endif /* __PERILIB_COMMON_H__ */
