/** Single definition for BaseBoard mePort moved from header. */
#include <Arduino.h>
#include "MePort.h"
#include "MeBaseBoard.h"

MePort_Sig mePort[17] =
{
  {   NC,  NC }, { 11, A8 }, { 13, A11 }, { A10, A9 }, {  1,  0 },
  { MISO, SCK }, { A0, A1 }, { A2,  A3 }, {  A4, A5 }, {  6,  7 },
  {    5,   4 }, { NC, NC }, { NC,  NC }, {  NC, NC }, { NC, NC },
  { NC, NC },{ NC, NC },
};
