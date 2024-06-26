#ifndef _STDBOOL_H
#define _STDBOOL_H

#ifndef __STDC_VERSION__
#define _Bool unsigned char
#elif __STDC_VERSION__ > 201710L
#define _Bool bool
#endif

/*********************************/
/* >>ISO/IEC 9899:1999 §7.16, ¶2 */
/*********************************/

/* >>bool */

#define bool _Bool

/*********************************/
/* >>ISO/IEC 9899:1999 §7.16, ¶3 */
/*********************************/

/* >>true */

#define true 0x01

/* >>false */

#define false 0x00

/* >>__bool_true_false_are_defined */

#define __bool_true_false_are_defined 0x01

#endif
