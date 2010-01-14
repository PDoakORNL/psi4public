#ifndef __psi_psi4_psi4_h_
#define __psi_psi4_psi4_h_

#include <stdio.h>
#include <string>
#include <libpsio/psio.hpp>
#include <libchkpt/chkpt.hpp>
#include <libipv1/ip_lib.h>
#include <libpsio/psio.h>

#ifdef MAIN
#define EXT
#else
#define EXT extern
#endif

namespace psi {

EXT char **atom_basis; // basis set label for each atom

EXT FILE* infile;

/*! Verbosity */
EXT bool verbose;

/*! sanity check boolean */
EXT bool check_only;

/* clean-up */
EXT bool clean_only;

}
  
#endif
