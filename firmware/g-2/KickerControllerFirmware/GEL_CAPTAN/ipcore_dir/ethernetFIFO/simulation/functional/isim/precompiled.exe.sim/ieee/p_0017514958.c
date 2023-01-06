/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include <memory.h>
#include "xsi.h"
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char*       IEEE_P_2592010699;
static const char* ng1 = "Function sense ended without a return statement";
extern char*       STD_STANDARD;
static const char* ng3  = "tristate_tableBase";
static const char* ng4  = "tristate_table";
static const char* ng5  = "mux_tableBase";
static const char* ng6  = "mux_table";
static const char* ng7  = "maj23_tableBase";
static const char* ng8  = "maj23_table";
static const char* ng9  = "stdlogic_tableBase";
static const char* ng10 = "stdlogic_table";

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char*,
                                                         unsigned char,
                                                         unsigned char);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char*, unsigned char);
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char*,
                                                         unsigned char,
                                                         unsigned char);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char*,
                                                         unsigned char,
                                                         unsigned char);

unsigned char ieee_p_0017514958_sub_2888371257_1861681735(char*         t1,
                                                          unsigned char t2,
                                                          unsigned char t3)
{
	char          t5[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t9;
	int           t10;
	unsigned int  t11;
	unsigned int  t12;
	int           t13;
	unsigned int  t14;
	unsigned int  t15;
	unsigned int  t16;
	unsigned int  t17;
	unsigned char t18;

LAB0:
	t6                    = (t5 + 4U);
	*((unsigned char*)t6) = t2;
	t7                    = (t5 + 5U);
	*((unsigned char*)t7) = t3;
	t8                    = (t1 + 1168U);
	t9                    = *((char**)t8);
	t10                   = (t2 - 0);
	t11                   = (t10 * 1);
	t12                   = (t11 * 10U);
	t13                   = (t3 - 0);
	t14                   = (t13 * 1);
	t15                   = (t12 + t14);
	t16                   = (1U * t15);
	t17                   = (0 + t16);
	t8                    = (t9 + t17);
	t18                   = *((unsigned char*)t8);
	t0                    = t18;

LAB1:
	return t0;
LAB2:;
}

unsigned char ieee_p_0017514958_sub_3959339890_1861681735(char*         t1,
                                                          unsigned char t2,
                                                          unsigned char t3)
{
	char          t5[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t9;
	int           t10;
	unsigned int  t11;
	unsigned int  t12;
	int           t13;
	unsigned int  t14;
	unsigned int  t15;
	unsigned int  t16;
	unsigned int  t17;
	unsigned char t18;

LAB0:
	t6                    = (t5 + 4U);
	*((unsigned char*)t6) = t2;
	t7                    = (t5 + 5U);
	*((unsigned char*)t7) = t3;
	t8                    = (t1 + 1288U);
	t9                    = *((char**)t8);
	t10                   = (t2 - 0);
	t11                   = (t10 * 1);
	t12                   = (t11 * 10U);
	t13                   = (t3 - 0);
	t14                   = (t13 * 1);
	t15                   = (t12 + t14);
	t16                   = (1U * t15);
	t17                   = (0 + t16);
	t8                    = (t9 + t17);
	t18                   = *((unsigned char*)t8);
	t0                    = t18;

LAB1:
	return t0;
LAB2:;
}

char* ieee_p_0017514958_sub_3483042593_1861681735(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t7[16];
	char          t18[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	int           t13;
	unsigned int  t14;
	int           t15;
	int           t16;
	unsigned int  t17;
	char*         t19;
	unsigned int  t20;
	int           t21;
	char*         t22;
	char*         t23;
	int           t24;
	unsigned int  t25;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	unsigned char t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	char*         t38;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 - 1);
	t11                   = (t7 + 0U);
	t12                   = (t11 + 0U);
	*((int*)t12)          = t10;
	t12                   = (t11 + 4U);
	*((int*)t12)          = 0;
	t12                   = (t11 + 8U);
	*((int*)t12)          = -1;
	t13                   = (0 - t10);
	t14                   = (t13 * -1);
	t14                   = (t14 + 1);
	t12                   = (t11 + 12U);
	*((unsigned int*)t12) = t14;
	t12                   = (t4 + 12U);
	t14                   = *((unsigned int*)t12);
	t15                   = (t14 - 1);
	t16                   = (0 - t15);
	t17                   = (t16 * -1);
	t17                   = (t17 + 1);
	t17                   = (t17 * 1U);
	t19                   = (t4 + 12U);
	t20                   = *((unsigned int*)t19);
	t21                   = (t20 - 1);
	t22                   = (t18 + 0U);
	t23                   = (t22 + 0U);
	*((int*)t23)          = t21;
	t23                   = (t22 + 4U);
	*((int*)t23)          = 0;
	t23                   = (t22 + 8U);
	*((int*)t23)          = -1;
	t24                   = (0 - t21);
	t25                   = (t24 * -1);
	t25                   = (t25 + 1);
	t23                   = (t22 + 12U);
	*((unsigned int*)t23) = t25;
	t23                   = (t5 + 4U);
	t26                   = ((IEEE_P_2592010699) + 3912);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t17);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	xsi_type_set_default_value(t26, t28, t18);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t18;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t17;
	t32                   = (t6 + 4U);
	t33                   = (t3 != 0);
	if(t33 == 1)
		goto LAB3;

LAB2:
	t34            = (t6 + 12U);
	*((char**)t34) = t4;
	t35            = (t3 + 0);
	t36            = (t23 + 56U);
	t37            = *((char**)t36);
	t36            = (t37 + 0);
	t38            = (t7 + 12U);
	t25            = *((unsigned int*)t38);
	t25            = (t25 * 1U);
	memcpy(t36, t35, t25);
	t8  = (t23 + 56U);
	t11 = *((char**)t8);
	t8  = (t18 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t11, t9);
	t12                   = (t18 + 0U);
	t10                   = *((int*)t12);
	t19                   = (t18 + 4U);
	t13                   = *((int*)t19);
	t22                   = (t18 + 8U);
	t15                   = *((int*)t22);
	t26                   = (t2 + 0U);
	t27                   = (t26 + 0U);
	*((int*)t27)          = t10;
	t27                   = (t26 + 4U);
	*((int*)t27)          = t13;
	t27                   = (t26 + 8U);
	*((int*)t27)          = t15;
	t16                   = (t13 - t10);
	t14                   = (t16 * t15);
	t14                   = (t14 + 1);
	t27                   = (t26 + 12U);
	*((unsigned int*)t27) = t14;

LAB1:
	return t0;
LAB3:
	*((char**)t32) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_0017514958_sub_839555928_1861681735(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t7[16];
	char          t18[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	int           t13;
	unsigned int  t14;
	int           t15;
	int           t16;
	unsigned int  t17;
	char*         t19;
	unsigned int  t20;
	int           t21;
	char*         t22;
	char*         t23;
	int           t24;
	unsigned int  t25;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	unsigned char t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	char*         t38;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 - 1);
	t11                   = (t7 + 0U);
	t12                   = (t11 + 0U);
	*((int*)t12)          = t10;
	t12                   = (t11 + 4U);
	*((int*)t12)          = 0;
	t12                   = (t11 + 8U);
	*((int*)t12)          = -1;
	t13                   = (0 - t10);
	t14                   = (t13 * -1);
	t14                   = (t14 + 1);
	t12                   = (t11 + 12U);
	*((unsigned int*)t12) = t14;
	t12                   = (t4 + 12U);
	t14                   = *((unsigned int*)t12);
	t15                   = (t14 - 1);
	t16                   = (0 - t15);
	t17                   = (t16 * -1);
	t17                   = (t17 + 1);
	t17                   = (t17 * 1U);
	t19                   = (t4 + 12U);
	t20                   = *((unsigned int*)t19);
	t21                   = (t20 - 1);
	t22                   = (t18 + 0U);
	t23                   = (t22 + 0U);
	*((int*)t23)          = t21;
	t23                   = (t22 + 4U);
	*((int*)t23)          = 0;
	t23                   = (t22 + 8U);
	*((int*)t23)          = -1;
	t24                   = (0 - t21);
	t25                   = (t24 * -1);
	t25                   = (t25 + 1);
	t23                   = (t22 + 12U);
	*((unsigned int*)t23) = t25;
	t23                   = (t5 + 4U);
	t26                   = ((IEEE_P_2592010699) + 4024);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t17);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	xsi_type_set_default_value(t26, t28, t18);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t18;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t17;
	t32                   = (t6 + 4U);
	t33                   = (t3 != 0);
	if(t33 == 1)
		goto LAB3;

LAB2:
	t34            = (t6 + 12U);
	*((char**)t34) = t4;
	t35            = (t3 + 0);
	t36            = (t23 + 56U);
	t37            = *((char**)t36);
	t36            = (t37 + 0);
	t38            = (t7 + 12U);
	t25            = *((unsigned int*)t38);
	t25            = (t25 * 1U);
	memcpy(t36, t35, t25);
	t8  = (t23 + 56U);
	t11 = *((char**)t8);
	t8  = (t18 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t11, t9);
	t12                   = (t18 + 0U);
	t10                   = *((int*)t12);
	t19                   = (t18 + 4U);
	t13                   = *((int*)t19);
	t22                   = (t18 + 8U);
	t15                   = *((int*)t22);
	t26                   = (t2 + 0U);
	t27                   = (t26 + 0U);
	*((int*)t27)          = t10;
	t27                   = (t26 + 4U);
	*((int*)t27)          = t13;
	t27                   = (t26 + 8U);
	*((int*)t27)          = t15;
	t16                   = (t13 - t10);
	t14                   = (t16 * t15);
	t14                   = (t14 + 1);
	t27                   = (t26 + 12U);
	*((unsigned int*)t27) = t14;

LAB1:
	return t0;
LAB3:
	*((char**)t32) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_1417944488_1861681735(
    char* t1, unsigned char t2, unsigned char t3, unsigned char t4, unsigned char t5)
{
	char          t7[8];
	unsigned char t0;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t11;
	unsigned char t12;

LAB0:
	t8                     = (t7 + 4U);
	*((unsigned char*)t8)  = t2;
	t9                     = (t7 + 5U);
	*((unsigned char*)t9)  = t3;
	t10                    = (t7 + 6U);
	*((unsigned char*)t10) = t4;
	t11                    = (t7 + 7U);
	*((unsigned char*)t11) = t5;
	t12                    = (t2 == (unsigned char)4);
	if(t12 != 0)
		goto LAB2;

LAB4:
	t12 = (t2 == (unsigned char)0);
	if(t12 != 0)
		goto LAB6;

LAB7:
	t12 = (t2 == (unsigned char)8);
	if(t12 != 0)
		goto LAB9;

LAB10:
	t0 = t2;

LAB1:
	return t0;
LAB2:
	t0 = t3;
	goto LAB1;

LAB3:
	xsi_error(ng1);
	t0 = 0;
	goto LAB1;

LAB5:
	goto LAB3;

LAB6:
	t0 = t4;
	goto LAB1;

LAB8:
	goto LAB3;

LAB9:
	t0 = t5;
	goto LAB1;

LAB11:
	goto LAB3;

LAB12:
	goto LAB3;
}

char* ieee_p_0017514958_sub_2731107355_1861681735(char*         t1,
                                                  char*         t2,
                                                  char*         t3,
                                                  char*         t4,
                                                  unsigned char t5,
                                                  unsigned char t6,
                                                  unsigned char t7)
{
	char          t8[128];
	char          t9[24];
	char          t10[16];
	char          t21[16];
	char*         t0;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	int           t18;
	int           t19;
	unsigned int  t20;
	char*         t22;
	unsigned int  t23;
	int           t24;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned int  t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	unsigned char t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	int           t46;
	int           t47;
	int           t48;
	int           t49;
	int           t50;
	char*         t51;
	char*         t52;
	int           t53;
	char*         t54;
	int           t55;
	int           t56;
	unsigned int  t57;
	unsigned int  t58;
	char*         t59;
	unsigned char t60;
	unsigned char t61;
	char*         t62;
	char*         t63;
	int           t64;
	char*         t65;
	int           t66;
	int           t67;
	unsigned int  t68;
	char*         t69;
	int           t70;
	unsigned int  t71;
	unsigned int  t72;
	char*         t73;

LAB0:
	t11                   = (t4 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 - 1);
	t14                   = (t10 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = t13;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 8U);
	*((int*)t15)          = -1;
	t16                   = (0 - t13);
	t17                   = (t16 * -1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t4 + 12U);
	t17                   = *((unsigned int*)t15);
	t18                   = (t17 - 1);
	t19                   = (0 - t18);
	t20                   = (t19 * -1);
	t20                   = (t20 + 1);
	t20                   = (t20 * 1U);
	t22                   = (t4 + 12U);
	t23                   = *((unsigned int*)t22);
	t24                   = (t23 - 1);
	t25                   = (t21 + 0U);
	t26                   = (t25 + 0U);
	*((int*)t26)          = t24;
	t26                   = (t25 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t25 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t24);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t25 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t8 + 4U);
	t29                   = ((IEEE_P_2592010699) + 4024);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t20);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t21);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t21;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t20;
	t35                   = (t9 + 4U);
	t36                   = (t3 != 0);
	if(t36 == 1)
		goto LAB3;

LAB2:
	t37                    = (t9 + 12U);
	*((char**)t37)         = t4;
	t38                    = (t9 + 20U);
	*((unsigned char*)t38) = t5;
	t39                    = (t9 + 21U);
	*((unsigned char*)t39) = t6;
	t40                    = (t9 + 22U);
	*((unsigned char*)t40) = t7;
	t41                    = (t10 + 8U);
	t42                    = *((int*)t41);
	t43                    = (t10 + 4U);
	t44                    = *((int*)t43);
	t45                    = (t10 + 0U);
	t46                    = *((int*)t45);
	t47                    = t46;
	t48                    = t44;

LAB4:
	t49 = (t48 * t42);
	t50 = (t47 * t42);
	if(t50 <= t49)
		goto LAB5;

LAB7:
	t11 = (t26 + 56U);
	t14 = *((char**)t11);
	t11 = (t21 + 12U);
	t12 = *((unsigned int*)t11);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t14, t12);
	t15                   = (t21 + 0U);
	t13                   = *((int*)t15);
	t22                   = (t21 + 4U);
	t16                   = *((int*)t22);
	t25                   = (t21 + 8U);
	t18                   = *((int*)t25);
	t29                   = (t2 + 0U);
	t30                   = (t29 + 0U);
	*((int*)t30)          = t13;
	t30                   = (t29 + 4U);
	*((int*)t30)          = t16;
	t30                   = (t29 + 8U);
	*((int*)t30)          = t18;
	t19                   = (t16 - t13);
	t17                   = (t19 * t18);
	t17                   = (t17 + 1);
	t30                   = (t29 + 12U);
	*((unsigned int*)t30) = t17;

LAB1:
	return t0;
LAB3:
	*((char**)t35) = t3;
	goto LAB2;

LAB5:
	t51 = (t3 + 0);
	t52 = (t10 + 0U);
	t53 = *((int*)t52);
	t54 = (t10 + 8U);
	t55 = *((int*)t54);
	t56 = (t47 - t53);
	t28 = (t56 * t55);
	t57 = (1U * t28);
	t58 = (0 + t57);
	t59 = (t51 + t58);
	t60 = *((unsigned char*)t59);
	t61 = (t60 == (unsigned char)4);
	if(t61 != 0)
		goto LAB8;

LAB10:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)0);
	if(t60 != 0)
		goto LAB11;

LAB12:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)8);
	if(t60 != 0)
		goto LAB13;

LAB14:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t36;

LAB9:
LAB6:
	if(t47 == t48)
		goto LAB7;

LAB15:
	t13 = (t47 + t42);
	t47 = t13;
	goto LAB4;

LAB8:
	t62 = (t26 + 56U);
	t63 = *((char**)t62);
	t62 = (t21 + 0U);
	t64 = *((int*)t62);
	t65 = (t21 + 8U);
	t66 = *((int*)t65);
	t67 = (t47 - t64);
	t68 = (t67 * t66);
	t69 = (t21 + 4U);
	t70 = *((int*)t69);
	xsi_vhdl_check_range_of_index(t64, t70, t66, t47);
	t71                    = (1U * t68);
	t72                    = (0 + t71);
	t73                    = (t63 + t72);
	*((unsigned char*)t73) = t5;
	goto LAB9;

LAB11:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t6;
	goto LAB9;

LAB13:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t7;
	goto LAB9;

LAB16:;
}

char* ieee_p_0017514958_sub_670926509_1861681735(char*         t1,
                                                 char*         t2,
                                                 char*         t3,
                                                 char*         t4,
                                                 unsigned char t5,
                                                 unsigned char t6,
                                                 unsigned char t7)
{
	char          t8[128];
	char          t9[24];
	char          t10[16];
	char          t21[16];
	char*         t0;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	int           t18;
	int           t19;
	unsigned int  t20;
	char*         t22;
	unsigned int  t23;
	int           t24;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned int  t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	unsigned char t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	int           t46;
	int           t47;
	int           t48;
	int           t49;
	int           t50;
	char*         t51;
	char*         t52;
	int           t53;
	char*         t54;
	int           t55;
	int           t56;
	unsigned int  t57;
	unsigned int  t58;
	char*         t59;
	unsigned char t60;
	unsigned char t61;
	char*         t62;
	char*         t63;
	int           t64;
	char*         t65;
	int           t66;
	int           t67;
	unsigned int  t68;
	char*         t69;
	int           t70;
	unsigned int  t71;
	unsigned int  t72;
	char*         t73;

LAB0:
	t11                   = (t4 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 - 1);
	t14                   = (t10 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = t13;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 8U);
	*((int*)t15)          = -1;
	t16                   = (0 - t13);
	t17                   = (t16 * -1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t4 + 12U);
	t17                   = *((unsigned int*)t15);
	t18                   = (t17 - 1);
	t19                   = (0 - t18);
	t20                   = (t19 * -1);
	t20                   = (t20 + 1);
	t20                   = (t20 * 1U);
	t22                   = (t4 + 12U);
	t23                   = *((unsigned int*)t22);
	t24                   = (t23 - 1);
	t25                   = (t21 + 0U);
	t26                   = (t25 + 0U);
	*((int*)t26)          = t24;
	t26                   = (t25 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t25 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t24);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t25 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t8 + 4U);
	t29                   = ((IEEE_P_2592010699) + 3912);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t20);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t21);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t21;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t20;
	t35                   = (t9 + 4U);
	t36                   = (t3 != 0);
	if(t36 == 1)
		goto LAB3;

LAB2:
	t37                    = (t9 + 12U);
	*((char**)t37)         = t4;
	t38                    = (t9 + 20U);
	*((unsigned char*)t38) = t5;
	t39                    = (t9 + 21U);
	*((unsigned char*)t39) = t6;
	t40                    = (t9 + 22U);
	*((unsigned char*)t40) = t7;
	t41                    = (t10 + 8U);
	t42                    = *((int*)t41);
	t43                    = (t10 + 4U);
	t44                    = *((int*)t43);
	t45                    = (t10 + 0U);
	t46                    = *((int*)t45);
	t47                    = t46;
	t48                    = t44;

LAB4:
	t49 = (t48 * t42);
	t50 = (t47 * t42);
	if(t50 <= t49)
		goto LAB5;

LAB7:
	t11 = (t26 + 56U);
	t14 = *((char**)t11);
	t11 = (t21 + 12U);
	t12 = *((unsigned int*)t11);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t14, t12);
	t15                   = (t21 + 0U);
	t13                   = *((int*)t15);
	t22                   = (t21 + 4U);
	t16                   = *((int*)t22);
	t25                   = (t21 + 8U);
	t18                   = *((int*)t25);
	t29                   = (t2 + 0U);
	t30                   = (t29 + 0U);
	*((int*)t30)          = t13;
	t30                   = (t29 + 4U);
	*((int*)t30)          = t16;
	t30                   = (t29 + 8U);
	*((int*)t30)          = t18;
	t19                   = (t16 - t13);
	t17                   = (t19 * t18);
	t17                   = (t17 + 1);
	t30                   = (t29 + 12U);
	*((unsigned int*)t30) = t17;

LAB1:
	return t0;
LAB3:
	*((char**)t35) = t3;
	goto LAB2;

LAB5:
	t51 = (t3 + 0);
	t52 = (t10 + 0U);
	t53 = *((int*)t52);
	t54 = (t10 + 8U);
	t55 = *((int*)t54);
	t56 = (t47 - t53);
	t28 = (t56 * t55);
	t57 = (1U * t28);
	t58 = (0 + t57);
	t59 = (t51 + t58);
	t60 = *((unsigned char*)t59);
	t61 = (t60 == (unsigned char)4);
	if(t61 != 0)
		goto LAB8;

LAB10:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)0);
	if(t60 != 0)
		goto LAB11;

LAB12:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)8);
	if(t60 != 0)
		goto LAB13;

LAB14:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t36;

LAB9:
LAB6:
	if(t47 == t48)
		goto LAB7;

LAB15:
	t13 = (t47 + t42);
	t47 = t13;
	goto LAB4;

LAB8:
	t62 = (t26 + 56U);
	t63 = *((char**)t62);
	t62 = (t21 + 0U);
	t64 = *((int*)t62);
	t65 = (t21 + 8U);
	t66 = *((int*)t65);
	t67 = (t47 - t64);
	t68 = (t67 * t66);
	t69 = (t21 + 4U);
	t70 = *((int*)t69);
	xsi_vhdl_check_range_of_index(t64, t70, t66, t47);
	t71                    = (1U * t68);
	t72                    = (0 + t71);
	t73                    = (t63 + t72);
	*((unsigned char*)t73) = t5;
	goto LAB9;

LAB11:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t6;
	goto LAB9;

LAB13:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t7;
	goto LAB9;

LAB16:;
}

char* ieee_p_0017514958_sub_1990327881_1861681735(char*         t1,
                                                  char*         t2,
                                                  char*         t3,
                                                  char*         t4,
                                                  unsigned char t5,
                                                  unsigned char t6,
                                                  unsigned char t7)
{
	char          t8[128];
	char          t9[24];
	char          t10[16];
	char          t21[16];
	char*         t0;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	int           t18;
	int           t19;
	unsigned int  t20;
	char*         t22;
	unsigned int  t23;
	int           t24;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned int  t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	unsigned char t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	int           t46;
	int           t47;
	int           t48;
	int           t49;
	int           t50;
	char*         t51;
	char*         t52;
	int           t53;
	char*         t54;
	int           t55;
	int           t56;
	unsigned int  t57;
	unsigned int  t58;
	char*         t59;
	unsigned char t60;
	unsigned char t61;
	char*         t62;
	char*         t63;
	int           t64;
	char*         t65;
	int           t66;
	int           t67;
	unsigned int  t68;
	char*         t69;
	int           t70;
	unsigned int  t71;
	unsigned int  t72;
	char*         t73;

LAB0:
	t11                   = (t4 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 - 1);
	t14                   = (t10 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = t13;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 8U);
	*((int*)t15)          = -1;
	t16                   = (0 - t13);
	t17                   = (t16 * -1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t4 + 12U);
	t17                   = *((unsigned int*)t15);
	t18                   = (t17 - 1);
	t19                   = (0 - t18);
	t20                   = (t19 * -1);
	t20                   = (t20 + 1);
	t20                   = (t20 * 1U);
	t22                   = (t4 + 12U);
	t23                   = *((unsigned int*)t22);
	t24                   = (t23 - 1);
	t25                   = (t21 + 0U);
	t26                   = (t25 + 0U);
	*((int*)t26)          = t24;
	t26                   = (t25 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t25 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t24);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t25 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t8 + 4U);
	t29                   = ((IEEE_P_2592010699) + 4024);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t20);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t21);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t21;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t20;
	t35                   = (t9 + 4U);
	t36                   = (t3 != 0);
	if(t36 == 1)
		goto LAB3;

LAB2:
	t37                    = (t9 + 12U);
	*((char**)t37)         = t4;
	t38                    = (t9 + 20U);
	*((unsigned char*)t38) = t5;
	t39                    = (t9 + 21U);
	*((unsigned char*)t39) = t6;
	t40                    = (t9 + 22U);
	*((unsigned char*)t40) = t7;
	t41                    = (t10 + 8U);
	t42                    = *((int*)t41);
	t43                    = (t10 + 4U);
	t44                    = *((int*)t43);
	t45                    = (t10 + 0U);
	t46                    = *((int*)t45);
	t47                    = t46;
	t48                    = t44;

LAB4:
	t49 = (t48 * t42);
	t50 = (t47 * t42);
	if(t50 <= t49)
		goto LAB5;

LAB7:
	t11 = (t26 + 56U);
	t14 = *((char**)t11);
	t11 = (t21 + 12U);
	t12 = *((unsigned int*)t11);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t14, t12);
	t15                   = (t21 + 0U);
	t13                   = *((int*)t15);
	t22                   = (t21 + 4U);
	t16                   = *((int*)t22);
	t25                   = (t21 + 8U);
	t18                   = *((int*)t25);
	t29                   = (t2 + 0U);
	t30                   = (t29 + 0U);
	*((int*)t30)          = t13;
	t30                   = (t29 + 4U);
	*((int*)t30)          = t16;
	t30                   = (t29 + 8U);
	*((int*)t30)          = t18;
	t19                   = (t16 - t13);
	t17                   = (t19 * t18);
	t17                   = (t17 + 1);
	t30                   = (t29 + 12U);
	*((unsigned int*)t30) = t17;

LAB1:
	return t0;
LAB3:
	*((char**)t35) = t3;
	goto LAB2;

LAB5:
	t51 = (t3 + 0);
	t52 = (t10 + 0U);
	t53 = *((int*)t52);
	t54 = (t10 + 8U);
	t55 = *((int*)t54);
	t56 = (t47 - t53);
	t28 = (t56 * t55);
	t57 = (1U * t28);
	t58 = (0 + t57);
	t59 = (t51 + t58);
	t60 = *((unsigned char*)t59);
	t61 = (t60 == (unsigned char)4);
	if(t61 != 0)
		goto LAB8;

LAB10:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)0);
	if(t60 != 0)
		goto LAB11;

LAB12:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)8);
	if(t60 != 0)
		goto LAB13;

LAB14:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t36;

LAB9:
LAB6:
	if(t47 == t48)
		goto LAB7;

LAB15:
	t13 = (t47 + t42);
	t47 = t13;
	goto LAB4;

LAB8:
	t62 = (t26 + 56U);
	t63 = *((char**)t62);
	t62 = (t21 + 0U);
	t64 = *((int*)t62);
	t65 = (t21 + 8U);
	t66 = *((int*)t65);
	t67 = (t47 - t64);
	t68 = (t67 * t66);
	t69 = (t21 + 4U);
	t70 = *((int*)t69);
	xsi_vhdl_check_range_of_index(t64, t70, t66, t47);
	t71                    = (1U * t68);
	t72                    = (0 + t71);
	t73                    = (t63 + t72);
	*((unsigned char*)t73) = t5;
	goto LAB9;

LAB11:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t6;
	goto LAB9;

LAB13:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t7;
	goto LAB9;

LAB16:;
}

char* ieee_p_0017514958_sub_1003888859_1861681735(char*         t1,
                                                  char*         t2,
                                                  char*         t3,
                                                  char*         t4,
                                                  unsigned char t5,
                                                  unsigned char t6,
                                                  unsigned char t7)
{
	char          t8[128];
	char          t9[24];
	char          t10[16];
	char          t21[16];
	char*         t0;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	int           t18;
	int           t19;
	unsigned int  t20;
	char*         t22;
	unsigned int  t23;
	int           t24;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned int  t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	unsigned char t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	int           t46;
	int           t47;
	int           t48;
	int           t49;
	int           t50;
	char*         t51;
	char*         t52;
	int           t53;
	char*         t54;
	int           t55;
	int           t56;
	unsigned int  t57;
	unsigned int  t58;
	char*         t59;
	unsigned char t60;
	unsigned char t61;
	char*         t62;
	char*         t63;
	int           t64;
	char*         t65;
	int           t66;
	int           t67;
	unsigned int  t68;
	char*         t69;
	int           t70;
	unsigned int  t71;
	unsigned int  t72;
	char*         t73;

LAB0:
	t11                   = (t4 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 - 1);
	t14                   = (t10 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = t13;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 8U);
	*((int*)t15)          = -1;
	t16                   = (0 - t13);
	t17                   = (t16 * -1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t4 + 12U);
	t17                   = *((unsigned int*)t15);
	t18                   = (t17 - 1);
	t19                   = (0 - t18);
	t20                   = (t19 * -1);
	t20                   = (t20 + 1);
	t20                   = (t20 * 1U);
	t22                   = (t4 + 12U);
	t23                   = *((unsigned int*)t22);
	t24                   = (t23 - 1);
	t25                   = (t21 + 0U);
	t26                   = (t25 + 0U);
	*((int*)t26)          = t24;
	t26                   = (t25 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t25 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t24);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t25 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t8 + 4U);
	t29                   = ((IEEE_P_2592010699) + 3912);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t20);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t21);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t21;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t20;
	t35                   = (t9 + 4U);
	t36                   = (t3 != 0);
	if(t36 == 1)
		goto LAB3;

LAB2:
	t37                    = (t9 + 12U);
	*((char**)t37)         = t4;
	t38                    = (t9 + 20U);
	*((unsigned char*)t38) = t5;
	t39                    = (t9 + 21U);
	*((unsigned char*)t39) = t6;
	t40                    = (t9 + 22U);
	*((unsigned char*)t40) = t7;
	t41                    = (t10 + 8U);
	t42                    = *((int*)t41);
	t43                    = (t10 + 4U);
	t44                    = *((int*)t43);
	t45                    = (t10 + 0U);
	t46                    = *((int*)t45);
	t47                    = t46;
	t48                    = t44;

LAB4:
	t49 = (t48 * t42);
	t50 = (t47 * t42);
	if(t50 <= t49)
		goto LAB5;

LAB7:
	t11 = (t26 + 56U);
	t14 = *((char**)t11);
	t11 = (t21 + 12U);
	t12 = *((unsigned int*)t11);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t14, t12);
	t15                   = (t21 + 0U);
	t13                   = *((int*)t15);
	t22                   = (t21 + 4U);
	t16                   = *((int*)t22);
	t25                   = (t21 + 8U);
	t18                   = *((int*)t25);
	t29                   = (t2 + 0U);
	t30                   = (t29 + 0U);
	*((int*)t30)          = t13;
	t30                   = (t29 + 4U);
	*((int*)t30)          = t16;
	t30                   = (t29 + 8U);
	*((int*)t30)          = t18;
	t19                   = (t16 - t13);
	t17                   = (t19 * t18);
	t17                   = (t17 + 1);
	t30                   = (t29 + 12U);
	*((unsigned int*)t30) = t17;

LAB1:
	return t0;
LAB3:
	*((char**)t35) = t3;
	goto LAB2;

LAB5:
	t51 = (t3 + 0);
	t52 = (t10 + 0U);
	t53 = *((int*)t52);
	t54 = (t10 + 8U);
	t55 = *((int*)t54);
	t56 = (t47 - t53);
	t28 = (t56 * t55);
	t57 = (1U * t28);
	t58 = (0 + t57);
	t59 = (t51 + t58);
	t60 = *((unsigned char*)t59);
	t61 = (t60 == (unsigned char)4);
	if(t61 != 0)
		goto LAB8;

LAB10:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)0);
	if(t60 != 0)
		goto LAB11;

LAB12:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t60 = (t36 == (unsigned char)8);
	if(t60 != 0)
		goto LAB13;

LAB14:
	t11 = (t3 + 0);
	t14 = (t10 + 0U);
	t13 = *((int*)t14);
	t15 = (t10 + 8U);
	t16 = *((int*)t15);
	t18 = (t47 - t13);
	t12 = (t18 * t16);
	t17 = (1U * t12);
	t20 = (0 + t17);
	t22 = (t11 + t20);
	t36 = *((unsigned char*)t22);
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t36;

LAB9:
LAB6:
	if(t47 == t48)
		goto LAB7;

LAB15:
	t13 = (t47 + t42);
	t47 = t13;
	goto LAB4;

LAB8:
	t62 = (t26 + 56U);
	t63 = *((char**)t62);
	t62 = (t21 + 0U);
	t64 = *((int*)t62);
	t65 = (t21 + 8U);
	t66 = *((int*)t65);
	t67 = (t47 - t64);
	t68 = (t67 * t66);
	t69 = (t21 + 4U);
	t70 = *((int*)t69);
	xsi_vhdl_check_range_of_index(t64, t70, t66, t47);
	t71                    = (1U * t68);
	t72                    = (0 + t71);
	t73                    = (t63 + t72);
	*((unsigned char*)t73) = t5;
	goto LAB9;

LAB11:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t6;
	goto LAB9;

LAB13:
	t25 = (t26 + 56U);
	t29 = *((char**)t25);
	t25 = (t21 + 0U);
	t19 = *((int*)t25);
	t30 = (t21 + 8U);
	t24 = *((int*)t30);
	t27 = (t47 - t19);
	t23 = (t27 * t24);
	t32 = (t21 + 4U);
	t44 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t19, t44, t24, t47);
	t28                    = (1U * t23);
	t57                    = (0 + t28);
	t33                    = (t29 + t57);
	*((unsigned char*)t33) = t7;
	goto LAB9;

LAB16:;
}

char* ieee_p_0017514958_sub_3238471574_1861681735(char*         t1,
                                                  char*         t2,
                                                  char*         t3,
                                                  char*         t4,
                                                  unsigned char t5,
                                                  unsigned char t6,
                                                  unsigned char t7,
                                                  unsigned char t8,
                                                  unsigned char t9,
                                                  unsigned char t10,
                                                  unsigned char t11,
                                                  unsigned char t12)
{
	char          t13[128];
	char          t14[32];
	char          t20[16];
	char          t34[16];
	char*         t0;
	char*         t15;
	unsigned int  t16;
	int           t17;
	int           t18;
	unsigned int  t19;
	char*         t21;
	unsigned int  t22;
	int           t23;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned int  t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t35;
	int           t36;
	char*         t37;
	char*         t38;
	int           t39;
	unsigned int  t40;
	unsigned char t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t47;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	int           t54;
	char*         t55;
	int           t56;
	int           t57;
	int           t58;
	int           t59;
	int           t60;
	char*         t61;
	char*         t62;
	int           t63;
	char*         t64;
	int           t65;
	int           t66;
	unsigned int  t67;
	unsigned int  t68;
	char*         t69;
	unsigned char t70;
	char*         t71;
	char*         t72;
	char*         t73;
	int           t74;
	char*         t75;
	int           t76;
	int           t77;
	unsigned int  t78;
	char*         t79;
	int           t80;
	unsigned int  t81;
	unsigned int  t82;
	char*         t83;
	static char*  nl0[] = {
	     &&LAB14, &&LAB11, &&LAB9, &&LAB10, &&LAB13, &&LAB12, &&LAB9, &&LAB10, &&LAB15};

LAB0:
	t15                   = (t4 + 12U);
	t16                   = *((unsigned int*)t15);
	t17                   = (t16 - 1);
	t18                   = (0 - t17);
	t19                   = (t18 * -1);
	t19                   = (t19 + 1);
	t19                   = (t19 * 1U);
	t21                   = (t4 + 12U);
	t22                   = *((unsigned int*)t21);
	t23                   = (t22 - 1);
	t24                   = (t20 + 0U);
	t25                   = (t24 + 0U);
	*((int*)t25)          = t23;
	t25                   = (t24 + 4U);
	*((int*)t25)          = 0;
	t25                   = (t24 + 8U);
	*((int*)t25)          = -1;
	t26                   = (0 - t23);
	t27                   = (t26 * -1);
	t27                   = (t27 + 1);
	t25                   = (t24 + 12U);
	*((unsigned int*)t25) = t27;
	t25                   = (t13 + 4U);
	t28                   = ((STD_STANDARD) + 1112);
	t29                   = (t25 + 88U);
	*((char**)t29)        = t28;
	t30                   = (char*)alloca(t19);
	t31                   = (t25 + 56U);
	*((char**)t31)        = t30;
	xsi_type_set_default_value(t28, t30, t20);
	t32                   = (t25 + 64U);
	*((char**)t32)        = t20;
	t33                   = (t25 + 80U);
	*((unsigned int*)t33) = t19;
	t35                   = (t4 + 12U);
	t27                   = *((unsigned int*)t35);
	t36                   = (t27 - 1);
	t37                   = (t34 + 0U);
	t38                   = (t37 + 0U);
	*((int*)t38)          = t36;
	t38                   = (t37 + 4U);
	*((int*)t38)          = 0;
	t38                   = (t37 + 8U);
	*((int*)t38)          = -1;
	t39                   = (0 - t36);
	t40                   = (t39 * -1);
	t40                   = (t40 + 1);
	t38                   = (t37 + 12U);
	*((unsigned int*)t38) = t40;
	t38                   = (t14 + 4U);
	t41                   = (t3 != 0);
	if(t41 == 1)
		goto LAB3;

LAB2:
	t42                    = (t14 + 12U);
	*((char**)t42)         = t4;
	t43                    = (t14 + 20U);
	*((unsigned char*)t43) = t5;
	t44                    = (t14 + 21U);
	*((unsigned char*)t44) = t6;
	t45                    = (t14 + 22U);
	*((unsigned char*)t45) = t7;
	t46                    = (t14 + 23U);
	*((unsigned char*)t46) = t8;
	t47                    = (t14 + 24U);
	*((unsigned char*)t47) = t9;
	t48                    = (t14 + 25U);
	*((unsigned char*)t48) = t10;
	t49                    = (t14 + 26U);
	*((unsigned char*)t49) = t11;
	t50                    = (t14 + 27U);
	*((unsigned char*)t50) = t12;
	t51                    = (t34 + 8U);
	t52                    = *((int*)t51);
	t53                    = (t34 + 4U);
	t54                    = *((int*)t53);
	t55                    = (t34 + 0U);
	t56                    = *((int*)t55);
	t57                    = t56;
	t58                    = t54;

LAB4:
	t59 = (t58 * t52);
	t60 = (t57 * t52);
	if(t60 <= t59)
		goto LAB5;

LAB7:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 12U);
	t16 = *((unsigned int*)t15);
	t16 = (t16 * 1U);
	t0  = xsi_get_transient_memory(t16);
	memcpy(t0, t21, t16);
	t24                   = (t20 + 0U);
	t17                   = *((int*)t24);
	t28                   = (t20 + 4U);
	t18                   = *((int*)t28);
	t29                   = (t20 + 8U);
	t23                   = *((int*)t29);
	t31                   = (t2 + 0U);
	t32                   = (t31 + 0U);
	*((int*)t32)          = t17;
	t32                   = (t31 + 4U);
	*((int*)t32)          = t18;
	t32                   = (t31 + 8U);
	*((int*)t32)          = t23;
	t26                   = (t18 - t17);
	t19                   = (t26 * t23);
	t19                   = (t19 + 1);
	t32                   = (t31 + 12U);
	*((unsigned int*)t32) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t38) = t3;
	goto LAB2;

LAB5:
	t61 = (t3 + 0);
	t62 = (t34 + 0U);
	t63 = *((int*)t62);
	t64 = (t34 + 8U);
	t65 = *((int*)t64);
	t66 = (t57 - t63);
	t40 = (t66 * t65);
	t67 = (1U * t40);
	t68 = (0 + t67);
	t69 = (t61 + t68);
	t70 = *((unsigned char*)t69);
	t71 = (char*)((nl0) + t70);
	goto**((char**)t71);

LAB6:
	if(t57 == t58)
		goto LAB7;

LAB41:
	t17 = (t57 + t52);
	t57 = t17;
	goto LAB4;

LAB8:
	goto LAB6;

LAB9:
	t72 = (t25 + 56U);
	t73 = *((char**)t72);
	t72 = (t20 + 0U);
	t74 = *((int*)t72);
	t75 = (t20 + 8U);
	t76 = *((int*)t75);
	t77 = (t57 - t74);
	t78 = (t77 * t76);
	t79 = (t20 + 4U);
	t80 = *((int*)t79);
	xsi_vhdl_check_range_of_index(t74, t80, t76, t57);
	t81                    = (1U * t78);
	t82                    = (0 + t81);
	t83                    = (t73 + t82);
	*((unsigned char*)t83) = (unsigned char)0;
	goto LAB8;

LAB10:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)1;
	goto LAB8;

LAB11:
	if(t9 != 0)
		goto LAB16;

LAB18:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB19;

LAB20:
LAB17:
	goto LAB8;

LAB12:
	if(t9 != 0)
		goto LAB21;

LAB23:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB24;

LAB25:
LAB22:
	goto LAB8;

LAB13:
	if(t10 != 0)
		goto LAB26;

LAB28:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB29;

LAB30:
LAB27:
	goto LAB8;

LAB14:
	if(t11 != 0)
		goto LAB31;

LAB33:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB34;

LAB35:
LAB32:
	goto LAB8;

LAB15:
	if(t12 != 0)
		goto LAB36;

LAB38:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB39;

LAB40:
LAB37:
	goto LAB8;

LAB16:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t5;
	goto LAB17;

LAB19:
	t15 = (t1 + 4844);
	xsi_report(t15, 37U, (unsigned char)1);
	goto LAB20;

LAB21:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t5;
	goto LAB22;

LAB24:
	t15 = (t1 + 4881);
	xsi_report(t15, 37U, (unsigned char)1);
	goto LAB25;

LAB26:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t6;
	goto LAB27;

LAB29:
	t15 = (t1 + 4918);
	xsi_report(t15, 37U, (unsigned char)1);
	goto LAB30;

LAB31:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t7;
	goto LAB32;

LAB34:
	t15 = (t1 + 4955);
	xsi_report(t15, 37U, (unsigned char)1);
	goto LAB35;

LAB36:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t8;
	goto LAB37;

LAB39:
	t15 = (t1 + 4992);
	xsi_report(t15, 37U, (unsigned char)1);
	goto LAB40;

LAB42:;
}

char* ieee_p_0017514958_sub_3008817869_1861681735(char*         t1,
                                                  char*         t2,
                                                  char*         t3,
                                                  char*         t4,
                                                  unsigned char t5,
                                                  unsigned char t6,
                                                  unsigned char t7,
                                                  unsigned char t8,
                                                  unsigned char t9,
                                                  unsigned char t10,
                                                  unsigned char t11,
                                                  unsigned char t12)
{
	char          t13[128];
	char          t14[32];
	char          t20[16];
	char          t34[16];
	char*         t0;
	char*         t15;
	unsigned int  t16;
	int           t17;
	int           t18;
	unsigned int  t19;
	char*         t21;
	unsigned int  t22;
	int           t23;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned int  t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t35;
	int           t36;
	char*         t37;
	char*         t38;
	int           t39;
	unsigned int  t40;
	unsigned char t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t47;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	int           t54;
	char*         t55;
	int           t56;
	int           t57;
	int           t58;
	int           t59;
	int           t60;
	char*         t61;
	char*         t62;
	int           t63;
	char*         t64;
	int           t65;
	int           t66;
	unsigned int  t67;
	unsigned int  t68;
	char*         t69;
	unsigned char t70;
	char*         t71;
	char*         t72;
	char*         t73;
	int           t74;
	char*         t75;
	int           t76;
	int           t77;
	unsigned int  t78;
	char*         t79;
	int           t80;
	unsigned int  t81;
	unsigned int  t82;
	char*         t83;
	static char*  nl0[] = {
	     &&LAB14, &&LAB11, &&LAB9, &&LAB10, &&LAB13, &&LAB12, &&LAB9, &&LAB10, &&LAB15};

LAB0:
	t15                   = (t4 + 12U);
	t16                   = *((unsigned int*)t15);
	t17                   = (t16 - 1);
	t18                   = (0 - t17);
	t19                   = (t18 * -1);
	t19                   = (t19 + 1);
	t19                   = (t19 * 1U);
	t21                   = (t4 + 12U);
	t22                   = *((unsigned int*)t21);
	t23                   = (t22 - 1);
	t24                   = (t20 + 0U);
	t25                   = (t24 + 0U);
	*((int*)t25)          = t23;
	t25                   = (t24 + 4U);
	*((int*)t25)          = 0;
	t25                   = (t24 + 8U);
	*((int*)t25)          = -1;
	t26                   = (0 - t23);
	t27                   = (t26 * -1);
	t27                   = (t27 + 1);
	t25                   = (t24 + 12U);
	*((unsigned int*)t25) = t27;
	t25                   = (t13 + 4U);
	t28                   = ((STD_STANDARD) + 1112);
	t29                   = (t25 + 88U);
	*((char**)t29)        = t28;
	t30                   = (char*)alloca(t19);
	t31                   = (t25 + 56U);
	*((char**)t31)        = t30;
	xsi_type_set_default_value(t28, t30, t20);
	t32                   = (t25 + 64U);
	*((char**)t32)        = t20;
	t33                   = (t25 + 80U);
	*((unsigned int*)t33) = t19;
	t35                   = (t4 + 12U);
	t27                   = *((unsigned int*)t35);
	t36                   = (t27 - 1);
	t37                   = (t34 + 0U);
	t38                   = (t37 + 0U);
	*((int*)t38)          = t36;
	t38                   = (t37 + 4U);
	*((int*)t38)          = 0;
	t38                   = (t37 + 8U);
	*((int*)t38)          = -1;
	t39                   = (0 - t36);
	t40                   = (t39 * -1);
	t40                   = (t40 + 1);
	t38                   = (t37 + 12U);
	*((unsigned int*)t38) = t40;
	t38                   = (t14 + 4U);
	t41                   = (t3 != 0);
	if(t41 == 1)
		goto LAB3;

LAB2:
	t42                    = (t14 + 12U);
	*((char**)t42)         = t4;
	t43                    = (t14 + 20U);
	*((unsigned char*)t43) = t5;
	t44                    = (t14 + 21U);
	*((unsigned char*)t44) = t6;
	t45                    = (t14 + 22U);
	*((unsigned char*)t45) = t7;
	t46                    = (t14 + 23U);
	*((unsigned char*)t46) = t8;
	t47                    = (t14 + 24U);
	*((unsigned char*)t47) = t9;
	t48                    = (t14 + 25U);
	*((unsigned char*)t48) = t10;
	t49                    = (t14 + 26U);
	*((unsigned char*)t49) = t11;
	t50                    = (t14 + 27U);
	*((unsigned char*)t50) = t12;
	t51                    = (t34 + 8U);
	t52                    = *((int*)t51);
	t53                    = (t34 + 4U);
	t54                    = *((int*)t53);
	t55                    = (t34 + 0U);
	t56                    = *((int*)t55);
	t57                    = t56;
	t58                    = t54;

LAB4:
	t59 = (t58 * t52);
	t60 = (t57 * t52);
	if(t60 <= t59)
		goto LAB5;

LAB7:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 12U);
	t16 = *((unsigned int*)t15);
	t16 = (t16 * 1U);
	t0  = xsi_get_transient_memory(t16);
	memcpy(t0, t21, t16);
	t24                   = (t20 + 0U);
	t17                   = *((int*)t24);
	t28                   = (t20 + 4U);
	t18                   = *((int*)t28);
	t29                   = (t20 + 8U);
	t23                   = *((int*)t29);
	t31                   = (t2 + 0U);
	t32                   = (t31 + 0U);
	*((int*)t32)          = t17;
	t32                   = (t31 + 4U);
	*((int*)t32)          = t18;
	t32                   = (t31 + 8U);
	*((int*)t32)          = t23;
	t26                   = (t18 - t17);
	t19                   = (t26 * t23);
	t19                   = (t19 + 1);
	t32                   = (t31 + 12U);
	*((unsigned int*)t32) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t38) = t3;
	goto LAB2;

LAB5:
	t61 = (t3 + 0);
	t62 = (t34 + 0U);
	t63 = *((int*)t62);
	t64 = (t34 + 8U);
	t65 = *((int*)t64);
	t66 = (t57 - t63);
	t40 = (t66 * t65);
	t67 = (1U * t40);
	t68 = (0 + t67);
	t69 = (t61 + t68);
	t70 = *((unsigned char*)t69);
	t71 = (char*)((nl0) + t70);
	goto**((char**)t71);

LAB6:
	if(t57 == t58)
		goto LAB7;

LAB41:
	t17 = (t57 + t52);
	t57 = t17;
	goto LAB4;

LAB8:
	goto LAB6;

LAB9:
	t72 = (t25 + 56U);
	t73 = *((char**)t72);
	t72 = (t20 + 0U);
	t74 = *((int*)t72);
	t75 = (t20 + 8U);
	t76 = *((int*)t75);
	t77 = (t57 - t74);
	t78 = (t77 * t76);
	t79 = (t20 + 4U);
	t80 = *((int*)t79);
	xsi_vhdl_check_range_of_index(t74, t80, t76, t57);
	t81                    = (1U * t78);
	t82                    = (0 + t81);
	t83                    = (t73 + t82);
	*((unsigned char*)t83) = (unsigned char)0;
	goto LAB8;

LAB10:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)1;
	goto LAB8;

LAB11:
	if(t9 != 0)
		goto LAB16;

LAB18:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB19;

LAB20:
LAB17:
	goto LAB8;

LAB12:
	if(t9 != 0)
		goto LAB21;

LAB23:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB24;

LAB25:
LAB22:
	goto LAB8;

LAB13:
	if(t10 != 0)
		goto LAB26;

LAB28:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB29;

LAB30:
LAB27:
	goto LAB8;

LAB14:
	if(t11 != 0)
		goto LAB31;

LAB33:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB34;

LAB35:
LAB32:
	goto LAB8;

LAB15:
	if(t12 != 0)
		goto LAB36;

LAB38:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB39;

LAB40:
LAB37:
	goto LAB8;

LAB16:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t5;
	goto LAB17;

LAB19:
	t15 = (t1 + 5029);
	xsi_report(t15, 38U, (unsigned char)1);
	goto LAB20;

LAB21:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t5;
	goto LAB22;

LAB24:
	t15 = (t1 + 5067);
	xsi_report(t15, 38U, (unsigned char)1);
	goto LAB25;

LAB26:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t6;
	goto LAB27;

LAB29:
	t15 = (t1 + 5105);
	xsi_report(t15, 38U, (unsigned char)1);
	goto LAB30;

LAB31:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t7;
	goto LAB32;

LAB34:
	t15 = (t1 + 5143);
	xsi_report(t15, 38U, (unsigned char)1);
	goto LAB35;

LAB36:
	t15 = (t25 + 56U);
	t21 = *((char**)t15);
	t15 = (t20 + 0U);
	t17 = *((int*)t15);
	t24 = (t20 + 8U);
	t18 = *((int*)t24);
	t23 = (t57 - t17);
	t16 = (t23 * t18);
	t28 = (t20 + 4U);
	t26 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t17, t26, t18, t57);
	t19                    = (1U * t16);
	t22                    = (0 + t19);
	t29                    = (t21 + t22);
	*((unsigned char*)t29) = t8;
	goto LAB37;

LAB39:
	t15 = (t1 + 5181);
	xsi_report(t15, 38U, (unsigned char)1);
	goto LAB40;

LAB42:;
}

unsigned char ieee_p_0017514958_sub_3317430977_1861681735(char*         t1,
                                                          unsigned char t2,
                                                          unsigned char t3,
                                                          unsigned char t4,
                                                          unsigned char t5,
                                                          unsigned char t6,
                                                          unsigned char t7,
                                                          unsigned char t8,
                                                          unsigned char t9,
                                                          unsigned char t10)
{
	char          t11[128];
	char          t12[16];
	char          t16[8];
	unsigned char t0;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	unsigned char t31;
	static char*  nl0[] = {
	     &&LAB8, &&LAB5, &&LAB3, &&LAB4, &&LAB7, &&LAB6, &&LAB3, &&LAB4, &&LAB9};

LAB0:
	t13            = (t11 + 4U);
	t14            = ((STD_STANDARD) + 96);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	xsi_type_set_default_value(t14, t16, 0);
	t18                    = (t13 + 80U);
	*((unsigned int*)t18)  = 1U;
	t19                    = (t12 + 4U);
	*((unsigned char*)t19) = t2;
	t20                    = (t12 + 5U);
	*((unsigned char*)t20) = t3;
	t21                    = (t12 + 6U);
	*((unsigned char*)t21) = t4;
	t22                    = (t12 + 7U);
	*((unsigned char*)t22) = t5;
	t23                    = (t12 + 8U);
	*((unsigned char*)t23) = t6;
	t24                    = (t12 + 9U);
	*((unsigned char*)t24) = t7;
	t25                    = (t12 + 10U);
	*((unsigned char*)t25) = t8;
	t26                    = (t12 + 11U);
	*((unsigned char*)t26) = t9;
	t27                    = (t12 + 12U);
	*((unsigned char*)t27) = t10;
	t28                    = (char*)((nl0) + t2);
	goto**((char**)t28);

LAB2:
	t14 = (t13 + 56U);
	t15 = *((char**)t14);
	t31 = *((unsigned char*)t15);
	t0  = t31;

LAB1:
	return t0;
LAB3:
	t29                    = (t13 + 56U);
	t30                    = *((char**)t29);
	t29                    = (t30 + 0);
	*((unsigned char*)t29) = (unsigned char)0;
	goto LAB2;

LAB4:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = (unsigned char)1;
	goto LAB2;

LAB5:
	if(t7 != 0)
		goto LAB10;

LAB12:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB13;

LAB14:
LAB11:
	goto LAB2;

LAB6:
	if(t7 != 0)
		goto LAB15;

LAB17:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB18;

LAB19:
LAB16:
	goto LAB2;

LAB7:
	if(t8 != 0)
		goto LAB20;

LAB22:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB23;

LAB24:
LAB21:
	goto LAB2;

LAB8:
	if(t9 != 0)
		goto LAB25;

LAB27:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB28;

LAB29:
LAB26:
	goto LAB2;

LAB9:
	if(t10 != 0)
		goto LAB30;

LAB32:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = (unsigned char)0;
	if((unsigned char)0 == 0)
		goto LAB33;

LAB34:
LAB31:
	goto LAB2;

LAB10:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = t3;
	goto LAB11;

LAB13:
	t14 = (t1 + 5219);
	xsi_report(t14, 24U, (unsigned char)1);
	goto LAB14;

LAB15:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = t3;
	goto LAB16;

LAB18:
	t14 = (t1 + 5243);
	xsi_report(t14, 24U, (unsigned char)1);
	goto LAB19;

LAB20:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = t4;
	goto LAB21;

LAB23:
	t14 = (t1 + 5267);
	xsi_report(t14, 24U, (unsigned char)1);
	goto LAB24;

LAB25:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = t5;
	goto LAB26;

LAB28:
	t14 = (t1 + 5291);
	xsi_report(t14, 24U, (unsigned char)1);
	goto LAB29;

LAB30:
	t14                    = (t13 + 56U);
	t15                    = *((char**)t14);
	t14                    = (t15 + 0);
	*((unsigned char*)t14) = t6;
	goto LAB31;

LAB33:
	t14 = (t1 + 5315);
	xsi_report(t14, 24U, (unsigned char)1);
	goto LAB34;

LAB35:;
}

unsigned char ieee_p_0017514958_sub_2737647089_1861681735(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t9[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t15;
	char*         t16;
	int           t17;
	int           t18;
	int           t19;
	int           t20;
	int           t21;
	int           t22;
	int           t23;
	int           t24;
	int           t25;
	int           t26;
	unsigned int  t27;
	unsigned int  t28;
	unsigned int  t29;
	char*         t30;
	unsigned char t31;
	unsigned char t32;
	char*         t33;
	char*         t34;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((IEEE_P_2592010699) + 3320);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 1U;
	t12                   = (t5 + 4U);
	t13                   = (t2 != 0);
	if(t13 == 1)
		goto LAB3;

LAB2:
	t14                    = (t5 + 12U);
	*((char**)t14)         = t3;
	t15                    = (t6 + 56U);
	t16                    = *((char**)t15);
	t15                    = (t16 + 0);
	*((unsigned char*)t15) = (unsigned char)3;
	t7                     = (t3 + 8U);
	t17                    = *((int*)t7);
	t8                     = (t3 + 4U);
	t18                    = *((int*)t8);
	t10                    = (t3 + 0U);
	t19                    = *((int*)t10);
	t20                    = t19;
	t21                    = t18;

LAB4:
	t22 = (t21 * t17);
	t23 = (t20 * t17);
	if(t23 <= t22)
		goto LAB5;

LAB7:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t13 = *((unsigned char*)t8);
	t0  = t13;

LAB1:
	return t0;
LAB3:
	*((char**)t12) = t2;
	goto LAB2;

LAB5:
	t11 = (t6 + 56U);
	t15 = *((char**)t11);
	t13 = *((unsigned char*)t15);
	t11 = (t3 + 0U);
	t24 = *((int*)t11);
	t16 = (t3 + 8U);
	t25 = *((int*)t16);
	t26 = (t20 - t24);
	t27 = (t26 * t25);
	t28 = (1U * t27);
	t29 = (0 + t28);
	t30 = (t2 + t29);
	t31 = *((unsigned char*)t30);
	t32 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t31);
	t33 = (t6 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	*((unsigned char*)t33) = t32;

LAB6:
	if(t20 == t21)
		goto LAB7;

LAB8:
	t18 = (t20 + t17);
	t20 = t18;
	goto LAB4;

LAB9:;
}

unsigned char ieee_p_0017514958_sub_3592147051_1861681735(char* t1, char* t2, char* t3)
{
	char          t5[24];
	unsigned char t0;
	char*         t6;
	unsigned char t7;
	char*         t8;
	unsigned char t9;
	unsigned char t10;

LAB0:
	t6 = (t5 + 4U);
	t7 = (t2 != 0);
	if(t7 == 1)
		goto LAB3;

LAB2:
	t8            = (t5 + 12U);
	*((char**)t8) = t3;
	t9            = ieee_p_0017514958_sub_2737647089_1861681735(t1, t2, t3);
	t10           = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
	t0            = t10;

LAB1:
	return t0;
LAB3:
	*((char**)t6) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_1739486367_1861681735(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t9[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t15;
	char*         t16;
	int           t17;
	int           t18;
	int           t19;
	int           t20;
	int           t21;
	int           t22;
	int           t23;
	int           t24;
	int           t25;
	int           t26;
	unsigned int  t27;
	unsigned int  t28;
	unsigned int  t29;
	char*         t30;
	unsigned char t31;
	unsigned char t32;
	char*         t33;
	char*         t34;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((IEEE_P_2592010699) + 3320);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 1U;
	t12                   = (t5 + 4U);
	t13                   = (t2 != 0);
	if(t13 == 1)
		goto LAB3;

LAB2:
	t14                    = (t5 + 12U);
	*((char**)t14)         = t3;
	t15                    = (t6 + 56U);
	t16                    = *((char**)t15);
	t15                    = (t16 + 0);
	*((unsigned char*)t15) = (unsigned char)2;
	t7                     = (t3 + 8U);
	t17                    = *((int*)t7);
	t8                     = (t3 + 4U);
	t18                    = *((int*)t8);
	t10                    = (t3 + 0U);
	t19                    = *((int*)t10);
	t20                    = t19;
	t21                    = t18;

LAB4:
	t22 = (t21 * t17);
	t23 = (t20 * t17);
	if(t23 <= t22)
		goto LAB5;

LAB7:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t13 = *((unsigned char*)t8);
	t0  = t13;

LAB1:
	return t0;
LAB3:
	*((char**)t12) = t2;
	goto LAB2;

LAB5:
	t11 = (t6 + 56U);
	t15 = *((char**)t11);
	t13 = *((unsigned char*)t15);
	t11 = (t3 + 0U);
	t24 = *((int*)t11);
	t16 = (t3 + 8U);
	t25 = *((int*)t16);
	t26 = (t20 - t24);
	t27 = (t26 * t25);
	t28 = (1U * t27);
	t29 = (0 + t28);
	t30 = (t2 + t29);
	t31 = *((unsigned char*)t30);
	t32 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t13, t31);
	t33 = (t6 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	*((unsigned char*)t33) = t32;

LAB6:
	if(t20 == t21)
		goto LAB7;

LAB8:
	t18 = (t20 + t17);
	t20 = t18;
	goto LAB4;

LAB9:;
}

unsigned char ieee_p_0017514958_sub_3778645337_1861681735(char* t1, char* t2, char* t3)
{
	char          t5[24];
	unsigned char t0;
	char*         t6;
	unsigned char t7;
	char*         t8;
	unsigned char t9;
	unsigned char t10;

LAB0:
	t6 = (t5 + 4U);
	t7 = (t2 != 0);
	if(t7 == 1)
		goto LAB3;

LAB2:
	t8            = (t5 + 12U);
	*((char**)t8) = t3;
	t9            = ieee_p_0017514958_sub_1739486367_1861681735(t1, t2, t3);
	t10           = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
	t0            = t10;

LAB1:
	return t0;
LAB3:
	*((char**)t6) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_3338352311_1861681735(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t9[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t15;
	char*         t16;
	int           t17;
	int           t18;
	int           t19;
	int           t20;
	int           t21;
	int           t22;
	int           t23;
	int           t24;
	int           t25;
	int           t26;
	unsigned int  t27;
	unsigned int  t28;
	unsigned int  t29;
	char*         t30;
	unsigned char t31;
	unsigned char t32;
	char*         t33;
	char*         t34;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((IEEE_P_2592010699) + 3320);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 1U;
	t12                   = (t5 + 4U);
	t13                   = (t2 != 0);
	if(t13 == 1)
		goto LAB3;

LAB2:
	t14                    = (t5 + 12U);
	*((char**)t14)         = t3;
	t15                    = (t6 + 56U);
	t16                    = *((char**)t15);
	t15                    = (t16 + 0);
	*((unsigned char*)t15) = (unsigned char)2;
	t7                     = (t3 + 8U);
	t17                    = *((int*)t7);
	t8                     = (t3 + 4U);
	t18                    = *((int*)t8);
	t10                    = (t3 + 0U);
	t19                    = *((int*)t10);
	t20                    = t19;
	t21                    = t18;

LAB4:
	t22 = (t21 * t17);
	t23 = (t20 * t17);
	if(t23 <= t22)
		goto LAB5;

LAB7:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t13 = *((unsigned char*)t8);
	t0  = t13;

LAB1:
	return t0;
LAB3:
	*((char**)t12) = t2;
	goto LAB2;

LAB5:
	t11 = (t6 + 56U);
	t15 = *((char**)t11);
	t13 = *((unsigned char*)t15);
	t11 = (t3 + 0U);
	t24 = *((int*)t11);
	t16 = (t3 + 8U);
	t25 = *((int*)t16);
	t26 = (t20 - t24);
	t27 = (t26 * t25);
	t28 = (1U * t27);
	t29 = (0 + t28);
	t30 = (t2 + t29);
	t31 = *((unsigned char*)t30);
	t32 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t13, t31);
	t33 = (t6 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	*((unsigned char*)t33) = t32;

LAB6:
	if(t20 == t21)
		goto LAB7;

LAB8:
	t18 = (t20 + t17);
	t20 = t18;
	goto LAB4;

LAB9:;
}

unsigned char ieee_p_0017514958_sub_706646641_1861681735(char* t1, char* t2, char* t3)
{
	char          t5[24];
	unsigned char t0;
	char*         t6;
	unsigned char t7;
	char*         t8;
	unsigned char t9;
	unsigned char t10;

LAB0:
	t6 = (t5 + 4U);
	t7 = (t2 != 0);
	if(t7 == 1)
		goto LAB3;

LAB2:
	t8            = (t5 + 12U);
	*((char**)t8) = t3;
	t9            = ieee_p_0017514958_sub_3338352311_1861681735(t1, t2, t3);
	t10           = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
	t0            = t10;

LAB1:
	return t0;
LAB3:
	*((char**)t6) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_2981074091_1861681735(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t9[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t15;
	char*         t16;
	int           t17;
	int           t18;
	int           t19;
	int           t20;
	int           t21;
	int           t22;
	int           t23;
	int           t24;
	int           t25;
	int           t26;
	unsigned int  t27;
	unsigned int  t28;
	unsigned int  t29;
	char*         t30;
	unsigned char t31;
	unsigned char t32;
	char*         t33;
	char*         t34;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((IEEE_P_2592010699) + 3320);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 1U;
	t12                   = (t5 + 4U);
	t13                   = (t2 != 0);
	if(t13 == 1)
		goto LAB3;

LAB2:
	t14                    = (t5 + 12U);
	*((char**)t14)         = t3;
	t15                    = (t6 + 56U);
	t16                    = *((char**)t15);
	t15                    = (t16 + 0);
	*((unsigned char*)t15) = (unsigned char)3;
	t7                     = (t3 + 8U);
	t17                    = *((int*)t7);
	t8                     = (t3 + 4U);
	t18                    = *((int*)t8);
	t10                    = (t3 + 0U);
	t19                    = *((int*)t10);
	t20                    = t19;
	t21                    = t18;

LAB4:
	t22 = (t21 * t17);
	t23 = (t20 * t17);
	if(t23 <= t22)
		goto LAB5;

LAB7:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t13 = *((unsigned char*)t8);
	t0  = t13;

LAB1:
	return t0;
LAB3:
	*((char**)t12) = t2;
	goto LAB2;

LAB5:
	t11 = (t6 + 56U);
	t15 = *((char**)t11);
	t13 = *((unsigned char*)t15);
	t11 = (t3 + 0U);
	t24 = *((int*)t11);
	t16 = (t3 + 8U);
	t25 = *((int*)t16);
	t26 = (t20 - t24);
	t27 = (t26 * t25);
	t28 = (1U * t27);
	t29 = (0 + t28);
	t30 = (t2 + t29);
	t31 = *((unsigned char*)t30);
	t32 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t31);
	t33 = (t6 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	*((unsigned char*)t33) = t32;

LAB6:
	if(t20 == t21)
		goto LAB7;

LAB8:
	t18 = (t20 + t17);
	t20 = t18;
	goto LAB4;

LAB9:;
}

unsigned char ieee_p_0017514958_sub_3501910733_1861681735(char* t1, char* t2, char* t3)
{
	char          t5[24];
	unsigned char t0;
	char*         t6;
	unsigned char t7;
	char*         t8;
	unsigned char t9;
	unsigned char t10;

LAB0:
	t6 = (t5 + 4U);
	t7 = (t2 != 0);
	if(t7 == 1)
		goto LAB3;

LAB2:
	t8            = (t5 + 12U);
	*((char**)t8) = t3;
	t9            = ieee_p_0017514958_sub_2981074091_1861681735(t1, t2, t3);
	t10           = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
	t0            = t10;

LAB1:
	return t0;
LAB3:
	*((char**)t6) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_1982913369_1861681735(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t9[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t15;
	char*         t16;
	int           t17;
	int           t18;
	int           t19;
	int           t20;
	int           t21;
	int           t22;
	int           t23;
	int           t24;
	int           t25;
	int           t26;
	unsigned int  t27;
	unsigned int  t28;
	unsigned int  t29;
	char*         t30;
	unsigned char t31;
	unsigned char t32;
	char*         t33;
	char*         t34;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((IEEE_P_2592010699) + 3320);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 1U;
	t12                   = (t5 + 4U);
	t13                   = (t2 != 0);
	if(t13 == 1)
		goto LAB3;

LAB2:
	t14                    = (t5 + 12U);
	*((char**)t14)         = t3;
	t15                    = (t6 + 56U);
	t16                    = *((char**)t15);
	t15                    = (t16 + 0);
	*((unsigned char*)t15) = (unsigned char)2;
	t7                     = (t3 + 8U);
	t17                    = *((int*)t7);
	t8                     = (t3 + 4U);
	t18                    = *((int*)t8);
	t10                    = (t3 + 0U);
	t19                    = *((int*)t10);
	t20                    = t19;
	t21                    = t18;

LAB4:
	t22 = (t21 * t17);
	t23 = (t20 * t17);
	if(t23 <= t22)
		goto LAB5;

LAB7:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t13 = *((unsigned char*)t8);
	t0  = t13;

LAB1:
	return t0;
LAB3:
	*((char**)t12) = t2;
	goto LAB2;

LAB5:
	t11 = (t6 + 56U);
	t15 = *((char**)t11);
	t13 = *((unsigned char*)t15);
	t11 = (t3 + 0U);
	t24 = *((int*)t11);
	t16 = (t3 + 8U);
	t25 = *((int*)t16);
	t26 = (t20 - t24);
	t27 = (t26 * t25);
	t28 = (1U * t27);
	t29 = (0 + t28);
	t30 = (t2 + t29);
	t31 = *((unsigned char*)t30);
	t32 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t13, t31);
	t33 = (t6 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	*((unsigned char*)t33) = t32;

LAB6:
	if(t20 == t21)
		goto LAB7;

LAB8:
	t18 = (t20 + t17);
	t20 = t18;
	goto LAB4;

LAB9:;
}

unsigned char ieee_p_0017514958_sub_3688409019_1861681735(char* t1, char* t2, char* t3)
{
	char          t5[24];
	unsigned char t0;
	char*         t6;
	unsigned char t7;
	char*         t8;
	unsigned char t9;
	unsigned char t10;

LAB0:
	t6 = (t5 + 4U);
	t7 = (t2 != 0);
	if(t7 == 1)
		goto LAB3;

LAB2:
	t8            = (t5 + 12U);
	*((char**)t8) = t3;
	t9            = ieee_p_0017514958_sub_1982913369_1861681735(t1, t2, t3);
	t10           = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
	t0            = t10;

LAB1:
	return t0;
LAB3:
	*((char**)t6) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_3581779313_1861681735(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t9[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t15;
	char*         t16;
	int           t17;
	int           t18;
	int           t19;
	int           t20;
	int           t21;
	int           t22;
	int           t23;
	int           t24;
	int           t25;
	int           t26;
	unsigned int  t27;
	unsigned int  t28;
	unsigned int  t29;
	char*         t30;
	unsigned char t31;
	unsigned char t32;
	char*         t33;
	char*         t34;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((IEEE_P_2592010699) + 3320);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 1U;
	t12                   = (t5 + 4U);
	t13                   = (t2 != 0);
	if(t13 == 1)
		goto LAB3;

LAB2:
	t14                    = (t5 + 12U);
	*((char**)t14)         = t3;
	t15                    = (t6 + 56U);
	t16                    = *((char**)t15);
	t15                    = (t16 + 0);
	*((unsigned char*)t15) = (unsigned char)2;
	t7                     = (t3 + 8U);
	t17                    = *((int*)t7);
	t8                     = (t3 + 4U);
	t18                    = *((int*)t8);
	t10                    = (t3 + 0U);
	t19                    = *((int*)t10);
	t20                    = t19;
	t21                    = t18;

LAB4:
	t22 = (t21 * t17);
	t23 = (t20 * t17);
	if(t23 <= t22)
		goto LAB5;

LAB7:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t13 = *((unsigned char*)t8);
	t0  = t13;

LAB1:
	return t0;
LAB3:
	*((char**)t12) = t2;
	goto LAB2;

LAB5:
	t11 = (t6 + 56U);
	t15 = *((char**)t11);
	t13 = *((unsigned char*)t15);
	t11 = (t3 + 0U);
	t24 = *((int*)t11);
	t16 = (t3 + 8U);
	t25 = *((int*)t16);
	t26 = (t20 - t24);
	t27 = (t26 * t25);
	t28 = (1U * t27);
	t29 = (0 + t28);
	t30 = (t2 + t29);
	t31 = *((unsigned char*)t30);
	t32 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t13, t31);
	t33 = (t6 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	*((unsigned char*)t33) = t32;

LAB6:
	if(t20 == t21)
		goto LAB7;

LAB8:
	t18 = (t20 + t17);
	t20 = t18;
	goto LAB4;

LAB9:;
}

unsigned char ieee_p_0017514958_sub_616410323_1861681735(char* t1, char* t2, char* t3)
{
	char          t5[24];
	unsigned char t0;
	char*         t6;
	unsigned char t7;
	char*         t8;
	unsigned char t9;
	unsigned char t10;

LAB0:
	t6 = (t5 + 4U);
	t7 = (t2 != 0);
	if(t7 == 1)
		goto LAB3;

LAB2:
	t8            = (t5 + 12U);
	*((char**)t8) = t3;
	t9            = ieee_p_0017514958_sub_3581779313_1861681735(t1, t2, t3);
	t10           = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
	t0            = t10;

LAB1:
	return t0;
LAB3:
	*((char**)t6) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_0017514958_sub_4126215983_1861681735(char*         t1,
                                                          unsigned char t2,
                                                          unsigned char t3,
                                                          unsigned char t4)
{
	char          t5[352];
	char          t6[8];
	char          t13[48];
	char          t133[48];
	char          t144[160];
	unsigned char t0;
	char*         t7;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	char*         t18;
	int           t19;
	char*         t20;
	int           t21;
	char*         t22;
	char*         t23;
	unsigned int  t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	unsigned int  t28;
	char*         t29;
	unsigned int  t30;
	char*         t31;
	unsigned int  t32;
	char*         t33;
	unsigned int  t34;
	unsigned int  t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	unsigned int  t39;
	char*         t40;
	unsigned int  t41;
	char*         t42;
	unsigned int  t43;
	char*         t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned int  t48;
	char*         t49;
	unsigned int  t50;
	char*         t51;
	unsigned int  t52;
	char*         t53;
	unsigned int  t54;
	char*         t55;
	unsigned int  t56;
	unsigned int  t57;
	char*         t58;
	unsigned int  t59;
	char*         t60;
	unsigned int  t61;
	char*         t62;
	unsigned int  t63;
	char*         t64;
	unsigned int  t65;
	char*         t66;
	unsigned int  t67;
	unsigned int  t68;
	char*         t69;
	unsigned int  t70;
	char*         t71;
	unsigned int  t72;
	char*         t73;
	unsigned int  t74;
	char*         t75;
	unsigned int  t76;
	char*         t77;
	unsigned int  t78;
	unsigned int  t79;
	char*         t80;
	unsigned int  t81;
	char*         t82;
	unsigned int  t83;
	char*         t84;
	unsigned int  t85;
	char*         t86;
	unsigned int  t87;
	char*         t88;
	unsigned int  t89;
	unsigned int  t90;
	char*         t91;
	unsigned int  t92;
	char*         t93;
	unsigned int  t94;
	char*         t95;
	unsigned int  t96;
	char*         t97;
	unsigned int  t98;
	char*         t99;
	unsigned int  t100;
	unsigned int  t101;
	char*         t102;
	unsigned int  t103;
	char*         t104;
	unsigned int  t105;
	char*         t106;
	unsigned int  t107;
	char*         t108;
	unsigned int  t109;
	char*         t110;
	unsigned int  t111;
	unsigned int  t112;
	char*         t113;
	unsigned int  t114;
	char*         t115;
	unsigned int  t116;
	char*         t117;
	unsigned int  t118;
	char*         t119;
	unsigned int  t120;
	char*         t121;
	unsigned int  t122;
	unsigned int  t123;
	char*         t124;
	unsigned int  t125;
	char*         t126;
	unsigned int  t127;
	char*         t128;
	unsigned int  t129;
	char*         t130;
	unsigned int  t131;
	char*         t132;
	char*         t134;
	char*         t135;
	int           t136;
	unsigned int  t137;
	char*         t138;
	int           t139;
	char*         t140;
	int           t141;
	char*         t142;
	char*         t143;
	char*         t145;
	char*         t146;
	char*         t147;
	char*         t148;
	char*         t149;
	char*         t150;
	char*         t151;
	char*         t152;
	char*         t153;
	char*         t154;
	int           t155;
	unsigned int  t156;
	unsigned int  t157;
	int           t158;
	unsigned int  t159;
	unsigned int  t160;
	unsigned int  t161;
	int           t162;
	unsigned int  t163;
	unsigned int  t164;
	unsigned int  t165;
	unsigned int  t166;
	unsigned char t167;

LAB0:
	t7  = ((IEEE_P_2592010699) + 3320);
	t8  = (t1 + 2504);
	t9  = ((IEEE_P_2592010699) + 3608);
	t10 = ((IEEE_P_2592010699) + 3608);
	t11 = (t5 + 4U);
	xsi_create_unconstr_array_type(t11, ng3, t7, 3, t8, t9, t10);
	t12                   = (t5 + 4U);
	t14                   = (t13 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 9;
	t15                   = (t14 + 8U);
	*((int*)t15)          = 1;
	t16                   = (9 - 0);
	t17                   = (t16 * 1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t13 + 16U);
	t18                   = (t15 + 0U);
	*((int*)t18)          = 0;
	t18                   = (t15 + 4U);
	*((int*)t18)          = 3;
	t18                   = (t15 + 8U);
	*((int*)t18)          = 1;
	t19                   = (3 - 0);
	t17                   = (t19 * 1);
	t17                   = (t17 + 1);
	t18                   = (t15 + 12U);
	*((unsigned int*)t18) = t17;
	t18                   = (t13 + 32U);
	t20                   = (t18 + 0U);
	*((int*)t20)          = 0;
	t20                   = (t18 + 4U);
	*((int*)t20)          = 3;
	t20                   = (t18 + 8U);
	*((int*)t20)          = 1;
	t21                   = (3 - 0);
	t17                   = (t21 * 1);
	t17                   = (t17 + 1);
	t20                   = (t18 + 12U);
	*((unsigned int*)t20) = t17;
	t20                   = (t5 + 116U);
	xsi_create_subtype(t20, ng4, t12, t13, 2);
	t22 = xsi_get_transient_memory(160U);
	memset(t22, 0, 160U);
	t23                     = t22;
	t17                     = (4U * 4U);
	t24                     = (t17 * 1U);
	t25                     = t23;
	t26                     = (4U * 1U);
	t27                     = t25;
	*((unsigned char*)t27)  = (unsigned char)0;
	t27                     = (t27 + 1U);
	*((unsigned char*)t27)  = (unsigned char)0;
	t27                     = (t27 + 1U);
	*((unsigned char*)t27)  = (unsigned char)0;
	t27                     = (t27 + 1U);
	*((unsigned char*)t27)  = (unsigned char)0;
	t25                     = (t25 + t26);
	t28                     = (4U * 1U);
	t29                     = t25;
	*((unsigned char*)t29)  = (unsigned char)0;
	t29                     = (t29 + 1U);
	*((unsigned char*)t29)  = (unsigned char)1;
	t29                     = (t29 + 1U);
	*((unsigned char*)t29)  = (unsigned char)1;
	t29                     = (t29 + 1U);
	*((unsigned char*)t29)  = (unsigned char)1;
	t25                     = (t25 + t28);
	t30                     = (4U * 1U);
	t31                     = t25;
	*((unsigned char*)t31)  = (unsigned char)4;
	t31                     = (t31 + 1U);
	*((unsigned char*)t31)  = (unsigned char)4;
	t31                     = (t31 + 1U);
	*((unsigned char*)t31)  = (unsigned char)4;
	t31                     = (t31 + 1U);
	*((unsigned char*)t31)  = (unsigned char)4;
	t25                     = (t25 + t30);
	t32                     = (4U * 1U);
	t33                     = t25;
	*((unsigned char*)t33)  = (unsigned char)0;
	t33                     = (t33 + 1U);
	*((unsigned char*)t33)  = (unsigned char)1;
	t33                     = (t33 + 1U);
	*((unsigned char*)t33)  = (unsigned char)2;
	t33                     = (t33 + 1U);
	*((unsigned char*)t33)  = (unsigned char)3;
	t23                     = (t23 + t24);
	t34                     = (4U * 4U);
	t35                     = (t34 * 1U);
	t36                     = t23;
	t37                     = (4U * 1U);
	t38                     = t36;
	*((unsigned char*)t38)  = (unsigned char)0;
	t38                     = (t38 + 1U);
	*((unsigned char*)t38)  = (unsigned char)0;
	t38                     = (t38 + 1U);
	*((unsigned char*)t38)  = (unsigned char)0;
	t38                     = (t38 + 1U);
	*((unsigned char*)t38)  = (unsigned char)0;
	t36                     = (t36 + t37);
	t39                     = (4U * 1U);
	t40                     = t36;
	*((unsigned char*)t40)  = (unsigned char)0;
	t40                     = (t40 + 1U);
	*((unsigned char*)t40)  = (unsigned char)1;
	t40                     = (t40 + 1U);
	*((unsigned char*)t40)  = (unsigned char)1;
	t40                     = (t40 + 1U);
	*((unsigned char*)t40)  = (unsigned char)1;
	t36                     = (t36 + t39);
	t41                     = (4U * 1U);
	t42                     = t36;
	*((unsigned char*)t42)  = (unsigned char)4;
	t42                     = (t42 + 1U);
	*((unsigned char*)t42)  = (unsigned char)4;
	t42                     = (t42 + 1U);
	*((unsigned char*)t42)  = (unsigned char)4;
	t42                     = (t42 + 1U);
	*((unsigned char*)t42)  = (unsigned char)4;
	t36                     = (t36 + t41);
	t43                     = (4U * 1U);
	t44                     = t36;
	*((unsigned char*)t44)  = (unsigned char)0;
	t44                     = (t44 + 1U);
	*((unsigned char*)t44)  = (unsigned char)1;
	t44                     = (t44 + 1U);
	*((unsigned char*)t44)  = (unsigned char)2;
	t44                     = (t44 + 1U);
	*((unsigned char*)t44)  = (unsigned char)7;
	t23                     = (t23 + t35);
	t45                     = (4U * 4U);
	t46                     = (t45 * 1U);
	t47                     = t23;
	t48                     = (4U * 1U);
	t49                     = t47;
	*((unsigned char*)t49)  = (unsigned char)0;
	t49                     = (t49 + 1U);
	*((unsigned char*)t49)  = (unsigned char)0;
	t49                     = (t49 + 1U);
	*((unsigned char*)t49)  = (unsigned char)0;
	t49                     = (t49 + 1U);
	*((unsigned char*)t49)  = (unsigned char)0;
	t47                     = (t47 + t48);
	t50                     = (4U * 1U);
	t51                     = t47;
	*((unsigned char*)t51)  = (unsigned char)0;
	t51                     = (t51 + 1U);
	*((unsigned char*)t51)  = (unsigned char)1;
	t51                     = (t51 + 1U);
	*((unsigned char*)t51)  = (unsigned char)1;
	t51                     = (t51 + 1U);
	*((unsigned char*)t51)  = (unsigned char)1;
	t47                     = (t47 + t50);
	t52                     = (4U * 1U);
	t53                     = t47;
	*((unsigned char*)t53)  = (unsigned char)4;
	t53                     = (t53 + 1U);
	*((unsigned char*)t53)  = (unsigned char)4;
	t53                     = (t53 + 1U);
	*((unsigned char*)t53)  = (unsigned char)4;
	t53                     = (t53 + 1U);
	*((unsigned char*)t53)  = (unsigned char)4;
	t47                     = (t47 + t52);
	t54                     = (4U * 1U);
	t55                     = t47;
	*((unsigned char*)t55)  = (unsigned char)0;
	t55                     = (t55 + 1U);
	*((unsigned char*)t55)  = (unsigned char)1;
	t55                     = (t55 + 1U);
	*((unsigned char*)t55)  = (unsigned char)6;
	t55                     = (t55 + 1U);
	*((unsigned char*)t55)  = (unsigned char)3;
	t23                     = (t23 + t46);
	t56                     = (4U * 4U);
	t57                     = (t56 * 1U);
	t58                     = t23;
	t59                     = (4U * 1U);
	t60                     = t58;
	*((unsigned char*)t60)  = (unsigned char)0;
	t60                     = (t60 + 1U);
	*((unsigned char*)t60)  = (unsigned char)0;
	t60                     = (t60 + 1U);
	*((unsigned char*)t60)  = (unsigned char)0;
	t60                     = (t60 + 1U);
	*((unsigned char*)t60)  = (unsigned char)4;
	t58                     = (t58 + t59);
	t61                     = (4U * 1U);
	t62                     = t58;
	*((unsigned char*)t62)  = (unsigned char)0;
	t62                     = (t62 + 1U);
	*((unsigned char*)t62)  = (unsigned char)1;
	t62                     = (t62 + 1U);
	*((unsigned char*)t62)  = (unsigned char)1;
	t62                     = (t62 + 1U);
	*((unsigned char*)t62)  = (unsigned char)4;
	t58                     = (t58 + t61);
	t63                     = (4U * 1U);
	t64                     = t58;
	*((unsigned char*)t64)  = (unsigned char)4;
	t64                     = (t64 + 1U);
	*((unsigned char*)t64)  = (unsigned char)4;
	t64                     = (t64 + 1U);
	*((unsigned char*)t64)  = (unsigned char)4;
	t64                     = (t64 + 1U);
	*((unsigned char*)t64)  = (unsigned char)4;
	t58                     = (t58 + t63);
	t65                     = (4U * 1U);
	t66                     = t58;
	*((unsigned char*)t66)  = (unsigned char)0;
	t66                     = (t66 + 1U);
	*((unsigned char*)t66)  = (unsigned char)1;
	t66                     = (t66 + 1U);
	*((unsigned char*)t66)  = (unsigned char)2;
	t66                     = (t66 + 1U);
	*((unsigned char*)t66)  = (unsigned char)4;
	t23                     = (t23 + t57);
	t67                     = (4U * 4U);
	t68                     = (t67 * 1U);
	t69                     = t23;
	t70                     = (4U * 1U);
	t71                     = t69;
	*((unsigned char*)t71)  = (unsigned char)0;
	t71                     = (t71 + 1U);
	*((unsigned char*)t71)  = (unsigned char)0;
	t71                     = (t71 + 1U);
	*((unsigned char*)t71)  = (unsigned char)0;
	t71                     = (t71 + 1U);
	*((unsigned char*)t71)  = (unsigned char)0;
	t69                     = (t69 + t70);
	t72                     = (4U * 1U);
	t73                     = t69;
	*((unsigned char*)t73)  = (unsigned char)0;
	t73                     = (t73 + 1U);
	*((unsigned char*)t73)  = (unsigned char)1;
	t73                     = (t73 + 1U);
	*((unsigned char*)t73)  = (unsigned char)1;
	t73                     = (t73 + 1U);
	*((unsigned char*)t73)  = (unsigned char)1;
	t69                     = (t69 + t72);
	t74                     = (4U * 1U);
	t75                     = t69;
	*((unsigned char*)t75)  = (unsigned char)4;
	t75                     = (t75 + 1U);
	*((unsigned char*)t75)  = (unsigned char)4;
	t75                     = (t75 + 1U);
	*((unsigned char*)t75)  = (unsigned char)4;
	t75                     = (t75 + 1U);
	*((unsigned char*)t75)  = (unsigned char)4;
	t69                     = (t69 + t74);
	t76                     = (4U * 1U);
	t77                     = t69;
	*((unsigned char*)t77)  = (unsigned char)0;
	t77                     = (t77 + 1U);
	*((unsigned char*)t77)  = (unsigned char)1;
	t77                     = (t77 + 1U);
	*((unsigned char*)t77)  = (unsigned char)4;
	t77                     = (t77 + 1U);
	*((unsigned char*)t77)  = (unsigned char)3;
	t23                     = (t23 + t68);
	t78                     = (4U * 4U);
	t79                     = (t78 * 1U);
	t80                     = t23;
	t81                     = (4U * 1U);
	t82                     = t80;
	*((unsigned char*)t82)  = (unsigned char)0;
	t82                     = (t82 + 1U);
	*((unsigned char*)t82)  = (unsigned char)0;
	t82                     = (t82 + 1U);
	*((unsigned char*)t82)  = (unsigned char)0;
	t82                     = (t82 + 1U);
	*((unsigned char*)t82)  = (unsigned char)0;
	t80                     = (t80 + t81);
	t83                     = (4U * 1U);
	t84                     = t80;
	*((unsigned char*)t84)  = (unsigned char)0;
	t84                     = (t84 + 1U);
	*((unsigned char*)t84)  = (unsigned char)5;
	t84                     = (t84 + 1U);
	*((unsigned char*)t84)  = (unsigned char)5;
	t84                     = (t84 + 1U);
	*((unsigned char*)t84)  = (unsigned char)5;
	t80                     = (t80 + t83);
	t85                     = (4U * 1U);
	t86                     = t80;
	*((unsigned char*)t86)  = (unsigned char)4;
	t86                     = (t86 + 1U);
	*((unsigned char*)t86)  = (unsigned char)4;
	t86                     = (t86 + 1U);
	*((unsigned char*)t86)  = (unsigned char)4;
	t86                     = (t86 + 1U);
	*((unsigned char*)t86)  = (unsigned char)4;
	t80                     = (t80 + t85);
	t87                     = (4U * 1U);
	t88                     = t80;
	*((unsigned char*)t88)  = (unsigned char)0;
	t88                     = (t88 + 1U);
	*((unsigned char*)t88)  = (unsigned char)5;
	t88                     = (t88 + 1U);
	*((unsigned char*)t88)  = (unsigned char)6;
	t88                     = (t88 + 1U);
	*((unsigned char*)t88)  = (unsigned char)7;
	t23                     = (t23 + t79);
	t89                     = (4U * 4U);
	t90                     = (t89 * 1U);
	t91                     = t23;
	t92                     = (4U * 1U);
	t93                     = t91;
	*((unsigned char*)t93)  = (unsigned char)0;
	t93                     = (t93 + 1U);
	*((unsigned char*)t93)  = (unsigned char)0;
	t93                     = (t93 + 1U);
	*((unsigned char*)t93)  = (unsigned char)0;
	t93                     = (t93 + 1U);
	*((unsigned char*)t93)  = (unsigned char)0;
	t91                     = (t91 + t92);
	t94                     = (4U * 1U);
	t95                     = t91;
	*((unsigned char*)t95)  = (unsigned char)0;
	t95                     = (t95 + 1U);
	*((unsigned char*)t95)  = (unsigned char)5;
	t95                     = (t95 + 1U);
	*((unsigned char*)t95)  = (unsigned char)5;
	t95                     = (t95 + 1U);
	*((unsigned char*)t95)  = (unsigned char)4;
	t91                     = (t91 + t94);
	t96                     = (4U * 1U);
	t97                     = t91;
	*((unsigned char*)t97)  = (unsigned char)4;
	t97                     = (t97 + 1U);
	*((unsigned char*)t97)  = (unsigned char)4;
	t97                     = (t97 + 1U);
	*((unsigned char*)t97)  = (unsigned char)4;
	t97                     = (t97 + 1U);
	*((unsigned char*)t97)  = (unsigned char)4;
	t91                     = (t91 + t96);
	t98                     = (4U * 1U);
	t99                     = t91;
	*((unsigned char*)t99)  = (unsigned char)0;
	t99                     = (t99 + 1U);
	*((unsigned char*)t99)  = (unsigned char)5;
	t99                     = (t99 + 1U);
	*((unsigned char*)t99)  = (unsigned char)6;
	t99                     = (t99 + 1U);
	*((unsigned char*)t99)  = (unsigned char)4;
	t23                     = (t23 + t90);
	t100                    = (4U * 4U);
	t101                    = (t100 * 1U);
	t102                    = t23;
	t103                    = (4U * 1U);
	t104                    = t102;
	*((unsigned char*)t104) = (unsigned char)0;
	t104                    = (t104 + 1U);
	*((unsigned char*)t104) = (unsigned char)0;
	t104                    = (t104 + 1U);
	*((unsigned char*)t104) = (unsigned char)0;
	t104                    = (t104 + 1U);
	*((unsigned char*)t104) = (unsigned char)0;
	t102                    = (t102 + t103);
	t105                    = (4U * 1U);
	t106                    = t102;
	*((unsigned char*)t106) = (unsigned char)0;
	t106                    = (t106 + 1U);
	*((unsigned char*)t106) = (unsigned char)5;
	t106                    = (t106 + 1U);
	*((unsigned char*)t106) = (unsigned char)5;
	t106                    = (t106 + 1U);
	*((unsigned char*)t106) = (unsigned char)5;
	t102                    = (t102 + t105);
	t107                    = (4U * 1U);
	t108                    = t102;
	*((unsigned char*)t108) = (unsigned char)4;
	t108                    = (t108 + 1U);
	*((unsigned char*)t108) = (unsigned char)4;
	t108                    = (t108 + 1U);
	*((unsigned char*)t108) = (unsigned char)4;
	t108                    = (t108 + 1U);
	*((unsigned char*)t108) = (unsigned char)4;
	t102                    = (t102 + t107);
	t109                    = (4U * 1U);
	t110                    = t102;
	*((unsigned char*)t110) = (unsigned char)0;
	t110                    = (t110 + 1U);
	*((unsigned char*)t110) = (unsigned char)5;
	t110                    = (t110 + 1U);
	*((unsigned char*)t110) = (unsigned char)4;
	t110                    = (t110 + 1U);
	*((unsigned char*)t110) = (unsigned char)7;
	t23                     = (t23 + t101);
	t111                    = (4U * 4U);
	t112                    = (t111 * 1U);
	t113                    = t23;
	t114                    = (4U * 1U);
	t115                    = t113;
	*((unsigned char*)t115) = (unsigned char)0;
	t115                    = (t115 + 1U);
	*((unsigned char*)t115) = (unsigned char)0;
	t115                    = (t115 + 1U);
	*((unsigned char*)t115) = (unsigned char)0;
	t115                    = (t115 + 1U);
	*((unsigned char*)t115) = (unsigned char)0;
	t113                    = (t113 + t114);
	t116                    = (4U * 1U);
	t117                    = t113;
	*((unsigned char*)t117) = (unsigned char)0;
	t117                    = (t117 + 1U);
	*((unsigned char*)t117) = (unsigned char)5;
	t117                    = (t117 + 1U);
	*((unsigned char*)t117) = (unsigned char)5;
	t117                    = (t117 + 1U);
	*((unsigned char*)t117) = (unsigned char)5;
	t113                    = (t113 + t116);
	t118                    = (4U * 1U);
	t119                    = t113;
	*((unsigned char*)t119) = (unsigned char)4;
	t119                    = (t119 + 1U);
	*((unsigned char*)t119) = (unsigned char)4;
	t119                    = (t119 + 1U);
	*((unsigned char*)t119) = (unsigned char)4;
	t119                    = (t119 + 1U);
	*((unsigned char*)t119) = (unsigned char)4;
	t113                    = (t113 + t118);
	t120                    = (4U * 1U);
	t121                    = t113;
	*((unsigned char*)t121) = (unsigned char)0;
	t121                    = (t121 + 1U);
	*((unsigned char*)t121) = (unsigned char)5;
	t121                    = (t121 + 1U);
	*((unsigned char*)t121) = (unsigned char)2;
	t121                    = (t121 + 1U);
	*((unsigned char*)t121) = (unsigned char)7;
	t23                     = (t23 + t112);
	t122                    = (4U * 4U);
	t123                    = (t122 * 1U);
	t124                    = t23;
	t125                    = (4U * 1U);
	t126                    = t124;
	*((unsigned char*)t126) = (unsigned char)0;
	t126                    = (t126 + 1U);
	*((unsigned char*)t126) = (unsigned char)0;
	t126                    = (t126 + 1U);
	*((unsigned char*)t126) = (unsigned char)0;
	t126                    = (t126 + 1U);
	*((unsigned char*)t126) = (unsigned char)0;
	t124                    = (t124 + t125);
	t127                    = (4U * 1U);
	t128                    = t124;
	*((unsigned char*)t128) = (unsigned char)0;
	t128                    = (t128 + 1U);
	*((unsigned char*)t128) = (unsigned char)5;
	t128                    = (t128 + 1U);
	*((unsigned char*)t128) = (unsigned char)5;
	t128                    = (t128 + 1U);
	*((unsigned char*)t128) = (unsigned char)5;
	t124                    = (t124 + t127);
	t129                    = (4U * 1U);
	t130                    = t124;
	*((unsigned char*)t130) = (unsigned char)4;
	t130                    = (t130 + 1U);
	*((unsigned char*)t130) = (unsigned char)4;
	t130                    = (t130 + 1U);
	*((unsigned char*)t130) = (unsigned char)4;
	t130                    = (t130 + 1U);
	*((unsigned char*)t130) = (unsigned char)4;
	t124                    = (t124 + t129);
	t131                    = (4U * 1U);
	t132                    = t124;
	*((unsigned char*)t132) = (unsigned char)0;
	t132                    = (t132 + 1U);
	*((unsigned char*)t132) = (unsigned char)5;
	t132                    = (t132 + 1U);
	*((unsigned char*)t132) = (unsigned char)6;
	t132                    = (t132 + 1U);
	*((unsigned char*)t132) = (unsigned char)3;
	t134                    = (t133 + 0U);
	t135                    = (t134 + 0U);
	*((int*)t135)           = 0;
	t135                    = (t134 + 4U);
	*((int*)t135)           = 9;
	t135                    = (t134 + 8U);
	*((int*)t135)           = 1;
	t136                    = (9 - 0);
	t137                    = (t136 * 1);
	t137                    = (t137 + 1);
	t135                    = (t134 + 12U);
	*((unsigned int*)t135)  = t137;
	t135                    = (t133 + 16U);
	t138                    = (t135 + 0U);
	*((int*)t138)           = 0;
	t138                    = (t135 + 4U);
	*((int*)t138)           = 3;
	t138                    = (t135 + 8U);
	*((int*)t138)           = 1;
	t139                    = (3 - 0);
	t137                    = (t139 * 1);
	t137                    = (t137 + 1);
	t138                    = (t135 + 12U);
	*((unsigned int*)t138)  = t137;
	t138                    = (t133 + 32U);
	t140                    = (t138 + 0U);
	*((int*)t140)           = 0;
	t140                    = (t138 + 4U);
	*((int*)t140)           = 3;
	t140                    = (t138 + 8U);
	*((int*)t140)           = 1;
	t141                    = (3 - 0);
	t137                    = (t141 * 1);
	t137                    = (t137 + 1);
	t140                    = (t138 + 12U);
	*((unsigned int*)t140)  = t137;
	t140                    = (t5 + 228U);
	t142                    = (t5 + 116U);
	t143                    = (t140 + 88U);
	*((char**)t143)         = t142;
	t145                    = (t140 + 56U);
	*((char**)t145)         = t144;
	memcpy(t144, t22, 160U);
	t146                    = (t140 + 64U);
	t147                    = (t142 + 80U);
	t148                    = *((char**)t147);
	*((char**)t146)         = t148;
	t149                    = (t140 + 80U);
	*((unsigned int*)t149)  = 160U;
	t150                    = (t6 + 4U);
	*((unsigned char*)t150) = t2;
	t151                    = (t6 + 5U);
	*((unsigned char*)t151) = t3;
	t152                    = (t6 + 6U);
	*((unsigned char*)t152) = t4;
	t153                    = (t140 + 56U);
	t154                    = *((char**)t153);
	t155                    = (t4 - 0);
	t137                    = (t155 * 1);
	t156                    = (t137 * 4U);
	t157                    = (t156 * 4U);
	t158                    = (t3 - 0);
	t159                    = (t158 * 1);
	t160                    = (t159 * 4U);
	t161                    = (t157 + t160);
	t162                    = (t2 - 0);
	t163                    = (t162 * 1);
	t164                    = (t161 + t163);
	t165                    = (1U * t164);
	t166                    = (0 + t165);
	t153                    = (t154 + t166);
	t167                    = *((unsigned char*)t153);
	t0                      = t167;

LAB1:
	t7 = (t5 + 116U);
	xsi_delete_type(t7, 2);
	return t0;
LAB2:;
}

unsigned char ieee_p_0017514958_sub_450477564_1861681735(char*         t1,
                                                         unsigned char t2,
                                                         unsigned char t3,
                                                         unsigned char t4)
{
	char          t5[352];
	char          t6[8];
	char          t13[48];
	char          t133[48];
	char          t144[160];
	unsigned char t0;
	char*         t7;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	char*         t18;
	int           t19;
	char*         t20;
	int           t21;
	char*         t22;
	char*         t23;
	unsigned int  t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	unsigned int  t28;
	char*         t29;
	unsigned int  t30;
	char*         t31;
	unsigned int  t32;
	char*         t33;
	unsigned int  t34;
	unsigned int  t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	unsigned int  t39;
	char*         t40;
	unsigned int  t41;
	char*         t42;
	unsigned int  t43;
	char*         t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned int  t48;
	char*         t49;
	unsigned int  t50;
	char*         t51;
	unsigned int  t52;
	char*         t53;
	unsigned int  t54;
	char*         t55;
	unsigned int  t56;
	unsigned int  t57;
	char*         t58;
	unsigned int  t59;
	char*         t60;
	unsigned int  t61;
	char*         t62;
	unsigned int  t63;
	char*         t64;
	unsigned int  t65;
	char*         t66;
	unsigned int  t67;
	unsigned int  t68;
	char*         t69;
	unsigned int  t70;
	char*         t71;
	unsigned int  t72;
	char*         t73;
	unsigned int  t74;
	char*         t75;
	unsigned int  t76;
	char*         t77;
	unsigned int  t78;
	unsigned int  t79;
	char*         t80;
	unsigned int  t81;
	char*         t82;
	unsigned int  t83;
	char*         t84;
	unsigned int  t85;
	char*         t86;
	unsigned int  t87;
	char*         t88;
	unsigned int  t89;
	unsigned int  t90;
	char*         t91;
	unsigned int  t92;
	char*         t93;
	unsigned int  t94;
	char*         t95;
	unsigned int  t96;
	char*         t97;
	unsigned int  t98;
	char*         t99;
	unsigned int  t100;
	unsigned int  t101;
	char*         t102;
	unsigned int  t103;
	char*         t104;
	unsigned int  t105;
	char*         t106;
	unsigned int  t107;
	char*         t108;
	unsigned int  t109;
	char*         t110;
	unsigned int  t111;
	unsigned int  t112;
	char*         t113;
	unsigned int  t114;
	char*         t115;
	unsigned int  t116;
	char*         t117;
	unsigned int  t118;
	char*         t119;
	unsigned int  t120;
	char*         t121;
	unsigned int  t122;
	unsigned int  t123;
	char*         t124;
	unsigned int  t125;
	char*         t126;
	unsigned int  t127;
	char*         t128;
	unsigned int  t129;
	char*         t130;
	unsigned int  t131;
	char*         t132;
	char*         t134;
	char*         t135;
	int           t136;
	unsigned int  t137;
	char*         t138;
	int           t139;
	char*         t140;
	int           t141;
	char*         t142;
	char*         t143;
	char*         t145;
	char*         t146;
	char*         t147;
	char*         t148;
	char*         t149;
	char*         t150;
	char*         t151;
	char*         t152;
	char*         t153;
	char*         t154;
	int           t155;
	unsigned int  t156;
	unsigned int  t157;
	int           t158;
	unsigned int  t159;
	unsigned int  t160;
	unsigned int  t161;
	int           t162;
	unsigned int  t163;
	unsigned int  t164;
	unsigned int  t165;
	unsigned int  t166;
	unsigned char t167;

LAB0:
	t7  = ((IEEE_P_2592010699) + 3320);
	t8  = (t1 + 2504);
	t9  = ((IEEE_P_2592010699) + 3608);
	t10 = ((IEEE_P_2592010699) + 3608);
	t11 = (t5 + 4U);
	xsi_create_unconstr_array_type(t11, ng3, t7, 3, t8, t9, t10);
	t12                   = (t5 + 4U);
	t14                   = (t13 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 9;
	t15                   = (t14 + 8U);
	*((int*)t15)          = 1;
	t16                   = (9 - 0);
	t17                   = (t16 * 1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t13 + 16U);
	t18                   = (t15 + 0U);
	*((int*)t18)          = 0;
	t18                   = (t15 + 4U);
	*((int*)t18)          = 3;
	t18                   = (t15 + 8U);
	*((int*)t18)          = 1;
	t19                   = (3 - 0);
	t17                   = (t19 * 1);
	t17                   = (t17 + 1);
	t18                   = (t15 + 12U);
	*((unsigned int*)t18) = t17;
	t18                   = (t13 + 32U);
	t20                   = (t18 + 0U);
	*((int*)t20)          = 0;
	t20                   = (t18 + 4U);
	*((int*)t20)          = 3;
	t20                   = (t18 + 8U);
	*((int*)t20)          = 1;
	t21                   = (3 - 0);
	t17                   = (t21 * 1);
	t17                   = (t17 + 1);
	t20                   = (t18 + 12U);
	*((unsigned int*)t20) = t17;
	t20                   = (t5 + 116U);
	xsi_create_subtype(t20, ng4, t12, t13, 2);
	t22 = xsi_get_transient_memory(160U);
	memset(t22, 0, 160U);
	t23                     = t22;
	t17                     = (4U * 4U);
	t24                     = (t17 * 1U);
	t25                     = t23;
	t26                     = (4U * 1U);
	t27                     = t25;
	*((unsigned char*)t27)  = (unsigned char)0;
	t27                     = (t27 + 1U);
	*((unsigned char*)t27)  = (unsigned char)0;
	t27                     = (t27 + 1U);
	*((unsigned char*)t27)  = (unsigned char)0;
	t27                     = (t27 + 1U);
	*((unsigned char*)t27)  = (unsigned char)0;
	t25                     = (t25 + t26);
	t28                     = (4U * 1U);
	t29                     = t25;
	*((unsigned char*)t29)  = (unsigned char)0;
	t29                     = (t29 + 1U);
	*((unsigned char*)t29)  = (unsigned char)1;
	t29                     = (t29 + 1U);
	*((unsigned char*)t29)  = (unsigned char)1;
	t29                     = (t29 + 1U);
	*((unsigned char*)t29)  = (unsigned char)1;
	t25                     = (t25 + t28);
	t30                     = (4U * 1U);
	t31                     = t25;
	*((unsigned char*)t31)  = (unsigned char)0;
	t31                     = (t31 + 1U);
	*((unsigned char*)t31)  = (unsigned char)1;
	t31                     = (t31 + 1U);
	*((unsigned char*)t31)  = (unsigned char)2;
	t31                     = (t31 + 1U);
	*((unsigned char*)t31)  = (unsigned char)3;
	t25                     = (t25 + t30);
	t32                     = (4U * 1U);
	t33                     = t25;
	*((unsigned char*)t33)  = (unsigned char)4;
	t33                     = (t33 + 1U);
	*((unsigned char*)t33)  = (unsigned char)4;
	t33                     = (t33 + 1U);
	*((unsigned char*)t33)  = (unsigned char)4;
	t33                     = (t33 + 1U);
	*((unsigned char*)t33)  = (unsigned char)4;
	t23                     = (t23 + t24);
	t34                     = (4U * 4U);
	t35                     = (t34 * 1U);
	t36                     = t23;
	t37                     = (4U * 1U);
	t38                     = t36;
	*((unsigned char*)t38)  = (unsigned char)0;
	t38                     = (t38 + 1U);
	*((unsigned char*)t38)  = (unsigned char)0;
	t38                     = (t38 + 1U);
	*((unsigned char*)t38)  = (unsigned char)0;
	t38                     = (t38 + 1U);
	*((unsigned char*)t38)  = (unsigned char)0;
	t36                     = (t36 + t37);
	t39                     = (4U * 1U);
	t40                     = t36;
	*((unsigned char*)t40)  = (unsigned char)0;
	t40                     = (t40 + 1U);
	*((unsigned char*)t40)  = (unsigned char)1;
	t40                     = (t40 + 1U);
	*((unsigned char*)t40)  = (unsigned char)1;
	t40                     = (t40 + 1U);
	*((unsigned char*)t40)  = (unsigned char)1;
	t36                     = (t36 + t39);
	t41                     = (4U * 1U);
	t42                     = t36;
	*((unsigned char*)t42)  = (unsigned char)0;
	t42                     = (t42 + 1U);
	*((unsigned char*)t42)  = (unsigned char)1;
	t42                     = (t42 + 1U);
	*((unsigned char*)t42)  = (unsigned char)2;
	t42                     = (t42 + 1U);
	*((unsigned char*)t42)  = (unsigned char)7;
	t36                     = (t36 + t41);
	t43                     = (4U * 1U);
	t44                     = t36;
	*((unsigned char*)t44)  = (unsigned char)4;
	t44                     = (t44 + 1U);
	*((unsigned char*)t44)  = (unsigned char)4;
	t44                     = (t44 + 1U);
	*((unsigned char*)t44)  = (unsigned char)4;
	t44                     = (t44 + 1U);
	*((unsigned char*)t44)  = (unsigned char)4;
	t23                     = (t23 + t35);
	t45                     = (4U * 4U);
	t46                     = (t45 * 1U);
	t47                     = t23;
	t48                     = (4U * 1U);
	t49                     = t47;
	*((unsigned char*)t49)  = (unsigned char)0;
	t49                     = (t49 + 1U);
	*((unsigned char*)t49)  = (unsigned char)0;
	t49                     = (t49 + 1U);
	*((unsigned char*)t49)  = (unsigned char)0;
	t49                     = (t49 + 1U);
	*((unsigned char*)t49)  = (unsigned char)0;
	t47                     = (t47 + t48);
	t50                     = (4U * 1U);
	t51                     = t47;
	*((unsigned char*)t51)  = (unsigned char)0;
	t51                     = (t51 + 1U);
	*((unsigned char*)t51)  = (unsigned char)1;
	t51                     = (t51 + 1U);
	*((unsigned char*)t51)  = (unsigned char)1;
	t51                     = (t51 + 1U);
	*((unsigned char*)t51)  = (unsigned char)1;
	t47                     = (t47 + t50);
	t52                     = (4U * 1U);
	t53                     = t47;
	*((unsigned char*)t53)  = (unsigned char)0;
	t53                     = (t53 + 1U);
	*((unsigned char*)t53)  = (unsigned char)1;
	t53                     = (t53 + 1U);
	*((unsigned char*)t53)  = (unsigned char)6;
	t53                     = (t53 + 1U);
	*((unsigned char*)t53)  = (unsigned char)3;
	t47                     = (t47 + t52);
	t54                     = (4U * 1U);
	t55                     = t47;
	*((unsigned char*)t55)  = (unsigned char)4;
	t55                     = (t55 + 1U);
	*((unsigned char*)t55)  = (unsigned char)4;
	t55                     = (t55 + 1U);
	*((unsigned char*)t55)  = (unsigned char)4;
	t55                     = (t55 + 1U);
	*((unsigned char*)t55)  = (unsigned char)4;
	t23                     = (t23 + t46);
	t56                     = (4U * 4U);
	t57                     = (t56 * 1U);
	t58                     = t23;
	t59                     = (4U * 1U);
	t60                     = t58;
	*((unsigned char*)t60)  = (unsigned char)0;
	t60                     = (t60 + 1U);
	*((unsigned char*)t60)  = (unsigned char)0;
	t60                     = (t60 + 1U);
	*((unsigned char*)t60)  = (unsigned char)0;
	t60                     = (t60 + 1U);
	*((unsigned char*)t60)  = (unsigned char)4;
	t58                     = (t58 + t59);
	t61                     = (4U * 1U);
	t62                     = t58;
	*((unsigned char*)t62)  = (unsigned char)0;
	t62                     = (t62 + 1U);
	*((unsigned char*)t62)  = (unsigned char)1;
	t62                     = (t62 + 1U);
	*((unsigned char*)t62)  = (unsigned char)1;
	t62                     = (t62 + 1U);
	*((unsigned char*)t62)  = (unsigned char)4;
	t58                     = (t58 + t61);
	t63                     = (4U * 1U);
	t64                     = t58;
	*((unsigned char*)t64)  = (unsigned char)0;
	t64                     = (t64 + 1U);
	*((unsigned char*)t64)  = (unsigned char)1;
	t64                     = (t64 + 1U);
	*((unsigned char*)t64)  = (unsigned char)2;
	t64                     = (t64 + 1U);
	*((unsigned char*)t64)  = (unsigned char)4;
	t58                     = (t58 + t63);
	t65                     = (4U * 1U);
	t66                     = t58;
	*((unsigned char*)t66)  = (unsigned char)4;
	t66                     = (t66 + 1U);
	*((unsigned char*)t66)  = (unsigned char)4;
	t66                     = (t66 + 1U);
	*((unsigned char*)t66)  = (unsigned char)4;
	t66                     = (t66 + 1U);
	*((unsigned char*)t66)  = (unsigned char)4;
	t23                     = (t23 + t57);
	t67                     = (4U * 4U);
	t68                     = (t67 * 1U);
	t69                     = t23;
	t70                     = (4U * 1U);
	t71                     = t69;
	*((unsigned char*)t71)  = (unsigned char)0;
	t71                     = (t71 + 1U);
	*((unsigned char*)t71)  = (unsigned char)0;
	t71                     = (t71 + 1U);
	*((unsigned char*)t71)  = (unsigned char)0;
	t71                     = (t71 + 1U);
	*((unsigned char*)t71)  = (unsigned char)0;
	t69                     = (t69 + t70);
	t72                     = (4U * 1U);
	t73                     = t69;
	*((unsigned char*)t73)  = (unsigned char)0;
	t73                     = (t73 + 1U);
	*((unsigned char*)t73)  = (unsigned char)1;
	t73                     = (t73 + 1U);
	*((unsigned char*)t73)  = (unsigned char)1;
	t73                     = (t73 + 1U);
	*((unsigned char*)t73)  = (unsigned char)1;
	t69                     = (t69 + t72);
	t74                     = (4U * 1U);
	t75                     = t69;
	*((unsigned char*)t75)  = (unsigned char)0;
	t75                     = (t75 + 1U);
	*((unsigned char*)t75)  = (unsigned char)1;
	t75                     = (t75 + 1U);
	*((unsigned char*)t75)  = (unsigned char)4;
	t75                     = (t75 + 1U);
	*((unsigned char*)t75)  = (unsigned char)3;
	t69                     = (t69 + t74);
	t76                     = (4U * 1U);
	t77                     = t69;
	*((unsigned char*)t77)  = (unsigned char)4;
	t77                     = (t77 + 1U);
	*((unsigned char*)t77)  = (unsigned char)4;
	t77                     = (t77 + 1U);
	*((unsigned char*)t77)  = (unsigned char)4;
	t77                     = (t77 + 1U);
	*((unsigned char*)t77)  = (unsigned char)4;
	t23                     = (t23 + t68);
	t78                     = (4U * 4U);
	t79                     = (t78 * 1U);
	t80                     = t23;
	t81                     = (4U * 1U);
	t82                     = t80;
	*((unsigned char*)t82)  = (unsigned char)0;
	t82                     = (t82 + 1U);
	*((unsigned char*)t82)  = (unsigned char)0;
	t82                     = (t82 + 1U);
	*((unsigned char*)t82)  = (unsigned char)0;
	t82                     = (t82 + 1U);
	*((unsigned char*)t82)  = (unsigned char)0;
	t80                     = (t80 + t81);
	t83                     = (4U * 1U);
	t84                     = t80;
	*((unsigned char*)t84)  = (unsigned char)0;
	t84                     = (t84 + 1U);
	*((unsigned char*)t84)  = (unsigned char)5;
	t84                     = (t84 + 1U);
	*((unsigned char*)t84)  = (unsigned char)5;
	t84                     = (t84 + 1U);
	*((unsigned char*)t84)  = (unsigned char)5;
	t80                     = (t80 + t83);
	t85                     = (4U * 1U);
	t86                     = t80;
	*((unsigned char*)t86)  = (unsigned char)0;
	t86                     = (t86 + 1U);
	*((unsigned char*)t86)  = (unsigned char)5;
	t86                     = (t86 + 1U);
	*((unsigned char*)t86)  = (unsigned char)6;
	t86                     = (t86 + 1U);
	*((unsigned char*)t86)  = (unsigned char)7;
	t80                     = (t80 + t85);
	t87                     = (4U * 1U);
	t88                     = t80;
	*((unsigned char*)t88)  = (unsigned char)4;
	t88                     = (t88 + 1U);
	*((unsigned char*)t88)  = (unsigned char)4;
	t88                     = (t88 + 1U);
	*((unsigned char*)t88)  = (unsigned char)4;
	t88                     = (t88 + 1U);
	*((unsigned char*)t88)  = (unsigned char)4;
	t23                     = (t23 + t79);
	t89                     = (4U * 4U);
	t90                     = (t89 * 1U);
	t91                     = t23;
	t92                     = (4U * 1U);
	t93                     = t91;
	*((unsigned char*)t93)  = (unsigned char)0;
	t93                     = (t93 + 1U);
	*((unsigned char*)t93)  = (unsigned char)0;
	t93                     = (t93 + 1U);
	*((unsigned char*)t93)  = (unsigned char)0;
	t93                     = (t93 + 1U);
	*((unsigned char*)t93)  = (unsigned char)0;
	t91                     = (t91 + t92);
	t94                     = (4U * 1U);
	t95                     = t91;
	*((unsigned char*)t95)  = (unsigned char)0;
	t95                     = (t95 + 1U);
	*((unsigned char*)t95)  = (unsigned char)5;
	t95                     = (t95 + 1U);
	*((unsigned char*)t95)  = (unsigned char)5;
	t95                     = (t95 + 1U);
	*((unsigned char*)t95)  = (unsigned char)4;
	t91                     = (t91 + t94);
	t96                     = (4U * 1U);
	t97                     = t91;
	*((unsigned char*)t97)  = (unsigned char)0;
	t97                     = (t97 + 1U);
	*((unsigned char*)t97)  = (unsigned char)5;
	t97                     = (t97 + 1U);
	*((unsigned char*)t97)  = (unsigned char)6;
	t97                     = (t97 + 1U);
	*((unsigned char*)t97)  = (unsigned char)4;
	t91                     = (t91 + t96);
	t98                     = (4U * 1U);
	t99                     = t91;
	*((unsigned char*)t99)  = (unsigned char)4;
	t99                     = (t99 + 1U);
	*((unsigned char*)t99)  = (unsigned char)4;
	t99                     = (t99 + 1U);
	*((unsigned char*)t99)  = (unsigned char)4;
	t99                     = (t99 + 1U);
	*((unsigned char*)t99)  = (unsigned char)4;
	t23                     = (t23 + t90);
	t100                    = (4U * 4U);
	t101                    = (t100 * 1U);
	t102                    = t23;
	t103                    = (4U * 1U);
	t104                    = t102;
	*((unsigned char*)t104) = (unsigned char)0;
	t104                    = (t104 + 1U);
	*((unsigned char*)t104) = (unsigned char)0;
	t104                    = (t104 + 1U);
	*((unsigned char*)t104) = (unsigned char)0;
	t104                    = (t104 + 1U);
	*((unsigned char*)t104) = (unsigned char)0;
	t102                    = (t102 + t103);
	t105                    = (4U * 1U);
	t106                    = t102;
	*((unsigned char*)t106) = (unsigned char)0;
	t106                    = (t106 + 1U);
	*((unsigned char*)t106) = (unsigned char)5;
	t106                    = (t106 + 1U);
	*((unsigned char*)t106) = (unsigned char)5;
	t106                    = (t106 + 1U);
	*((unsigned char*)t106) = (unsigned char)5;
	t102                    = (t102 + t105);
	t107                    = (4U * 1U);
	t108                    = t102;
	*((unsigned char*)t108) = (unsigned char)0;
	t108                    = (t108 + 1U);
	*((unsigned char*)t108) = (unsigned char)5;
	t108                    = (t108 + 1U);
	*((unsigned char*)t108) = (unsigned char)4;
	t108                    = (t108 + 1U);
	*((unsigned char*)t108) = (unsigned char)7;
	t102                    = (t102 + t107);
	t109                    = (4U * 1U);
	t110                    = t102;
	*((unsigned char*)t110) = (unsigned char)4;
	t110                    = (t110 + 1U);
	*((unsigned char*)t110) = (unsigned char)4;
	t110                    = (t110 + 1U);
	*((unsigned char*)t110) = (unsigned char)4;
	t110                    = (t110 + 1U);
	*((unsigned char*)t110) = (unsigned char)4;
	t23                     = (t23 + t101);
	t111                    = (4U * 4U);
	t112                    = (t111 * 1U);
	t113                    = t23;
	t114                    = (4U * 1U);
	t115                    = t113;
	*((unsigned char*)t115) = (unsigned char)0;
	t115                    = (t115 + 1U);
	*((unsigned char*)t115) = (unsigned char)0;
	t115                    = (t115 + 1U);
	*((unsigned char*)t115) = (unsigned char)0;
	t115                    = (t115 + 1U);
	*((unsigned char*)t115) = (unsigned char)0;
	t113                    = (t113 + t114);
	t116                    = (4U * 1U);
	t117                    = t113;
	*((unsigned char*)t117) = (unsigned char)0;
	t117                    = (t117 + 1U);
	*((unsigned char*)t117) = (unsigned char)5;
	t117                    = (t117 + 1U);
	*((unsigned char*)t117) = (unsigned char)5;
	t117                    = (t117 + 1U);
	*((unsigned char*)t117) = (unsigned char)5;
	t113                    = (t113 + t116);
	t118                    = (4U * 1U);
	t119                    = t113;
	*((unsigned char*)t119) = (unsigned char)0;
	t119                    = (t119 + 1U);
	*((unsigned char*)t119) = (unsigned char)5;
	t119                    = (t119 + 1U);
	*((unsigned char*)t119) = (unsigned char)2;
	t119                    = (t119 + 1U);
	*((unsigned char*)t119) = (unsigned char)7;
	t113                    = (t113 + t118);
	t120                    = (4U * 1U);
	t121                    = t113;
	*((unsigned char*)t121) = (unsigned char)4;
	t121                    = (t121 + 1U);
	*((unsigned char*)t121) = (unsigned char)4;
	t121                    = (t121 + 1U);
	*((unsigned char*)t121) = (unsigned char)4;
	t121                    = (t121 + 1U);
	*((unsigned char*)t121) = (unsigned char)4;
	t23                     = (t23 + t112);
	t122                    = (4U * 4U);
	t123                    = (t122 * 1U);
	t124                    = t23;
	t125                    = (4U * 1U);
	t126                    = t124;
	*((unsigned char*)t126) = (unsigned char)0;
	t126                    = (t126 + 1U);
	*((unsigned char*)t126) = (unsigned char)0;
	t126                    = (t126 + 1U);
	*((unsigned char*)t126) = (unsigned char)0;
	t126                    = (t126 + 1U);
	*((unsigned char*)t126) = (unsigned char)0;
	t124                    = (t124 + t125);
	t127                    = (4U * 1U);
	t128                    = t124;
	*((unsigned char*)t128) = (unsigned char)0;
	t128                    = (t128 + 1U);
	*((unsigned char*)t128) = (unsigned char)5;
	t128                    = (t128 + 1U);
	*((unsigned char*)t128) = (unsigned char)5;
	t128                    = (t128 + 1U);
	*((unsigned char*)t128) = (unsigned char)5;
	t124                    = (t124 + t127);
	t129                    = (4U * 1U);
	t130                    = t124;
	*((unsigned char*)t130) = (unsigned char)0;
	t130                    = (t130 + 1U);
	*((unsigned char*)t130) = (unsigned char)5;
	t130                    = (t130 + 1U);
	*((unsigned char*)t130) = (unsigned char)6;
	t130                    = (t130 + 1U);
	*((unsigned char*)t130) = (unsigned char)3;
	t124                    = (t124 + t129);
	t131                    = (4U * 1U);
	t132                    = t124;
	*((unsigned char*)t132) = (unsigned char)4;
	t132                    = (t132 + 1U);
	*((unsigned char*)t132) = (unsigned char)4;
	t132                    = (t132 + 1U);
	*((unsigned char*)t132) = (unsigned char)4;
	t132                    = (t132 + 1U);
	*((unsigned char*)t132) = (unsigned char)4;
	t134                    = (t133 + 0U);
	t135                    = (t134 + 0U);
	*((int*)t135)           = 0;
	t135                    = (t134 + 4U);
	*((int*)t135)           = 9;
	t135                    = (t134 + 8U);
	*((int*)t135)           = 1;
	t136                    = (9 - 0);
	t137                    = (t136 * 1);
	t137                    = (t137 + 1);
	t135                    = (t134 + 12U);
	*((unsigned int*)t135)  = t137;
	t135                    = (t133 + 16U);
	t138                    = (t135 + 0U);
	*((int*)t138)           = 0;
	t138                    = (t135 + 4U);
	*((int*)t138)           = 3;
	t138                    = (t135 + 8U);
	*((int*)t138)           = 1;
	t139                    = (3 - 0);
	t137                    = (t139 * 1);
	t137                    = (t137 + 1);
	t138                    = (t135 + 12U);
	*((unsigned int*)t138)  = t137;
	t138                    = (t133 + 32U);
	t140                    = (t138 + 0U);
	*((int*)t140)           = 0;
	t140                    = (t138 + 4U);
	*((int*)t140)           = 3;
	t140                    = (t138 + 8U);
	*((int*)t140)           = 1;
	t141                    = (3 - 0);
	t137                    = (t141 * 1);
	t137                    = (t137 + 1);
	t140                    = (t138 + 12U);
	*((unsigned int*)t140)  = t137;
	t140                    = (t5 + 228U);
	t142                    = (t5 + 116U);
	t143                    = (t140 + 88U);
	*((char**)t143)         = t142;
	t145                    = (t140 + 56U);
	*((char**)t145)         = t144;
	memcpy(t144, t22, 160U);
	t146                    = (t140 + 64U);
	t147                    = (t142 + 80U);
	t148                    = *((char**)t147);
	*((char**)t146)         = t148;
	t149                    = (t140 + 80U);
	*((unsigned int*)t149)  = 160U;
	t150                    = (t6 + 4U);
	*((unsigned char*)t150) = t2;
	t151                    = (t6 + 5U);
	*((unsigned char*)t151) = t3;
	t152                    = (t6 + 6U);
	*((unsigned char*)t152) = t4;
	t153                    = (t140 + 56U);
	t154                    = *((char**)t153);
	t155                    = (t4 - 0);
	t137                    = (t155 * 1);
	t156                    = (t137 * 4U);
	t157                    = (t156 * 4U);
	t158                    = (t3 - 0);
	t159                    = (t158 * 1);
	t160                    = (t159 * 4U);
	t161                    = (t157 + t160);
	t162                    = (t2 - 0);
	t163                    = (t162 * 1);
	t164                    = (t161 + t163);
	t165                    = (1U * t164);
	t166                    = (0 + t165);
	t153                    = (t154 + t166);
	t167                    = *((unsigned char*)t153);
	t0                      = t167;

LAB1:
	t7 = (t5 + 116U);
	xsi_delete_type(t7, 2);
	return t0;
LAB2:;
}

unsigned char ieee_p_0017514958_sub_3950909432_1861681735(char*         t1,
                                                          unsigned char t2,
                                                          unsigned char t3,
                                                          unsigned char t4)
{
	char          t5[352];
	char          t6[8];
	char          t13[48];
	char          t67[48];
	char          t78[64];
	unsigned char t0;
	char*         t7;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	char*         t18;
	int           t19;
	char*         t20;
	int           t21;
	char*         t22;
	char*         t23;
	unsigned int  t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	unsigned int  t28;
	char*         t29;
	unsigned int  t30;
	char*         t31;
	unsigned int  t32;
	char*         t33;
	unsigned int  t34;
	unsigned int  t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	unsigned int  t39;
	char*         t40;
	unsigned int  t41;
	char*         t42;
	unsigned int  t43;
	char*         t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned int  t48;
	char*         t49;
	unsigned int  t50;
	char*         t51;
	unsigned int  t52;
	char*         t53;
	unsigned int  t54;
	char*         t55;
	unsigned int  t56;
	unsigned int  t57;
	char*         t58;
	unsigned int  t59;
	char*         t60;
	unsigned int  t61;
	char*         t62;
	unsigned int  t63;
	char*         t64;
	unsigned int  t65;
	char*         t66;
	char*         t68;
	char*         t69;
	int           t70;
	unsigned int  t71;
	char*         t72;
	int           t73;
	char*         t74;
	int           t75;
	char*         t76;
	char*         t77;
	char*         t79;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	char*         t84;
	char*         t85;
	char*         t86;
	char*         t87;
	char*         t88;
	int           t89;
	unsigned int  t90;
	unsigned int  t91;
	int           t92;
	unsigned int  t93;
	unsigned int  t94;
	unsigned int  t95;
	int           t96;
	unsigned int  t97;
	unsigned int  t98;
	unsigned int  t99;
	unsigned int  t100;
	unsigned char t101;

LAB0:
	t7  = ((IEEE_P_2592010699) + 3608);
	t8  = ((IEEE_P_2592010699) + 3608);
	t9  = ((IEEE_P_2592010699) + 3608);
	t10 = ((IEEE_P_2592010699) + 3608);
	t11 = (t5 + 4U);
	xsi_create_unconstr_array_type(t11, ng5, t7, 3, t8, t9, t10);
	t12                   = (t5 + 4U);
	t14                   = (t13 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 3;
	t15                   = (t14 + 8U);
	*((int*)t15)          = 1;
	t16                   = (3 - 0);
	t17                   = (t16 * 1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t13 + 16U);
	t18                   = (t15 + 0U);
	*((int*)t18)          = 0;
	t18                   = (t15 + 4U);
	*((int*)t18)          = 3;
	t18                   = (t15 + 8U);
	*((int*)t18)          = 1;
	t19                   = (3 - 0);
	t17                   = (t19 * 1);
	t17                   = (t17 + 1);
	t18                   = (t15 + 12U);
	*((unsigned int*)t18) = t17;
	t18                   = (t13 + 32U);
	t20                   = (t18 + 0U);
	*((int*)t20)          = 0;
	t20                   = (t18 + 4U);
	*((int*)t20)          = 3;
	t20                   = (t18 + 8U);
	*((int*)t20)          = 1;
	t21                   = (3 - 0);
	t17                   = (t21 * 1);
	t17                   = (t17 + 1);
	t20                   = (t18 + 12U);
	*((unsigned int*)t20) = t17;
	t20                   = (t5 + 116U);
	xsi_create_subtype(t20, ng6, t12, t13, 2);
	t22 = xsi_get_transient_memory(64U);
	memset(t22, 0, 64U);
	t23                    = t22;
	t17                    = (4U * 4U);
	t24                    = (t17 * 1U);
	t25                    = t23;
	t26                    = (4U * 1U);
	t27                    = t25;
	*((unsigned char*)t27) = (unsigned char)0;
	t27                    = (t27 + 1U);
	*((unsigned char*)t27) = (unsigned char)0;
	t27                    = (t27 + 1U);
	*((unsigned char*)t27) = (unsigned char)0;
	t27                    = (t27 + 1U);
	*((unsigned char*)t27) = (unsigned char)0;
	t25                    = (t25 + t26);
	t28                    = (4U * 1U);
	t29                    = t25;
	*((unsigned char*)t29) = (unsigned char)0;
	t29                    = (t29 + 1U);
	*((unsigned char*)t29) = (unsigned char)0;
	t29                    = (t29 + 1U);
	*((unsigned char*)t29) = (unsigned char)0;
	t29                    = (t29 + 1U);
	*((unsigned char*)t29) = (unsigned char)0;
	t25                    = (t25 + t28);
	t30                    = (4U * 1U);
	t31                    = t25;
	*((unsigned char*)t31) = (unsigned char)0;
	t31                    = (t31 + 1U);
	*((unsigned char*)t31) = (unsigned char)1;
	t31                    = (t31 + 1U);
	*((unsigned char*)t31) = (unsigned char)2;
	t31                    = (t31 + 1U);
	*((unsigned char*)t31) = (unsigned char)3;
	t25                    = (t25 + t30);
	t32                    = (4U * 1U);
	t33                    = t25;
	*((unsigned char*)t33) = (unsigned char)0;
	t33                    = (t33 + 1U);
	*((unsigned char*)t33) = (unsigned char)0;
	t33                    = (t33 + 1U);
	*((unsigned char*)t33) = (unsigned char)0;
	t33                    = (t33 + 1U);
	*((unsigned char*)t33) = (unsigned char)0;
	t23                    = (t23 + t24);
	t34                    = (4U * 4U);
	t35                    = (t34 * 1U);
	t36                    = t23;
	t37                    = (4U * 1U);
	t38                    = t36;
	*((unsigned char*)t38) = (unsigned char)0;
	t38                    = (t38 + 1U);
	*((unsigned char*)t38) = (unsigned char)1;
	t38                    = (t38 + 1U);
	*((unsigned char*)t38) = (unsigned char)0;
	t38                    = (t38 + 1U);
	*((unsigned char*)t38) = (unsigned char)0;
	t36                    = (t36 + t37);
	t39                    = (4U * 1U);
	t40                    = t36;
	*((unsigned char*)t40) = (unsigned char)0;
	t40                    = (t40 + 1U);
	*((unsigned char*)t40) = (unsigned char)1;
	t40                    = (t40 + 1U);
	*((unsigned char*)t40) = (unsigned char)1;
	t40                    = (t40 + 1U);
	*((unsigned char*)t40) = (unsigned char)1;
	t36                    = (t36 + t39);
	t41                    = (4U * 1U);
	t42                    = t36;
	*((unsigned char*)t42) = (unsigned char)0;
	t42                    = (t42 + 1U);
	*((unsigned char*)t42) = (unsigned char)1;
	t42                    = (t42 + 1U);
	*((unsigned char*)t42) = (unsigned char)2;
	t42                    = (t42 + 1U);
	*((unsigned char*)t42) = (unsigned char)3;
	t36                    = (t36 + t41);
	t43                    = (4U * 1U);
	t44                    = t36;
	*((unsigned char*)t44) = (unsigned char)1;
	t44                    = (t44 + 1U);
	*((unsigned char*)t44) = (unsigned char)1;
	t44                    = (t44 + 1U);
	*((unsigned char*)t44) = (unsigned char)1;
	t44                    = (t44 + 1U);
	*((unsigned char*)t44) = (unsigned char)1;
	t23                    = (t23 + t35);
	t45                    = (4U * 4U);
	t46                    = (t45 * 1U);
	t47                    = t23;
	t48                    = (4U * 1U);
	t49                    = t47;
	*((unsigned char*)t49) = (unsigned char)0;
	t49                    = (t49 + 1U);
	*((unsigned char*)t49) = (unsigned char)0;
	t49                    = (t49 + 1U);
	*((unsigned char*)t49) = (unsigned char)2;
	t49                    = (t49 + 1U);
	*((unsigned char*)t49) = (unsigned char)0;
	t47                    = (t47 + t48);
	t50                    = (4U * 1U);
	t51                    = t47;
	*((unsigned char*)t51) = (unsigned char)0;
	t51                    = (t51 + 1U);
	*((unsigned char*)t51) = (unsigned char)1;
	t51                    = (t51 + 1U);
	*((unsigned char*)t51) = (unsigned char)2;
	t51                    = (t51 + 1U);
	*((unsigned char*)t51) = (unsigned char)1;
	t47                    = (t47 + t50);
	t52                    = (4U * 1U);
	t53                    = t47;
	*((unsigned char*)t53) = (unsigned char)0;
	t53                    = (t53 + 1U);
	*((unsigned char*)t53) = (unsigned char)1;
	t53                    = (t53 + 1U);
	*((unsigned char*)t53) = (unsigned char)2;
	t53                    = (t53 + 1U);
	*((unsigned char*)t53) = (unsigned char)3;
	t47                    = (t47 + t52);
	t54                    = (4U * 1U);
	t55                    = t47;
	*((unsigned char*)t55) = (unsigned char)2;
	t55                    = (t55 + 1U);
	*((unsigned char*)t55) = (unsigned char)2;
	t55                    = (t55 + 1U);
	*((unsigned char*)t55) = (unsigned char)2;
	t55                    = (t55 + 1U);
	*((unsigned char*)t55) = (unsigned char)2;
	t23                    = (t23 + t46);
	t56                    = (4U * 4U);
	t57                    = (t56 * 1U);
	t58                    = t23;
	t59                    = (4U * 1U);
	t60                    = t58;
	*((unsigned char*)t60) = (unsigned char)0;
	t60                    = (t60 + 1U);
	*((unsigned char*)t60) = (unsigned char)0;
	t60                    = (t60 + 1U);
	*((unsigned char*)t60) = (unsigned char)0;
	t60                    = (t60 + 1U);
	*((unsigned char*)t60) = (unsigned char)3;
	t58                    = (t58 + t59);
	t61                    = (4U * 1U);
	t62                    = t58;
	*((unsigned char*)t62) = (unsigned char)0;
	t62                    = (t62 + 1U);
	*((unsigned char*)t62) = (unsigned char)1;
	t62                    = (t62 + 1U);
	*((unsigned char*)t62) = (unsigned char)1;
	t62                    = (t62 + 1U);
	*((unsigned char*)t62) = (unsigned char)3;
	t58                    = (t58 + t61);
	t63                    = (4U * 1U);
	t64                    = t58;
	*((unsigned char*)t64) = (unsigned char)0;
	t64                    = (t64 + 1U);
	*((unsigned char*)t64) = (unsigned char)1;
	t64                    = (t64 + 1U);
	*((unsigned char*)t64) = (unsigned char)2;
	t64                    = (t64 + 1U);
	*((unsigned char*)t64) = (unsigned char)3;
	t58                    = (t58 + t63);
	t65                    = (4U * 1U);
	t66                    = t58;
	*((unsigned char*)t66) = (unsigned char)3;
	t66                    = (t66 + 1U);
	*((unsigned char*)t66) = (unsigned char)3;
	t66                    = (t66 + 1U);
	*((unsigned char*)t66) = (unsigned char)3;
	t66                    = (t66 + 1U);
	*((unsigned char*)t66) = (unsigned char)3;
	t68                    = (t67 + 0U);
	t69                    = (t68 + 0U);
	*((int*)t69)           = 0;
	t69                    = (t68 + 4U);
	*((int*)t69)           = 3;
	t69                    = (t68 + 8U);
	*((int*)t69)           = 1;
	t70                    = (3 - 0);
	t71                    = (t70 * 1);
	t71                    = (t71 + 1);
	t69                    = (t68 + 12U);
	*((unsigned int*)t69)  = t71;
	t69                    = (t67 + 16U);
	t72                    = (t69 + 0U);
	*((int*)t72)           = 0;
	t72                    = (t69 + 4U);
	*((int*)t72)           = 3;
	t72                    = (t69 + 8U);
	*((int*)t72)           = 1;
	t73                    = (3 - 0);
	t71                    = (t73 * 1);
	t71                    = (t71 + 1);
	t72                    = (t69 + 12U);
	*((unsigned int*)t72)  = t71;
	t72                    = (t67 + 32U);
	t74                    = (t72 + 0U);
	*((int*)t74)           = 0;
	t74                    = (t72 + 4U);
	*((int*)t74)           = 3;
	t74                    = (t72 + 8U);
	*((int*)t74)           = 1;
	t75                    = (3 - 0);
	t71                    = (t75 * 1);
	t71                    = (t71 + 1);
	t74                    = (t72 + 12U);
	*((unsigned int*)t74)  = t71;
	t74                    = (t5 + 228U);
	t76                    = (t5 + 116U);
	t77                    = (t74 + 88U);
	*((char**)t77)         = t76;
	t79                    = (t74 + 56U);
	*((char**)t79)         = t78;
	memcpy(t78, t22, 64U);
	t80                    = (t74 + 64U);
	t81                    = (t76 + 80U);
	t82                    = *((char**)t81);
	*((char**)t80)         = t82;
	t83                    = (t74 + 80U);
	*((unsigned int*)t83)  = 64U;
	t84                    = (t6 + 4U);
	*((unsigned char*)t84) = t2;
	t85                    = (t6 + 5U);
	*((unsigned char*)t85) = t3;
	t86                    = (t6 + 6U);
	*((unsigned char*)t86) = t4;
	t87                    = (t74 + 56U);
	t88                    = *((char**)t87);
	t89                    = (t3 - 0);
	t71                    = (t89 * 1);
	t90                    = (t71 * 4U);
	t91                    = (t90 * 4U);
	t92                    = (t4 - 0);
	t93                    = (t92 * 1);
	t94                    = (t93 * 4U);
	t95                    = (t91 + t94);
	t96                    = (t2 - 0);
	t97                    = (t96 * 1);
	t98                    = (t95 + t97);
	t99                    = (1U * t98);
	t100                   = (0 + t99);
	t87                    = (t88 + t100);
	t101                   = *((unsigned char*)t87);
	t0                     = t101;

LAB1:
	t7 = (t5 + 116U);
	xsi_delete_type(t7, 2);
	return t0;
LAB2:;
}

unsigned char ieee_p_0017514958_sub_2445840371_1861681735(char*         t1,
                                                          unsigned char t2,
                                                          unsigned char t3,
                                                          unsigned char t4)
{
	char          t5[352];
	char          t6[8];
	char          t13[48];
	char          t67[48];
	char          t78[64];
	unsigned char t0;
	char*         t7;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	int           t16;
	unsigned int  t17;
	char*         t18;
	int           t19;
	char*         t20;
	int           t21;
	char*         t22;
	char*         t23;
	unsigned int  t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	unsigned int  t28;
	char*         t29;
	unsigned int  t30;
	char*         t31;
	unsigned int  t32;
	char*         t33;
	unsigned int  t34;
	unsigned int  t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	unsigned int  t39;
	char*         t40;
	unsigned int  t41;
	char*         t42;
	unsigned int  t43;
	char*         t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned int  t48;
	char*         t49;
	unsigned int  t50;
	char*         t51;
	unsigned int  t52;
	char*         t53;
	unsigned int  t54;
	char*         t55;
	unsigned int  t56;
	unsigned int  t57;
	char*         t58;
	unsigned int  t59;
	char*         t60;
	unsigned int  t61;
	char*         t62;
	unsigned int  t63;
	char*         t64;
	unsigned int  t65;
	char*         t66;
	char*         t68;
	char*         t69;
	int           t70;
	unsigned int  t71;
	char*         t72;
	int           t73;
	char*         t74;
	int           t75;
	char*         t76;
	char*         t77;
	char*         t79;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	char*         t84;
	char*         t85;
	char*         t86;
	char*         t87;
	char*         t88;
	int           t89;
	unsigned int  t90;
	unsigned int  t91;
	int           t92;
	unsigned int  t93;
	unsigned int  t94;
	unsigned int  t95;
	int           t96;
	unsigned int  t97;
	unsigned int  t98;
	unsigned int  t99;
	unsigned int  t100;
	unsigned char t101;

LAB0:
	t7  = ((IEEE_P_2592010699) + 3608);
	t8  = ((IEEE_P_2592010699) + 3608);
	t9  = ((IEEE_P_2592010699) + 3608);
	t10 = ((IEEE_P_2592010699) + 3608);
	t11 = (t5 + 4U);
	xsi_create_unconstr_array_type(t11, ng7, t7, 3, t8, t9, t10);
	t12                   = (t5 + 4U);
	t14                   = (t13 + 0U);
	t15                   = (t14 + 0U);
	*((int*)t15)          = 0;
	t15                   = (t14 + 4U);
	*((int*)t15)          = 3;
	t15                   = (t14 + 8U);
	*((int*)t15)          = 1;
	t16                   = (3 - 0);
	t17                   = (t16 * 1);
	t17                   = (t17 + 1);
	t15                   = (t14 + 12U);
	*((unsigned int*)t15) = t17;
	t15                   = (t13 + 16U);
	t18                   = (t15 + 0U);
	*((int*)t18)          = 0;
	t18                   = (t15 + 4U);
	*((int*)t18)          = 3;
	t18                   = (t15 + 8U);
	*((int*)t18)          = 1;
	t19                   = (3 - 0);
	t17                   = (t19 * 1);
	t17                   = (t17 + 1);
	t18                   = (t15 + 12U);
	*((unsigned int*)t18) = t17;
	t18                   = (t13 + 32U);
	t20                   = (t18 + 0U);
	*((int*)t20)          = 0;
	t20                   = (t18 + 4U);
	*((int*)t20)          = 3;
	t20                   = (t18 + 8U);
	*((int*)t20)          = 1;
	t21                   = (3 - 0);
	t17                   = (t21 * 1);
	t17                   = (t17 + 1);
	t20                   = (t18 + 12U);
	*((unsigned int*)t20) = t17;
	t20                   = (t5 + 116U);
	xsi_create_subtype(t20, ng8, t12, t13, 2);
	t22 = xsi_get_transient_memory(64U);
	memset(t22, 0, 64U);
	t23                    = t22;
	t17                    = (4U * 4U);
	t24                    = (t17 * 1U);
	t25                    = t23;
	t26                    = (4U * 1U);
	t27                    = t25;
	*((unsigned char*)t27) = (unsigned char)0;
	t27                    = (t27 + 1U);
	*((unsigned char*)t27) = (unsigned char)0;
	t27                    = (t27 + 1U);
	*((unsigned char*)t27) = (unsigned char)0;
	t27                    = (t27 + 1U);
	*((unsigned char*)t27) = (unsigned char)0;
	t25                    = (t25 + t26);
	t28                    = (4U * 1U);
	t29                    = t25;
	*((unsigned char*)t29) = (unsigned char)0;
	t29                    = (t29 + 1U);
	*((unsigned char*)t29) = (unsigned char)0;
	t29                    = (t29 + 1U);
	*((unsigned char*)t29) = (unsigned char)0;
	t29                    = (t29 + 1U);
	*((unsigned char*)t29) = (unsigned char)0;
	t25                    = (t25 + t28);
	t30                    = (4U * 1U);
	t31                    = t25;
	*((unsigned char*)t31) = (unsigned char)0;
	t31                    = (t31 + 1U);
	*((unsigned char*)t31) = (unsigned char)0;
	t31                    = (t31 + 1U);
	*((unsigned char*)t31) = (unsigned char)2;
	t31                    = (t31 + 1U);
	*((unsigned char*)t31) = (unsigned char)0;
	t25                    = (t25 + t30);
	t32                    = (4U * 1U);
	t33                    = t25;
	*((unsigned char*)t33) = (unsigned char)0;
	t33                    = (t33 + 1U);
	*((unsigned char*)t33) = (unsigned char)0;
	t33                    = (t33 + 1U);
	*((unsigned char*)t33) = (unsigned char)0;
	t33                    = (t33 + 1U);
	*((unsigned char*)t33) = (unsigned char)3;
	t23                    = (t23 + t24);
	t34                    = (4U * 4U);
	t35                    = (t34 * 1U);
	t36                    = t23;
	t37                    = (4U * 1U);
	t38                    = t36;
	*((unsigned char*)t38) = (unsigned char)0;
	t38                    = (t38 + 1U);
	*((unsigned char*)t38) = (unsigned char)0;
	t38                    = (t38 + 1U);
	*((unsigned char*)t38) = (unsigned char)0;
	t38                    = (t38 + 1U);
	*((unsigned char*)t38) = (unsigned char)0;
	t36                    = (t36 + t37);
	t39                    = (4U * 1U);
	t40                    = t36;
	*((unsigned char*)t40) = (unsigned char)0;
	t40                    = (t40 + 1U);
	*((unsigned char*)t40) = (unsigned char)1;
	t40                    = (t40 + 1U);
	*((unsigned char*)t40) = (unsigned char)1;
	t40                    = (t40 + 1U);
	*((unsigned char*)t40) = (unsigned char)1;
	t36                    = (t36 + t39);
	t41                    = (4U * 1U);
	t42                    = t36;
	*((unsigned char*)t42) = (unsigned char)0;
	t42                    = (t42 + 1U);
	*((unsigned char*)t42) = (unsigned char)1;
	t42                    = (t42 + 1U);
	*((unsigned char*)t42) = (unsigned char)2;
	t42                    = (t42 + 1U);
	*((unsigned char*)t42) = (unsigned char)1;
	t36                    = (t36 + t41);
	t43                    = (4U * 1U);
	t44                    = t36;
	*((unsigned char*)t44) = (unsigned char)0;
	t44                    = (t44 + 1U);
	*((unsigned char*)t44) = (unsigned char)1;
	t44                    = (t44 + 1U);
	*((unsigned char*)t44) = (unsigned char)1;
	t44                    = (t44 + 1U);
	*((unsigned char*)t44) = (unsigned char)3;
	t23                    = (t23 + t35);
	t45                    = (4U * 4U);
	t46                    = (t45 * 1U);
	t47                    = t23;
	t48                    = (4U * 1U);
	t49                    = t47;
	*((unsigned char*)t49) = (unsigned char)0;
	t49                    = (t49 + 1U);
	*((unsigned char*)t49) = (unsigned char)0;
	t49                    = (t49 + 1U);
	*((unsigned char*)t49) = (unsigned char)2;
	t49                    = (t49 + 1U);
	*((unsigned char*)t49) = (unsigned char)0;
	t47                    = (t47 + t48);
	t50                    = (4U * 1U);
	t51                    = t47;
	*((unsigned char*)t51) = (unsigned char)0;
	t51                    = (t51 + 1U);
	*((unsigned char*)t51) = (unsigned char)1;
	t51                    = (t51 + 1U);
	*((unsigned char*)t51) = (unsigned char)2;
	t51                    = (t51 + 1U);
	*((unsigned char*)t51) = (unsigned char)1;
	t47                    = (t47 + t50);
	t52                    = (4U * 1U);
	t53                    = t47;
	*((unsigned char*)t53) = (unsigned char)2;
	t53                    = (t53 + 1U);
	*((unsigned char*)t53) = (unsigned char)2;
	t53                    = (t53 + 1U);
	*((unsigned char*)t53) = (unsigned char)2;
	t53                    = (t53 + 1U);
	*((unsigned char*)t53) = (unsigned char)2;
	t47                    = (t47 + t52);
	t54                    = (4U * 1U);
	t55                    = t47;
	*((unsigned char*)t55) = (unsigned char)0;
	t55                    = (t55 + 1U);
	*((unsigned char*)t55) = (unsigned char)1;
	t55                    = (t55 + 1U);
	*((unsigned char*)t55) = (unsigned char)2;
	t55                    = (t55 + 1U);
	*((unsigned char*)t55) = (unsigned char)3;
	t23                    = (t23 + t46);
	t56                    = (4U * 4U);
	t57                    = (t56 * 1U);
	t58                    = t23;
	t59                    = (4U * 1U);
	t60                    = t58;
	*((unsigned char*)t60) = (unsigned char)0;
	t60                    = (t60 + 1U);
	*((unsigned char*)t60) = (unsigned char)0;
	t60                    = (t60 + 1U);
	*((unsigned char*)t60) = (unsigned char)0;
	t60                    = (t60 + 1U);
	*((unsigned char*)t60) = (unsigned char)3;
	t58                    = (t58 + t59);
	t61                    = (4U * 1U);
	t62                    = t58;
	*((unsigned char*)t62) = (unsigned char)0;
	t62                    = (t62 + 1U);
	*((unsigned char*)t62) = (unsigned char)1;
	t62                    = (t62 + 1U);
	*((unsigned char*)t62) = (unsigned char)1;
	t62                    = (t62 + 1U);
	*((unsigned char*)t62) = (unsigned char)3;
	t58                    = (t58 + t61);
	t63                    = (4U * 1U);
	t64                    = t58;
	*((unsigned char*)t64) = (unsigned char)0;
	t64                    = (t64 + 1U);
	*((unsigned char*)t64) = (unsigned char)1;
	t64                    = (t64 + 1U);
	*((unsigned char*)t64) = (unsigned char)2;
	t64                    = (t64 + 1U);
	*((unsigned char*)t64) = (unsigned char)3;
	t58                    = (t58 + t63);
	t65                    = (4U * 1U);
	t66                    = t58;
	*((unsigned char*)t66) = (unsigned char)3;
	t66                    = (t66 + 1U);
	*((unsigned char*)t66) = (unsigned char)3;
	t66                    = (t66 + 1U);
	*((unsigned char*)t66) = (unsigned char)3;
	t66                    = (t66 + 1U);
	*((unsigned char*)t66) = (unsigned char)3;
	t68                    = (t67 + 0U);
	t69                    = (t68 + 0U);
	*((int*)t69)           = 0;
	t69                    = (t68 + 4U);
	*((int*)t69)           = 3;
	t69                    = (t68 + 8U);
	*((int*)t69)           = 1;
	t70                    = (3 - 0);
	t71                    = (t70 * 1);
	t71                    = (t71 + 1);
	t69                    = (t68 + 12U);
	*((unsigned int*)t69)  = t71;
	t69                    = (t67 + 16U);
	t72                    = (t69 + 0U);
	*((int*)t72)           = 0;
	t72                    = (t69 + 4U);
	*((int*)t72)           = 3;
	t72                    = (t69 + 8U);
	*((int*)t72)           = 1;
	t73                    = (3 - 0);
	t71                    = (t73 * 1);
	t71                    = (t71 + 1);
	t72                    = (t69 + 12U);
	*((unsigned int*)t72)  = t71;
	t72                    = (t67 + 32U);
	t74                    = (t72 + 0U);
	*((int*)t74)           = 0;
	t74                    = (t72 + 4U);
	*((int*)t74)           = 3;
	t74                    = (t72 + 8U);
	*((int*)t74)           = 1;
	t75                    = (3 - 0);
	t71                    = (t75 * 1);
	t71                    = (t71 + 1);
	t74                    = (t72 + 12U);
	*((unsigned int*)t74)  = t71;
	t74                    = (t5 + 228U);
	t76                    = (t5 + 116U);
	t77                    = (t74 + 88U);
	*((char**)t77)         = t76;
	t79                    = (t74 + 56U);
	*((char**)t79)         = t78;
	memcpy(t78, t22, 64U);
	t80                    = (t74 + 64U);
	t81                    = (t76 + 80U);
	t82                    = *((char**)t81);
	*((char**)t80)         = t82;
	t83                    = (t74 + 80U);
	*((unsigned int*)t83)  = 64U;
	t84                    = (t6 + 4U);
	*((unsigned char*)t84) = t2;
	t85                    = (t6 + 5U);
	*((unsigned char*)t85) = t3;
	t86                    = (t6 + 6U);
	*((unsigned char*)t86) = t4;
	t87                    = (t74 + 56U);
	t88                    = *((char**)t87);
	t89                    = (t2 - 0);
	t71                    = (t89 * 1);
	t90                    = (t71 * 4U);
	t91                    = (t90 * 4U);
	t92                    = (t3 - 0);
	t93                    = (t92 * 1);
	t94                    = (t93 * 4U);
	t95                    = (t91 + t94);
	t96                    = (t4 - 0);
	t97                    = (t96 * 1);
	t98                    = (t95 + t97);
	t99                    = (1U * t98);
	t100                   = (0 + t99);
	t87                    = (t88 + t100);
	t101                   = *((unsigned char*)t87);
	t0                     = t101;

LAB1:
	t7 = (t5 + 116U);
	xsi_delete_type(t7, 2);
	return t0;
LAB2:;
}

unsigned char ieee_p_0017514958_sub_220240835_1861681735(char*         t1,
                                                         unsigned char t2,
                                                         unsigned char t3)
{
	char          t4[472];
	char          t5[8];
	char          t11[32];
	char          t37[32];
	char          t46[88];
	char          t55[8];
	unsigned char t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t12;
	char*         t13;
	int           t14;
	unsigned int  t15;
	char*         t16;
	int           t17;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned int  t21;
	char*         t22;
	unsigned int  t23;
	char*         t24;
	unsigned int  t25;
	char*         t26;
	unsigned int  t27;
	char*         t28;
	unsigned int  t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	unsigned int  t33;
	char*         t34;
	unsigned int  t35;
	char*         t36;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	char*         t47;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	unsigned int  t63;
	int           t64;
	unsigned int  t65;
	unsigned int  t66;
	unsigned int  t67;
	unsigned int  t68;
	unsigned char t69;
	char*         t70;
	char*         t71;

LAB0:
	t6 = ((IEEE_P_2592010699) + 3320);
	t7 = ((IEEE_P_2592010699) + 3224);
	t8 = ((IEEE_P_2592010699) + 3224);
	t9 = (t4 + 4U);
	xsi_create_unconstr_array_type(t9, ng9, t6, 2, t7, t8);
	t10                   = (t4 + 4U);
	t12                   = (t11 + 0U);
	t13                   = (t12 + 0U);
	*((int*)t13)          = 0;
	t13                   = (t12 + 4U);
	*((int*)t13)          = 8;
	t13                   = (t12 + 8U);
	*((int*)t13)          = 1;
	t14                   = (8 - 0);
	t15                   = (t14 * 1);
	t15                   = (t15 + 1);
	t13                   = (t12 + 12U);
	*((unsigned int*)t13) = t15;
	t13                   = (t11 + 16U);
	t16                   = (t13 + 0U);
	*((int*)t16)          = 0;
	t16                   = (t13 + 4U);
	*((int*)t16)          = 8;
	t16                   = (t13 + 8U);
	*((int*)t16)          = 1;
	t17                   = (8 - 0);
	t15                   = (t17 * 1);
	t15                   = (t15 + 1);
	t16                   = (t13 + 12U);
	*((unsigned int*)t16) = t15;
	t16                   = (t4 + 116U);
	xsi_create_subtype(t16, ng10, t10, t11, 2);
	t18 = xsi_get_transient_memory(81U);
	memset(t18, 0, 81U);
	t19                    = t18;
	t15                    = (9U * 1U);
	t20                    = t19;
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t20                    = (t20 + 1U);
	*((unsigned char*)t20) = (unsigned char)0;
	t19                    = (t19 + t15);
	t21                    = (9U * 1U);
	t22                    = t19;
	*((unsigned char*)t22) = (unsigned char)0;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t22                    = (t22 + 1U);
	*((unsigned char*)t22) = (unsigned char)1;
	t19                    = (t19 + t21);
	t23                    = (9U * 1U);
	t24                    = t19;
	*((unsigned char*)t24) = (unsigned char)0;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)1;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)2;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)1;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)2;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)2;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)2;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)2;
	t24                    = (t24 + 1U);
	*((unsigned char*)t24) = (unsigned char)1;
	t19                    = (t19 + t23);
	t25                    = (9U * 1U);
	t26                    = t19;
	*((unsigned char*)t26) = (unsigned char)0;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)1;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)1;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)3;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)3;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)3;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)3;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)3;
	t26                    = (t26 + 1U);
	*((unsigned char*)t26) = (unsigned char)1;
	t19                    = (t19 + t25);
	t27                    = (9U * 1U);
	t28                    = t19;
	*((unsigned char*)t28) = (unsigned char)0;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)1;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)2;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)3;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)4;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)5;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)6;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)7;
	t28                    = (t28 + 1U);
	*((unsigned char*)t28) = (unsigned char)1;
	t19                    = (t19 + t27);
	t29                    = (9U * 1U);
	t30                    = t19;
	*((unsigned char*)t30) = (unsigned char)0;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)1;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)2;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)3;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)5;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)5;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)5;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)5;
	t30                    = (t30 + 1U);
	*((unsigned char*)t30) = (unsigned char)1;
	t19                    = (t19 + t29);
	t31                    = (9U * 1U);
	t32                    = t19;
	*((unsigned char*)t32) = (unsigned char)0;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)1;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)2;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)3;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)6;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)5;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)6;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)5;
	t32                    = (t32 + 1U);
	*((unsigned char*)t32) = (unsigned char)1;
	t19                    = (t19 + t31);
	t33                    = (9U * 1U);
	t34                    = t19;
	*((unsigned char*)t34) = (unsigned char)0;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)1;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)2;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)3;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)7;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)5;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)5;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)7;
	t34                    = (t34 + 1U);
	*((unsigned char*)t34) = (unsigned char)1;
	t19                    = (t19 + t33);
	t35                    = (9U * 1U);
	t36                    = t19;
	*((unsigned char*)t36) = (unsigned char)0;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t36                    = (t36 + 1U);
	*((unsigned char*)t36) = (unsigned char)1;
	t38                    = (t37 + 0U);
	t39                    = (t38 + 0U);
	*((int*)t39)           = 0;
	t39                    = (t38 + 4U);
	*((int*)t39)           = 8;
	t39                    = (t38 + 8U);
	*((int*)t39)           = 1;
	t40                    = (8 - 0);
	t41                    = (t40 * 1);
	t41                    = (t41 + 1);
	t39                    = (t38 + 12U);
	*((unsigned int*)t39)  = t41;
	t39                    = (t37 + 16U);
	t42                    = (t39 + 0U);
	*((int*)t42)           = 0;
	t42                    = (t39 + 4U);
	*((int*)t42)           = 8;
	t42                    = (t39 + 8U);
	*((int*)t42)           = 1;
	t43                    = (8 - 0);
	t41                    = (t43 * 1);
	t41                    = (t41 + 1);
	t42                    = (t39 + 12U);
	*((unsigned int*)t42)  = t41;
	t42                    = (t4 + 228U);
	t44                    = (t4 + 116U);
	t45                    = (t42 + 88U);
	*((char**)t45)         = t44;
	t47                    = (t42 + 56U);
	*((char**)t47)         = t46;
	memcpy(t46, t18, 81U);
	t48                   = (t42 + 64U);
	t49                   = (t44 + 80U);
	t50                   = *((char**)t49);
	*((char**)t48)        = t50;
	t51                   = (t42 + 80U);
	*((unsigned int*)t51) = 81U;
	t52                   = (t4 + 348U);
	t53                   = ((IEEE_P_2592010699) + 3320);
	t54                   = (t52 + 88U);
	*((char**)t54)        = t53;
	t56                   = (t52 + 56U);
	*((char**)t56)        = t55;
	xsi_type_set_default_value(t53, t55, 0);
	t57                    = (t52 + 80U);
	*((unsigned int*)t57)  = 1U;
	t58                    = (t5 + 4U);
	*((unsigned char*)t58) = t2;
	t59                    = (t5 + 5U);
	*((unsigned char*)t59) = t3;
	t60                    = (t42 + 56U);
	t61                    = *((char**)t60);
	t62                    = (t2 - 0);
	t41                    = (t62 * 1);
	t63                    = (t41 * 9U);
	t64                    = (t3 - 0);
	t65                    = (t64 * 1);
	t66                    = (t63 + t65);
	t67                    = (1U * t66);
	t68                    = (0 + t67);
	t60                    = (t61 + t68);
	t69                    = *((unsigned char*)t60);
	t70                    = (t52 + 56U);
	t71                    = *((char**)t70);
	t70                    = (t71 + 0);
	*((unsigned char*)t70) = t69;
	t6                     = (t52 + 56U);
	t7                     = *((char**)t6);
	t69                    = *((unsigned char*)t7);
	t0                     = t69;

LAB1:
	t6 = (t4 + 116U);
	xsi_delete_type(t6, 2);
	return t0;
LAB2:;
}

extern void ieee_p_0017514958_init()
{
	static char* se[] = {(void*)ieee_p_0017514958_sub_2888371257_1861681735,
	                     (void*)ieee_p_0017514958_sub_3959339890_1861681735,
	                     (void*)ieee_p_0017514958_sub_3483042593_1861681735,
	                     (void*)ieee_p_0017514958_sub_839555928_1861681735,
	                     (void*)ieee_p_0017514958_sub_1417944488_1861681735,
	                     (void*)ieee_p_0017514958_sub_2731107355_1861681735,
	                     (void*)ieee_p_0017514958_sub_670926509_1861681735,
	                     (void*)ieee_p_0017514958_sub_1990327881_1861681735,
	                     (void*)ieee_p_0017514958_sub_1003888859_1861681735,
	                     (void*)ieee_p_0017514958_sub_3238471574_1861681735,
	                     (void*)ieee_p_0017514958_sub_3008817869_1861681735,
	                     (void*)ieee_p_0017514958_sub_3317430977_1861681735,
	                     (void*)ieee_p_0017514958_sub_2737647089_1861681735,
	                     (void*)ieee_p_0017514958_sub_3592147051_1861681735,
	                     (void*)ieee_p_0017514958_sub_1739486367_1861681735,
	                     (void*)ieee_p_0017514958_sub_3778645337_1861681735,
	                     (void*)ieee_p_0017514958_sub_3338352311_1861681735,
	                     (void*)ieee_p_0017514958_sub_706646641_1861681735,
	                     (void*)ieee_p_0017514958_sub_2981074091_1861681735,
	                     (void*)ieee_p_0017514958_sub_3501910733_1861681735,
	                     (void*)ieee_p_0017514958_sub_1982913369_1861681735,
	                     (void*)ieee_p_0017514958_sub_3688409019_1861681735,
	                     (void*)ieee_p_0017514958_sub_3581779313_1861681735,
	                     (void*)ieee_p_0017514958_sub_616410323_1861681735,
	                     (void*)ieee_p_0017514958_sub_4126215983_1861681735,
	                     (void*)ieee_p_0017514958_sub_450477564_1861681735,
	                     (void*)ieee_p_0017514958_sub_3950909432_1861681735,
	                     (void*)ieee_p_0017514958_sub_2445840371_1861681735,
	                     (void*)ieee_p_0017514958_sub_220240835_1861681735};
	xsi_register_didat("ieee_p_0017514958",
	                   "isim/precompiled.exe.sim/ieee/p_0017514958.didat");
	xsi_register_subprogram_executes(se);
}
