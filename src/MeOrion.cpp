/** Single definition for MeOrion board mePort moved from header. */
#include <Arduino.h>
#include "MePort.h"
#include "MeOrion.h"

MePort_Sig mePort[17] =
{
  { NC, NC }, { 11, 10 }, {  3,  9 }, { 12, 13 }, {  8,  2 },
  { NC, NC }, { A2, A3 }, { A6, A1 }, { A7, A0 }, {  6,  7 },
  {  5,  4 }, { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC },
  { NC, NC },{ NC, NC },
};
