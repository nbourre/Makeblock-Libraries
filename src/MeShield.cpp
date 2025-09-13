/** Single definition for Shield board mePort moved from header. */
#include <Arduino.h>
#include "MePort.h"
#include "MeShield.h"

MePort_Sig mePort[17] =
{
  { NC, NC }, { 11, 10 }, {  9, 12 }, { 13,  8 }, { NC,  3 },
  { NC, NC }, { NC,  2 }, { A2, A3 }, { A0, A1 }, {  5,  4 },
  {  6,  7 }, { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC },
  { NC, NC }, { NC, NC },
};
