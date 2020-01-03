
/* @(#)w_atan2.c 1.3 95/01/18 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 *
 */

/* 
 * wrapper atan2(y,x)
 */

#include "fdlibm.h"


double atan2(double y, double x)	/* wrapper atan2 */
{
	if (_LIB_VERSION == _SVID_ && x == 0.0 && y == 0.0)
		return __kernel_standard(y, x, HUGE_VAL, KMATHERR_ATAN2);	/* atan2(+-0,+-0) */

	return __ieee754_atan2(y, x);
}
