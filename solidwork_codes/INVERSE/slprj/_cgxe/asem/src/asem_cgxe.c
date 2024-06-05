/* Include files */

#include "asem_cgxe.h"
#include "m_q90jjkosYeYuVdZaEe63wB.h"

unsigned int cgxe_asem_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 329168532 &&
      ssGetChecksum1(S) == 2938844613 &&
      ssGetChecksum2(S) == 1475362890 &&
      ssGetChecksum3(S) == 3071764171) {
    method_dispatcher_q90jjkosYeYuVdZaEe63wB(S, method, data);
    return 1;
  }

  return 0;
}
