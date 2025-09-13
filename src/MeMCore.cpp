/** Single definition for mCore board mePort moved from header. */
#include <Arduino.h>
#include "MePort.h"
#include "MeMCore.h"

MePort_Sig mePort[17] =
{
  { NC, NC }, { 11, 12 }, {  9, 10 }, { A2, A3 }, { A0, A1 },
  { NC, NC }, {  8, A6 }, { A7, 13 }, {  8, A6 }, {  6,  7 },
  {  5,  4 }, { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC },
  { NC, NC },{ NC, NC },
};
