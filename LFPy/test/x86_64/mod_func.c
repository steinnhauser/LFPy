#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _expsyni_reg(void);
extern void _sinsyn_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," expsyni.mod");
    fprintf(stderr," sinsyn.mod");
    fprintf(stderr, "\n");
  }
  _expsyni_reg();
  _sinsyn_reg();
}
