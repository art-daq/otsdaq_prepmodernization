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
extern char*       STD_STANDARD;
static const char* ng1 = "Function max ended without a return statement";
static const char* ng2 = "Function min ended without a return statement";
extern char*       IEEE_P_2592010699;
static const char* ng4 = "Function mult ended without a return statement";
static const char* ng5 = "rtype";

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char*,
                                                         unsigned char,
                                                         unsigned char);
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char*,
                                                         unsigned char,
                                                         unsigned char);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char*,
                                                         unsigned char,
                                                         unsigned char);
char*         ieee_p_2592010699_sub_3946049995_503743352(char*, char*, char*, char*);
char*         ieee_p_3499444699_sub_17676902_3536714472(char*, char*, unsigned char, int);
char*         ieee_p_3499444699_sub_2254111597_3536714472(
            char*, char*, char*, char*, char*, char*);
char* ieee_p_3499444699_sub_2596859466_3536714472(char*, char*, unsigned char, int);
char* ieee_p_3499444699_sub_2998320402_3536714472(char*, char*, char*, char*);
char* ieee_p_3499444699_sub_3158760445_3536714472(
    char*, char*, char*, char*, char*, char*);
char* ieee_p_3499444699_sub_3265085561_3536714472(
    char*, char*, char*, char*, char*, char*);
char* ieee_p_3499444699_sub_3466875835_3536714472(char*, char*, char*, char*);

unsigned char ieee_p_3499444699_sub_3141295106_3536714472(char* t1, char* t2, char* t3)
{
	char          t4[128];
	char          t5[24];
	char          t11[8];
	char          t14[16];
	unsigned char t0;
	char*         t6;
	unsigned int  t7;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	int           t17;
	char*         t18;
	int           t19;
	unsigned int  t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	char*         t24;
	int           t25;
	int           t26;
	int           t27;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	int           t32;
	char*         t33;
	int           t34;
	unsigned int  t35;
	unsigned int  t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	static char*  nl0[] = {
        &&LAB10, &&LAB10, &&LAB9, &&LAB9, &&LAB10, &&LAB10, &&LAB9, &&LAB9, &&LAB10};

LAB0:
	t6                    = (t3 + 12U);
	t7                    = *((unsigned int*)t6);
	t8                    = (t4 + 4U);
	t9                    = ((STD_STANDARD) + 384);
	t10                   = (t8 + 88U);
	*((char**)t10)        = t9;
	t12                   = (t8 + 56U);
	*((char**)t12)        = t11;
	*((unsigned int*)t11) = t7;
	t13                   = (t8 + 80U);
	*((unsigned int*)t13) = 4U;
	t15                   = (t8 + 56U);
	t16                   = *((char**)t15);
	t17                   = *((int*)t16);
	t15                   = (t14 + 0U);
	t18                   = (t15 + 0U);
	*((int*)t18)          = 1;
	t18                   = (t15 + 4U);
	*((int*)t18)          = t17;
	t18                   = (t15 + 8U);
	*((int*)t18)          = 1;
	t19                   = (t17 - 1);
	t20                   = (t19 * 1);
	t20                   = (t20 + 1);
	t18                   = (t15 + 12U);
	*((unsigned int*)t18) = t20;
	t18                   = (t5 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t5 + 12U);
	*((char**)t22) = t3;
	t23            = (t8 + 56U);
	t24            = *((char**)t23);
	t25            = *((int*)t24);
	t26            = 1;
	t27            = t25;

LAB4:
	if(t26 <= t27)
		goto LAB5;

LAB7:
	t0 = (unsigned char)0;

LAB1:
	return t0;
LAB3:
	*((char**)t18) = t2;
	goto LAB2;

LAB5:
	t23 = (t2 + 0);
	t28 = (t14 + 0U);
	t29 = *((int*)t28);
	t30 = (t14 + 8U);
	t31 = *((int*)t30);
	t32 = (t26 - t29);
	t20 = (t32 * t31);
	t33 = (t14 + 4U);
	t34 = *((int*)t33);
	xsi_vhdl_check_range_of_index(t29, t34, t31, t26);
	t35 = (1U * t20);
	t36 = (0 + t35);
	t37 = (t23 + t36);
	t38 = *((unsigned char*)t37);
	t39 = (char*)((nl0) + t38);
	goto**((char**)t39);

LAB6:
	if(t26 == t27)
		goto LAB7;

LAB12:
	t17 = (t26 + 1);
	t26 = t17;
	goto LAB4;

LAB8:
	goto LAB6;

LAB9:
	goto LAB8;

LAB10:
	t0 = (unsigned char)1;
	goto LAB1;

LAB11:
	goto LAB8;

LAB13:;
}

int ieee_p_3499444699_sub_3409386410_3536714472(char* t1, int t2, int t3)
{
	char          t5[16];
	int           t0;
	char*         t6;
	char*         t7;
	unsigned char t8;

LAB0:
	t6          = (t5 + 4U);
	*((int*)t6) = t2;
	t7          = (t5 + 8U);
	*((int*)t7) = t3;
	t8          = (t2 > t3);
	if(t8 != 0)
		goto LAB2;

LAB4:
	t0 = t3;

LAB1:
	return t0;
LAB2:
	t0 = t2;
	goto LAB1;

LAB3:
	xsi_error(ng1);
	t0 = 0;
	goto LAB1;

LAB5:
	goto LAB3;

LAB6:
	goto LAB3;
}

int ieee_p_3499444699_sub_3409663016_3536714472(char* t1, int t2, int t3)
{
	char          t5[16];
	int           t0;
	char*         t6;
	char*         t7;
	unsigned char t8;

LAB0:
	t6          = (t5 + 4U);
	*((int*)t6) = t2;
	t7          = (t5 + 8U);
	*((int*)t7) = t3;
	t8          = (t2 < t3);
	if(t8 != 0)
		goto LAB2;

LAB4:
	t0 = t3;

LAB1:
	return t0;
LAB2:
	t0 = t2;
	goto LAB1;

LAB3:
	xsi_error(ng2);
	t0 = 0;
	goto LAB1;

LAB5:
	goto LAB3;

LAB6:
	goto LAB3;
}

unsigned char ieee_p_3499444699_sub_2035181919_3536714472(char* t1, unsigned char t2)
{
	char          t3[128];
	char          t4[8];
	char          t8[8];
	unsigned char t0;
	char*         t5;
	char*         t6;
	char*         t7;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t13;
	int           t14;
	unsigned int  t15;
	unsigned int  t16;
	unsigned int  t17;
	unsigned char t18;
	char*         t19;

LAB0:
	t5            = (t3 + 4U);
	t6            = ((IEEE_P_2592010699) + 3224);
	t7            = (t5 + 88U);
	*((char**)t7) = t6;
	t9            = (t5 + 56U);
	*((char**)t9) = t8;
	xsi_type_set_default_value(t6, t8, 0);
	t10                    = (t5 + 80U);
	*((unsigned int*)t10)  = 1U;
	t11                    = (t4 + 4U);
	*((unsigned char*)t11) = t2;
	t12                    = (t1 + 1288U);
	t13                    = *((char**)t12);
	t14                    = (t2 - 0);
	t15                    = (t14 * 1);
	t16                    = (1U * t15);
	t17                    = (0 + t16);
	t12                    = (t13 + t17);
	t18                    = *((unsigned char*)t12);
	if(t18 != 0)
		goto LAB2;

LAB4:
LAB3:
	t6                    = (t1 + 1168U);
	t7                    = *((char**)t6);
	t14                   = (t2 - 0);
	t15                   = (t14 * 1);
	t16                   = (1U * t15);
	t17                   = (0 + t16);
	t6                    = (t7 + t17);
	t18                   = *((unsigned char*)t6);
	t9                    = (t5 + 56U);
	t10                   = *((char**)t9);
	t9                    = (t10 + 0);
	*((unsigned char*)t9) = t18;
	t6                    = (t5 + 56U);
	t7                    = *((char**)t6);
	t18                   = *((unsigned char*)t7);
	t0                    = t18;

LAB1:
	return t0;
LAB2:
	if((unsigned char)0 == 0)
		goto LAB5;

LAB6:
	t6                    = (t5 + 56U);
	t7                    = *((char**)t6);
	t6                    = (t7 + 0);
	*((unsigned char*)t6) = (unsigned char)1;
	t6                    = (t5 + 56U);
	t7                    = *((char**)t6);
	t18                   = *((unsigned char*)t7);
	t0                    = t18;
	goto LAB1;

LAB5:
	t19 = (t1 + 4782);
	xsi_report(t19, 85U, (unsigned char)1);
	goto LAB6;

LAB7:
	goto LAB3;

LAB8:;
}

char* ieee_p_3499444699_sub_3292431343_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2616);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 4867);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_211906012_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2728);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 4952);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_3176690709_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2616);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 5037);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_96165378_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2728);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 5122);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_1230020568_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = ((IEEE_P_2592010699) + 4024);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 5207);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_1791835871_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = ((IEEE_P_2592010699) + 4024);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 5292);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_1676095237_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	int           t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	unsigned int  t46;
	char*         t47;
	unsigned char t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	unsigned int  t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	unsigned int  t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = ((IEEE_P_2592010699) + 4024);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t29            = (t4 + 8U);
	t30            = *((int*)t29);
	t31            = (t4 + 4U);
	t32            = *((int*)t31);
	t33            = (t4 + 0U);
	t34            = *((int*)t33);
	t35            = t34;
	t36            = t32;

LAB4:
	t37 = (t36 * t30);
	t38 = (t35 * t30);
	if(t38 <= t37)
		goto LAB5;

LAB7:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB5:
	t39 = (t1 + 1288U);
	t40 = *((char**)t39);
	t39 = (t4 + 0U);
	t41 = *((int*)t39);
	t42 = (t4 + 8U);
	t43 = *((int*)t42);
	t44 = (t35 - t41);
	t19 = (t44 * t43);
	t45 = (1U * t19);
	t46 = (0 + t45);
	t47 = (t3 + t46);
	t48 = *((unsigned char*)t47);
	t49 = (t48 - 0);
	t50 = (t49 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t48);
	t51 = (1U * t50);
	t52 = (0 + t51);
	t53 = (t40 + t52);
	t54 = *((unsigned char*)t53);
	if(t54 != 0)
		goto LAB8;

LAB10:
LAB9:
	t7  = (t1 + 1168U);
	t10 = *((char**)t7);
	t7  = (t4 + 0U);
	t11 = *((int*)t7);
	t12 = (t4 + 8U);
	t13 = *((int*)t12);
	t15 = (t35 - t11);
	t8  = (t15 * t13);
	t19 = (1U * t8);
	t45 = (0 + t19);
	t14 = (t3 + t45);
	t27 = *((unsigned char*)t14);
	t18 = (t27 - 0);
	t46 = (t18 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t27);
	t50 = (1U * t46);
	t51 = (0 + t50);
	t16 = (t10 + t51);
	t48 = *((unsigned char*)t16);
	t20 = (t17 + 56U);
	t21 = *((char**)t20);
	t20 = (t9 + 0U);
	t32 = *((int*)t20);
	t23 = (t9 + 8U);
	t34 = *((int*)t23);
	t37 = (t35 - t32);
	t52 = (t37 * t34);
	t24 = (t9 + 4U);
	t38 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t32, t38, t34, t35);
	t57                    = (1U * t52);
	t58                    = (0 + t57);
	t25                    = (t21 + t58);
	*((unsigned char*)t25) = t48;

LAB6:
	if(t35 == t36)
		goto LAB7;

LAB14:
	t11 = (t35 + t30);
	t35 = t11;
	goto LAB4;

LAB8:
	if((unsigned char)0 == 0)
		goto LAB11;

LAB12:
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t10 = xsi_get_transient_memory(t8);
	memset(t10, 0, t8);
	t12 = t10;
	memset(t12, (unsigned char)1, t8);
	t14 = (t17 + 56U);
	t16 = *((char**)t14);
	t14 = (t16 + 0);
	t20 = (t9 + 12U);
	t19 = *((unsigned int*)t20);
	t19 = (t19 * 1U);
	memcpy(t14, t10, t19);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;
	goto LAB1;

LAB11:
	t55 = (t1 + 5377);
	xsi_report(t55, 85U, (unsigned char)1);
	goto LAB12;

LAB13:
	goto LAB9;

LAB15:;
}

char* ieee_p_3499444699_sub_3823682755_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t19[16];
	char*         t0;
	char*         t9;
	int           t10;
	int           t11;
	unsigned int  t12;
	char*         t13;
	char*         t14;
	char*         t15;
	int           t16;
	int           t17;
	unsigned int  t18;
	char*         t20;
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
	unsigned char t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	int           t45;
	char*         t46;
	char*         t47;
	int           t48;
	unsigned int  t49;

LAB0:
	t9  = (t4 + 0U);
	t10 = *((int*)t9);
	t11 = (0 - t10);
	t12 = (t11 * -1);
	t12 = (t12 + 1);
	t12 = (t12 * 1U);
	t13 = xsi_get_transient_memory(t12);
	memset(t13, 0, t12);
	t14 = t13;
	memset(t14, (unsigned char)1, t12);
	t15                   = (t4 + 0U);
	t16                   = *((int*)t15);
	t17                   = (0 - t16);
	t18                   = (t17 * -1);
	t18                   = (t18 + 1);
	t18                   = (t18 * 1U);
	t20                   = (t4 + 0U);
	t21                   = *((int*)t20);
	t22                   = (t19 + 0U);
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
	t23                   = (t7 + 4U);
	t26                   = (t1 + 2728);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t18);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	memcpy(t28, t13, t18);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t19;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t18;
	t32                   = (t8 + 4U);
	t33                   = (t3 != 0);
	if(t33 == 1)
		goto LAB3;

LAB2:
	t34            = (t8 + 12U);
	*((char**)t34) = t4;
	t35            = (t8 + 20U);
	t36            = (t5 != 0);
	if(t36 == 1)
		goto LAB5;

LAB4:
	t37            = (t8 + 28U);
	*((char**)t37) = t6;
	t38            = (t23 + 56U);
	t39            = *((char**)t38);
	t38            = (t19 + 12U);
	t25            = *((unsigned int*)t38);
	t25            = (t25 * 1U);
	t0             = xsi_get_transient_memory(t25);
	memcpy(t0, t39, t25);
	t40                   = (t19 + 0U);
	t41                   = *((int*)t40);
	t42                   = (t19 + 4U);
	t43                   = *((int*)t42);
	t44                   = (t19 + 8U);
	t45                   = *((int*)t44);
	t46                   = (t2 + 0U);
	t47                   = (t46 + 0U);
	*((int*)t47)          = t41;
	t47                   = (t46 + 4U);
	*((int*)t47)          = t43;
	t47                   = (t46 + 8U);
	*((int*)t47)          = t45;
	t48                   = (t43 - t41);
	t49                   = (t48 * t45);
	t49                   = (t49 + 1);
	t47                   = (t46 + 12U);
	*((unsigned int*)t47) = t49;

LAB1:
	return t0;
LAB3:
	*((char**)t32) = t3;
	goto LAB2;

LAB5:
	*((char**)t35) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2116600214_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t19[16];
	char*         t0;
	char*         t9;
	int           t10;
	int           t11;
	unsigned int  t12;
	char*         t13;
	char*         t14;
	char*         t15;
	int           t16;
	int           t17;
	unsigned int  t18;
	char*         t20;
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
	unsigned char t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	int           t45;
	char*         t46;
	char*         t47;
	int           t48;
	unsigned int  t49;

LAB0:
	t9  = (t4 + 0U);
	t10 = *((int*)t9);
	t11 = (0 - t10);
	t12 = (t11 * -1);
	t12 = (t12 + 1);
	t12 = (t12 * 1U);
	t13 = xsi_get_transient_memory(t12);
	memset(t13, 0, t12);
	t14 = t13;
	memset(t14, (unsigned char)1, t12);
	t15                   = (t4 + 0U);
	t16                   = *((int*)t15);
	t17                   = (0 - t16);
	t18                   = (t17 * -1);
	t18                   = (t18 + 1);
	t18                   = (t18 * 1U);
	t20                   = (t4 + 0U);
	t21                   = *((int*)t20);
	t22                   = (t19 + 0U);
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
	t23                   = (t7 + 4U);
	t26                   = (t1 + 2616);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t18);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	memcpy(t28, t13, t18);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t19;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t18;
	t32                   = (t8 + 4U);
	t33                   = (t3 != 0);
	if(t33 == 1)
		goto LAB3;

LAB2:
	t34            = (t8 + 12U);
	*((char**)t34) = t4;
	t35            = (t8 + 20U);
	t36            = (t5 != 0);
	if(t36 == 1)
		goto LAB5;

LAB4:
	t37            = (t8 + 28U);
	*((char**)t37) = t6;
	t38            = (t23 + 56U);
	t39            = *((char**)t38);
	t38            = (t19 + 12U);
	t25            = *((unsigned int*)t38);
	t25            = (t25 * 1U);
	t0             = xsi_get_transient_memory(t25);
	memcpy(t0, t39, t25);
	t40                   = (t19 + 0U);
	t41                   = *((int*)t40);
	t42                   = (t19 + 4U);
	t43                   = *((int*)t42);
	t44                   = (t19 + 8U);
	t45                   = *((int*)t44);
	t46                   = (t2 + 0U);
	t47                   = (t46 + 0U);
	*((int*)t47)          = t41;
	t47                   = (t46 + 4U);
	*((int*)t47)          = t43;
	t47                   = (t46 + 8U);
	*((int*)t47)          = t45;
	t48                   = (t43 - t41);
	t49                   = (t48 * t45);
	t49                   = (t49 + 1);
	t47                   = (t46 + 12U);
	*((unsigned int*)t47) = t49;

LAB1:
	return t0;
LAB3:
	*((char**)t32) = t3;
	goto LAB2;

LAB5:
	*((char**)t35) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_230791002_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t27[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	int           t15;
	unsigned int  t16;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned int  t20;
	char*         t21;
	unsigned int  t22;
	int           t23;
	int           t24;
	int           t25;
	unsigned int  t26;
	char*         t28;
	unsigned int  t29;
	char*         t30;
	unsigned int  t31;
	int           t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	unsigned char t45;
	char*         t46;
	char*         t47;
	unsigned char t48;
	char*         t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	char*         t54;
	int           t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	int           t60;
	unsigned int  t61;

LAB0:
	t9  = (t4 + 12U);
	t10 = *((unsigned int*)t9);
	t11 = (t6 + 12U);
	t12 = *((unsigned int*)t11);
	t13 = (t10 + t12);
	t14 = (t13 - 1);
	t15 = (0 - t14);
	t16 = (t15 * -1);
	t16 = (t16 + 1);
	t16 = (t16 * 1U);
	t17 = xsi_get_transient_memory(t16);
	memset(t17, 0, t16);
	t18 = t17;
	memset(t18, (unsigned char)1, t16);
	t19                   = (t4 + 12U);
	t20                   = *((unsigned int*)t19);
	t21                   = (t6 + 12U);
	t22                   = *((unsigned int*)t21);
	t23                   = (t20 + t22);
	t24                   = (t23 - 1);
	t25                   = (0 - t24);
	t26                   = (t25 * -1);
	t26                   = (t26 + 1);
	t26                   = (t26 * 1U);
	t28                   = (t4 + 12U);
	t29                   = *((unsigned int*)t28);
	t30                   = (t6 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t29 + t31);
	t33                   = (t32 - 1);
	t34                   = (t27 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t33;
	t35                   = (t34 + 4U);
	*((int*)t35)          = 0;
	t35                   = (t34 + 8U);
	*((int*)t35)          = -1;
	t36                   = (0 - t33);
	t37                   = (t36 * -1);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t7 + 4U);
	t38                   = (t1 + 2728);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t26);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	memcpy(t40, t17, t26);
	t42                   = (t35 + 64U);
	*((char**)t42)        = t27;
	t43                   = (t35 + 80U);
	*((unsigned int*)t43) = t26;
	t44                   = (t8 + 4U);
	t45                   = (t3 != 0);
	if(t45 == 1)
		goto LAB3;

LAB2:
	t46            = (t8 + 12U);
	*((char**)t46) = t4;
	t47            = (t8 + 20U);
	t48            = (t5 != 0);
	if(t48 == 1)
		goto LAB5;

LAB4:
	t49            = (t8 + 28U);
	*((char**)t49) = t6;
	t50            = (t35 + 56U);
	t51            = *((char**)t50);
	t50            = (t27 + 12U);
	t37            = *((unsigned int*)t50);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t51, t37);
	t52                   = (t27 + 0U);
	t53                   = *((int*)t52);
	t54                   = (t27 + 4U);
	t55                   = *((int*)t54);
	t56                   = (t27 + 8U);
	t57                   = *((int*)t56);
	t58                   = (t2 + 0U);
	t59                   = (t58 + 0U);
	*((int*)t59)          = t53;
	t59                   = (t58 + 4U);
	*((int*)t59)          = t55;
	t59                   = (t58 + 8U);
	*((int*)t59)          = t57;
	t60                   = (t55 - t53);
	t61                   = (t60 * t57);
	t61                   = (t61 + 1);
	t59                   = (t58 + 12U);
	*((unsigned int*)t59) = t61;

LAB1:
	return t0;
LAB3:
	*((char**)t44) = t3;
	goto LAB2;

LAB5:
	*((char**)t47) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2172687853_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t27[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	int           t15;
	unsigned int  t16;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned int  t20;
	char*         t21;
	unsigned int  t22;
	int           t23;
	int           t24;
	int           t25;
	unsigned int  t26;
	char*         t28;
	unsigned int  t29;
	char*         t30;
	unsigned int  t31;
	int           t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	unsigned char t45;
	char*         t46;
	char*         t47;
	unsigned char t48;
	char*         t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	char*         t54;
	int           t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	int           t60;
	unsigned int  t61;

LAB0:
	t9  = (t4 + 12U);
	t10 = *((unsigned int*)t9);
	t11 = (t6 + 12U);
	t12 = *((unsigned int*)t11);
	t13 = (t10 + t12);
	t14 = (t13 - 1);
	t15 = (0 - t14);
	t16 = (t15 * -1);
	t16 = (t16 + 1);
	t16 = (t16 * 1U);
	t17 = xsi_get_transient_memory(t16);
	memset(t17, 0, t16);
	t18 = t17;
	memset(t18, (unsigned char)1, t16);
	t19                   = (t4 + 12U);
	t20                   = *((unsigned int*)t19);
	t21                   = (t6 + 12U);
	t22                   = *((unsigned int*)t21);
	t23                   = (t20 + t22);
	t24                   = (t23 - 1);
	t25                   = (0 - t24);
	t26                   = (t25 * -1);
	t26                   = (t26 + 1);
	t26                   = (t26 * 1U);
	t28                   = (t4 + 12U);
	t29                   = *((unsigned int*)t28);
	t30                   = (t6 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t29 + t31);
	t33                   = (t32 - 1);
	t34                   = (t27 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t33;
	t35                   = (t34 + 4U);
	*((int*)t35)          = 0;
	t35                   = (t34 + 8U);
	*((int*)t35)          = -1;
	t36                   = (0 - t33);
	t37                   = (t36 * -1);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t7 + 4U);
	t38                   = (t1 + 2616);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t26);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	memcpy(t40, t17, t26);
	t42                   = (t35 + 64U);
	*((char**)t42)        = t27;
	t43                   = (t35 + 80U);
	*((unsigned int*)t43) = t26;
	t44                   = (t8 + 4U);
	t45                   = (t3 != 0);
	if(t45 == 1)
		goto LAB3;

LAB2:
	t46            = (t8 + 12U);
	*((char**)t46) = t4;
	t47            = (t8 + 20U);
	t48            = (t5 != 0);
	if(t48 == 1)
		goto LAB5;

LAB4:
	t49            = (t8 + 28U);
	*((char**)t49) = t6;
	t50            = (t35 + 56U);
	t51            = *((char**)t50);
	t50            = (t27 + 12U);
	t37            = *((unsigned int*)t50);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t51, t37);
	t52                   = (t27 + 0U);
	t53                   = *((int*)t52);
	t54                   = (t27 + 4U);
	t55                   = *((int*)t54);
	t56                   = (t27 + 8U);
	t57                   = *((int*)t56);
	t58                   = (t2 + 0U);
	t59                   = (t58 + 0U);
	*((int*)t59)          = t53;
	t59                   = (t58 + 4U);
	*((int*)t59)          = t55;
	t59                   = (t58 + 8U);
	*((int*)t59)          = t57;
	t60                   = (t55 - t53);
	t61                   = (t60 * t57);
	t61                   = (t61 + 1);
	t59                   = (t58 + 12U);
	*((unsigned int*)t59) = t61;

LAB1:
	return t0;
LAB3:
	*((char**)t44) = t3;
	goto LAB2;

LAB5:
	*((char**)t47) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2888649822_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[608];
	char          t8[40];
	char          t17[16];
	char          t41[16];
	char          t61[16];
	char          t77[8];
	char          t82[16];
	char          t88[8];
	char          t132[16];
	char          t133[16];
	char          t134[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	int           t15;
	unsigned int  t16;
	char*         t18;
	unsigned int  t19;
	char*         t20;
	unsigned int  t21;
	int           t22;
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
	char*         t34;
	char*         t35;
	unsigned int  t36;
	int           t37;
	int           t38;
	int           t39;
	unsigned int  t40;
	char*         t42;
	unsigned int  t43;
	char*         t44;
	unsigned int  t45;
	int           t46;
	int           t47;
	char*         t48;
	char*         t49;
	int           t50;
	unsigned int  t51;
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	char*         t57;
	char*         t58;
	int           t59;
	unsigned int  t60;
	char*         t62;
	unsigned int  t63;
	char*         t64;
	char*         t65;
	int           t66;
	unsigned int  t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	char*         t76;
	char*         t78;
	char*         t79;
	char*         t80;
	char*         t83;
	char*         t84;
	int           t85;
	char*         t86;
	char*         t87;
	char*         t89;
	char*         t90;
	char*         t91;
	char*         t92;
	unsigned char t93;
	char*         t94;
	char*         t95;
	unsigned char t96;
	char*         t97;
	unsigned char t98;
	char*         t99;
	int           t100;
	char*         t101;
	int           t102;
	char*         t103;
	int           t104;
	int           t105;
	unsigned int  t106;
	unsigned int  t107;
	char*         t108;
	unsigned char t109;
	unsigned char t110;
	char*         t111;
	int           t112;
	char*         t113;
	int           t114;
	char*         t115;
	int           t116;
	int           t117;
	unsigned int  t118;
	unsigned int  t119;
	unsigned int  t120;
	char*         t121;
	unsigned char t122;
	unsigned char t123;
	char*         t124;
	unsigned int  t125;
	char*         t126;
	char*         t127;
	char*         t128;
	char*         t129;
	char*         t130;
	unsigned int  t131;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t6 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t10 + t12);
	t14                   = (t13 - 1);
	t15                   = (0 - t14);
	t16                   = (t15 * -1);
	t16                   = (t16 + 1);
	t16                   = (t16 * 1U);
	t18                   = (t4 + 12U);
	t19                   = *((unsigned int*)t18);
	t20                   = (t6 + 12U);
	t21                   = *((unsigned int*)t20);
	t22                   = (t19 + t21);
	t23                   = (t22 - 1);
	t24                   = (t17 + 0U);
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
	t25                   = (t7 + 4U);
	t28                   = (t1 + 2728);
	t29                   = (t25 + 88U);
	*((char**)t29)        = t28;
	t30                   = (char*)alloca(t16);
	t31                   = (t25 + 56U);
	*((char**)t31)        = t30;
	xsi_type_set_default_value(t28, t30, t17);
	t32                   = (t25 + 64U);
	*((char**)t32)        = t17;
	t33                   = (t25 + 80U);
	*((unsigned int*)t33) = t16;
	t34                   = (t4 + 12U);
	t27                   = *((unsigned int*)t34);
	t35                   = (t6 + 12U);
	t36                   = *((unsigned int*)t35);
	t37                   = (t27 + t36);
	t38                   = (t37 - 1);
	t39                   = (0 - t38);
	t40                   = (t39 * -1);
	t40                   = (t40 + 1);
	t40                   = (t40 * 1U);
	t42                   = (t4 + 12U);
	t43                   = *((unsigned int*)t42);
	t44                   = (t6 + 12U);
	t45                   = *((unsigned int*)t44);
	t46                   = (t43 + t45);
	t47                   = (t46 - 1);
	t48                   = (t41 + 0U);
	t49                   = (t48 + 0U);
	*((int*)t49)          = t47;
	t49                   = (t48 + 4U);
	*((int*)t49)          = 0;
	t49                   = (t48 + 8U);
	*((int*)t49)          = -1;
	t50                   = (0 - t47);
	t51                   = (t50 * -1);
	t51                   = (t51 + 1);
	t49                   = (t48 + 12U);
	*((unsigned int*)t49) = t51;
	t49                   = (t7 + 124U);
	t52                   = (t1 + 2728);
	t53                   = (t49 + 88U);
	*((char**)t53)        = t52;
	t54                   = (char*)alloca(t40);
	t55                   = (t49 + 56U);
	*((char**)t55)        = t54;
	xsi_type_set_default_value(t52, t54, t41);
	t56                   = (t49 + 64U);
	*((char**)t56)        = t41;
	t57                   = (t49 + 80U);
	*((unsigned int*)t57) = t40;
	t58                   = (t4 + 12U);
	t51                   = *((unsigned int*)t58);
	t59                   = (0 - t51);
	t60                   = (t59 * -1);
	t60                   = (t60 + 1);
	t60                   = (t60 * 1U);
	t62                   = (t4 + 12U);
	t63                   = *((unsigned int*)t62);
	t64                   = (t61 + 0U);
	t65                   = (t64 + 0U);
	*((unsigned int*)t65) = t63;
	t65                   = (t64 + 4U);
	*((int*)t65)          = 0;
	t65                   = (t64 + 8U);
	*((int*)t65)          = -1;
	t66                   = (0 - t63);
	t67                   = (t66 * -1);
	t67                   = (t67 + 1);
	t65                   = (t64 + 12U);
	*((unsigned int*)t65) = t67;
	t65                   = (t7 + 244U);
	t68                   = (t1 + 2728);
	t69                   = (t65 + 88U);
	*((char**)t69)        = t68;
	t70                   = (char*)alloca(t60);
	t71                   = (t65 + 56U);
	*((char**)t71)        = t70;
	xsi_type_set_default_value(t68, t70, t61);
	t72                   = (t65 + 64U);
	*((char**)t72)        = t61;
	t73                   = (t65 + 80U);
	*((unsigned int*)t73) = t60;
	t74                   = (t7 + 364U);
	t75                   = ((IEEE_P_2592010699) + 3224);
	t76                   = (t74 + 88U);
	*((char**)t76)        = t75;
	t78                   = (t74 + 56U);
	*((char**)t78)        = t77;
	xsi_type_set_default_value(t75, t77, 0);
	t79                   = (t74 + 80U);
	*((unsigned int*)t79) = 1U;
	t80                   = (t1 + 5462);
	t83                   = (t82 + 0U);
	t84                   = (t83 + 0U);
	*((int*)t84)          = 1;
	t84                   = (t83 + 4U);
	*((int*)t84)          = 0;
	t84                   = (t83 + 8U);
	*((int*)t84)          = -1;
	t85                   = (0 - 1);
	t67                   = (t85 * -1);
	t67                   = (t67 + 1);
	t84                   = (t83 + 12U);
	*((unsigned int*)t84) = t67;
	t84                   = (t7 + 484U);
	t86                   = (t1 + 2616);
	t87                   = (t84 + 88U);
	*((char**)t87)        = t86;
	t89                   = (t84 + 56U);
	*((char**)t89)        = t88;
	memcpy(t88, t80, 2U);
	t90                   = (t84 + 64U);
	*((char**)t90)        = t82;
	t91                   = (t84 + 80U);
	*((unsigned int*)t91) = 2U;
	t92                   = (t8 + 4U);
	t93                   = (t3 != 0);
	if(t93 == 1)
		goto LAB3;

LAB2:
	t94            = (t8 + 12U);
	*((char**)t94) = t4;
	t95            = (t8 + 20U);
	t96            = (t5 != 0);
	if(t96 == 1)
		goto LAB5;

LAB4:
	t97            = (t8 + 28U);
	*((char**)t97) = t6;
	t99            = (t4 + 0U);
	t100           = *((int*)t99);
	t101           = (t4 + 0U);
	t102           = *((int*)t101);
	t103           = (t4 + 8U);
	t104           = *((int*)t103);
	t105           = (t100 - t102);
	t67            = (t105 * t104);
	t106           = (1U * t67);
	t107           = (0 + t106);
	t108           = (t3 + t107);
	t109           = *((unsigned char*)t108);
	t110           = (t109 == (unsigned char)1);
	if(t110 == 1)
		goto LAB9;

LAB10:
	t111 = (t6 + 0U);
	t112 = *((int*)t111);
	t113 = (t6 + 0U);
	t114 = *((int*)t113);
	t115 = (t6 + 8U);
	t116 = *((int*)t115);
	t117 = (t112 - t114);
	t118 = (t117 * t116);
	t119 = (1U * t118);
	t120 = (0 + t119);
	t121 = (t5 + t120);
	t122 = *((unsigned char*)t121);
	t123 = (t122 == (unsigned char)1);
	t98  = t123;

LAB11:
	if(t98 != 0)
		goto LAB6;

LAB8:
LAB7:
	t9  = (t41 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t11 = xsi_get_transient_memory(t10);
	memset(t11, 0, t10);
	t18 = t11;
	memset(t18, (unsigned char)2, t10);
	t20 = (t49 + 56U);
	t24 = *((char**)t20);
	t20 = (t24 + 0);
	t28 = (t41 + 12U);
	t12 = *((unsigned int*)t28);
	t12 = (t12 * 1U);
	memcpy(t20, t11, t12);
	t9  = (t6 + 0U);
	t13 = *((int*)t9);
	t11 = (t6 + 0U);
	t14 = *((int*)t11);
	t18 = (t6 + 8U);
	t15 = *((int*)t18);
	t22 = (t13 - t14);
	t10 = (t22 * t15);
	t12 = (1U * t10);
	t16 = (0 + t12);
	t20 = (t5 + t16);
	t93 = *((unsigned char*)t20);
	t24 = (t4 + 0U);
	t23 = *((int*)t24);
	t28 = (t4 + 0U);
	t26 = *((int*)t28);
	t29 = (t4 + 8U);
	t37 = *((int*)t29);
	t38 = (t23 - t26);
	t19 = (t38 * t37);
	t21 = (1U * t19);
	t27 = (0 + t21);
	t31 = (t3 + t27);
	t96 = *((unsigned char*)t31);
	t98 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t93, t96);
	t32 = (t74 + 56U);
	t33 = *((char**)t32);
	t32 = (t33 + 0);
	*((unsigned char*)t32) = t98;
	t9  = ieee_p_3499444699_sub_3466875835_3536714472(t1, t133, t5, t6);
	t18 = (t1 + 2728);
	t11 = xsi_base_array_concat(
	    t11, t134, t18, (char)99, (unsigned char)2, (char)97, t9, t133, (char)101);
	t20 = (t4 + 12U);
	t10 = *((unsigned int*)t20);
	t24 = (t6 + 12U);
	t12 = *((unsigned int*)t24);
	t13 = (t10 + t12);
	t28 = ieee_std_logic_arith_conv_signed_signext(t1, t132, t11, t134, t13);
	t29 = (t25 + 56U);
	t31 = *((char**)t29);
	t29 = (t31 + 0);
	t32 = (t132 + 12U);
	t16 = *((unsigned int*)t32);
	t16 = (t16 * 1U);
	memcpy(t29, t28, t16);
	t9  = ieee_p_3499444699_sub_3466875835_3536714472(t1, t132, t3, t4);
	t18 = (t1 + 2728);
	t11 = xsi_base_array_concat(
	    t11, t133, t18, (char)99, (unsigned char)2, (char)97, t9, t132, (char)101);
	t20 = (t65 + 56U);
	t24 = *((char**)t20);
	t20 = (t24 + 0);
	t28 = (t132 + 12U);
	t10 = *((unsigned int*)t28);
	t12 = (1U * t10);
	t16 = (1U + t12);
	memcpy(t20, t11, t16);
	t9  = (t4 + 12U);
	t10 = *((unsigned int*)t9);
	t13 = (t10 - 1);
	t14 = 0;
	t15 = t13;

LAB13:
	if(t14 <= t15)
		goto LAB14;

LAB16:
	t9  = (t74 + 56U);
	t11 = *((char**)t9);
	t93 = *((unsigned char*)t11);
	t96 = (t93 == (unsigned char)3);
	if(t96 != 0)
		goto LAB21;

LAB23:
	t9  = (t49 + 56U);
	t11 = *((char**)t9);
	t9  = (t41 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t11, t10);
	t18                   = (t41 + 0U);
	t13                   = *((int*)t18);
	t20                   = (t41 + 4U);
	t14                   = *((int*)t20);
	t24                   = (t41 + 8U);
	t15                   = *((int*)t24);
	t28                   = (t2 + 0U);
	t29                   = (t28 + 0U);
	*((int*)t29)          = t13;
	t29                   = (t28 + 4U);
	*((int*)t29)          = t14;
	t29                   = (t28 + 8U);
	*((int*)t29)          = t15;
	t22                   = (t14 - t13);
	t12                   = (t22 * t15);
	t12                   = (t12 + 1);
	t29                   = (t28 + 12U);
	*((unsigned int*)t29) = t12;

LAB1:
	return t0;
LAB3:
	*((char**)t92) = t3;
	goto LAB2;

LAB5:
	*((char**)t95) = t5;
	goto LAB4;

LAB6:
	t124 = (t41 + 12U);
	t125 = *((unsigned int*)t124);
	t125 = (t125 * 1U);
	t126 = xsi_get_transient_memory(t125);
	memset(t126, 0, t125);
	t127 = t126;
	memset(t127, (unsigned char)1, t125);
	t128 = (t49 + 56U);
	t129 = *((char**)t128);
	t128 = (t129 + 0);
	t130 = (t41 + 12U);
	t131 = *((unsigned int*)t130);
	t131 = (t131 * 1U);
	memcpy(t128, t126, t131);
	t9  = (t49 + 56U);
	t11 = *((char**)t9);
	t9  = (t41 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t11, t10);
	t18                   = (t41 + 0U);
	t13                   = *((int*)t18);
	t20                   = (t41 + 4U);
	t14                   = *((int*)t20);
	t24                   = (t41 + 8U);
	t15                   = *((int*)t24);
	t28                   = (t2 + 0U);
	t29                   = (t28 + 0U);
	*((int*)t29)          = t13;
	t29                   = (t28 + 4U);
	*((int*)t29)          = t14;
	t29                   = (t28 + 8U);
	*((int*)t29)          = t15;
	t22                   = (t14 - t13);
	t12                   = (t22 * t15);
	t12                   = (t12 + 1);
	t29                   = (t28 + 12U);
	*((unsigned int*)t29) = t12;
	goto LAB1;

LAB9:
	t98 = (unsigned char)1;
	goto LAB11;

LAB12:
	goto LAB7;

LAB14:
	t11 = (t65 + 56U);
	t18 = *((char**)t11);
	t11 = (t61 + 0U);
	t22 = *((int*)t11);
	t20 = (t61 + 8U);
	t23 = *((int*)t20);
	t26 = (t14 - t22);
	t12 = (t26 * t23);
	t24 = (t61 + 4U);
	t37 = *((int*)t24);
	xsi_vhdl_check_range_of_index(t22, t37, t23, t14);
	t16 = (1U * t12);
	t19 = (0 + t16);
	t28 = (t18 + t19);
	t93 = *((unsigned char*)t28);
	t96 = (t93 == (unsigned char)3);
	if(t96 != 0)
		goto LAB17;

LAB19:
LAB18:
	t9  = (t25 + 56U);
	t11 = *((char**)t9);
	t9  = (t84 + 56U);
	t18 = *((char**)t9);
	t9  = ieee_p_3499444699_sub_3265085561_3536714472(t1, t132, t11, t17, t18, t82);
	t20 = (t25 + 56U);
	t24 = *((char**)t20);
	t20 = (t24 + 0);
	t28 = (t132 + 12U);
	t10 = *((unsigned int*)t28);
	t10 = (t10 * 1U);
	memcpy(t20, t9, t10);

LAB15:
	if(t14 == t15)
		goto LAB16;

LAB20:
	t13 = (t14 + 1);
	t14 = t13;
	goto LAB13;

LAB17:
	t29 = (t49 + 56U);
	t31 = *((char**)t29);
	t29 = (t25 + 56U);
	t32 = *((char**)t29);
	t29 = ieee_p_3499444699_sub_3158760445_3536714472(t1, t132, t31, t41, t32, t17);
	t33 = (t49 + 56U);
	t34 = *((char**)t33);
	t33 = (t34 + 0);
	t35 = (t132 + 12U);
	t21 = *((unsigned int*)t35);
	t27 = (1U * t21);
	memcpy(t33, t29, t27);
	goto LAB18;

LAB21:
	t9  = (t49 + 56U);
	t18 = *((char**)t9);
	t9  = ieee_p_3499444699_sub_2998320402_3536714472(t1, t132, t18, t41);
	t20 = (t132 + 12U);
	t10 = *((unsigned int*)t20);
	t12 = (1U * t10);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t9, t12);
	t24                   = (t132 + 0U);
	t13                   = *((int*)t24);
	t28                   = (t132 + 4U);
	t14                   = *((int*)t28);
	t29                   = (t132 + 8U);
	t15                   = *((int*)t29);
	t31                   = (t2 + 0U);
	t32                   = (t31 + 0U);
	*((int*)t32)          = t13;
	t32                   = (t31 + 4U);
	*((int*)t32)          = t14;
	t32                   = (t31 + 8U);
	*((int*)t32)          = t15;
	t22                   = (t14 - t13);
	t16                   = (t22 * t15);
	t16                   = (t16 + 1);
	t32                   = (t31 + 12U);
	*((unsigned int*)t32) = t16;
	goto LAB1;

LAB22:
	xsi_error(ng4);
	t0 = 0;
	goto LAB1;

LAB24:
	goto LAB22;

LAB25:
	goto LAB22;
}

char* ieee_p_3499444699_sub_1598393164_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[368];
	char          t8[40];
	char          t18[8];
	char          t26[16];
	char          t42[16];
	char          t94[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	int           t23;
	int           t24;
	unsigned int  t25;
	char*         t27;
	int           t28;
	char*         t29;
	int           t30;
	unsigned int  t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	char*         t38;
	char*         t39;
	int           t40;
	int           t41;
	char*         t43;
	int           t44;
	char*         t45;
	int           t46;
	unsigned int  t47;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	char*         t52;
	char*         t53;
	char*         t54;
	unsigned char t55;
	char*         t56;
	char*         t57;
	unsigned char t58;
	char*         t59;
	unsigned char t60;
	char*         t61;
	int           t62;
	char*         t63;
	int           t64;
	char*         t65;
	int           t66;
	int           t67;
	unsigned int  t68;
	unsigned int  t69;
	char*         t70;
	unsigned char t71;
	unsigned char t72;
	char*         t73;
	int           t74;
	char*         t75;
	int           t76;
	char*         t77;
	int           t78;
	int           t79;
	unsigned int  t80;
	unsigned int  t81;
	unsigned int  t82;
	char*         t83;
	unsigned char t84;
	unsigned char t85;
	char*         t86;
	unsigned int  t87;
	char*         t88;
	char*         t89;
	char*         t90;
	char*         t91;
	char*         t92;
	unsigned int  t93;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t6 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t10 + t12);
	t14                   = (t13 - 1);
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t15 + 56U);
	t22                   = *((char**)t21);
	t23                   = *((int*)t22);
	t24                   = (0 - t23);
	t25                   = (t24 * -1);
	t25                   = (t25 + 1);
	t25                   = (t25 * 1U);
	t21                   = (t15 + 56U);
	t27                   = *((char**)t21);
	t28                   = *((int*)t27);
	t21                   = (t26 + 0U);
	t29                   = (t21 + 0U);
	*((int*)t29)          = t28;
	t29                   = (t21 + 4U);
	*((int*)t29)          = 0;
	t29                   = (t21 + 8U);
	*((int*)t29)          = -1;
	t30                   = (0 - t28);
	t31                   = (t30 * -1);
	t31                   = (t31 + 1);
	t29                   = (t21 + 12U);
	*((unsigned int*)t29) = t31;
	t29                   = (t7 + 124U);
	t32                   = (t1 + 2616);
	t33                   = (t29 + 88U);
	*((char**)t33)        = t32;
	t34                   = (char*)alloca(t25);
	t35                   = (t29 + 56U);
	*((char**)t35)        = t34;
	xsi_type_set_default_value(t32, t34, t26);
	t36                   = (t29 + 64U);
	*((char**)t36)        = t26;
	t37                   = (t29 + 80U);
	*((unsigned int*)t37) = t25;
	t38                   = (t15 + 56U);
	t39                   = *((char**)t38);
	t40                   = *((int*)t39);
	t41                   = (0 - t40);
	t31                   = (t41 * -1);
	t31                   = (t31 + 1);
	t31                   = (t31 * 1U);
	t38                   = (t15 + 56U);
	t43                   = *((char**)t38);
	t44                   = *((int*)t43);
	t38                   = (t42 + 0U);
	t45                   = (t38 + 0U);
	*((int*)t45)          = t44;
	t45                   = (t38 + 4U);
	*((int*)t45)          = 0;
	t45                   = (t38 + 8U);
	*((int*)t45)          = -1;
	t46                   = (0 - t44);
	t47                   = (t46 * -1);
	t47                   = (t47 + 1);
	t45                   = (t38 + 12U);
	*((unsigned int*)t45) = t47;
	t45                   = (t7 + 244U);
	t48                   = (t1 + 2616);
	t49                   = (t45 + 88U);
	*((char**)t49)        = t48;
	t50                   = (char*)alloca(t31);
	t51                   = (t45 + 56U);
	*((char**)t51)        = t50;
	xsi_type_set_default_value(t48, t50, t42);
	t52                   = (t45 + 64U);
	*((char**)t52)        = t42;
	t53                   = (t45 + 80U);
	*((unsigned int*)t53) = t31;
	t54                   = (t8 + 4U);
	t55                   = (t3 != 0);
	if(t55 == 1)
		goto LAB3;

LAB2:
	t56            = (t8 + 12U);
	*((char**)t56) = t4;
	t57            = (t8 + 20U);
	t58            = (t5 != 0);
	if(t58 == 1)
		goto LAB5;

LAB4:
	t59            = (t8 + 28U);
	*((char**)t59) = t6;
	t61            = (t4 + 0U);
	t62            = *((int*)t61);
	t63            = (t4 + 0U);
	t64            = *((int*)t63);
	t65            = (t4 + 8U);
	t66            = *((int*)t65);
	t67            = (t62 - t64);
	t47            = (t67 * t66);
	t68            = (1U * t47);
	t69            = (0 + t68);
	t70            = (t3 + t69);
	t71            = *((unsigned char*)t70);
	t72            = (t71 == (unsigned char)1);
	if(t72 == 1)
		goto LAB9;

LAB10:
	t73 = (t6 + 0U);
	t74 = *((int*)t73);
	t75 = (t6 + 0U);
	t76 = *((int*)t75);
	t77 = (t6 + 8U);
	t78 = *((int*)t77);
	t79 = (t74 - t76);
	t80 = (t79 * t78);
	t81 = (1U * t80);
	t82 = (0 + t81);
	t83 = (t5 + t82);
	t84 = *((unsigned char*)t83);
	t85 = (t84 == (unsigned char)1);
	t60 = t85;

LAB11:
	if(t60 != 0)
		goto LAB6;

LAB8:
LAB7:
	t9  = (t42 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t11 = xsi_get_transient_memory(t10);
	memset(t11, 0, t10);
	t16 = t11;
	memset(t16, (unsigned char)2, t10);
	t17 = (t45 + 56U);
	t19 = *((char**)t17);
	t17 = (t19 + 0);
	t20 = (t42 + 12U);
	t12 = *((unsigned int*)t20);
	t12 = (t12 * 1U);
	memcpy(t17, t11, t12);
	t9  = (t4 + 12U);
	t10 = *((unsigned int*)t9);
	t11 = (t6 + 12U);
	t12 = *((unsigned int*)t11);
	t13 = (t10 + t12);
	t16 = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t94, t5, t6, t13);
	t17 = (t29 + 56U);
	t19 = *((char**)t17);
	t17 = (t19 + 0);
	t20 = (t94 + 12U);
	t25 = *((unsigned int*)t20);
	t25 = (t25 * 1U);
	memcpy(t17, t16, t25);
	t9  = (t4 + 12U);
	t10 = *((unsigned int*)t9);
	t13 = (t10 - 1);
	t14 = 0;
	t23 = t13;

LAB13:
	if(t14 <= t23)
		goto LAB14;

LAB16:
	t9  = (t45 + 56U);
	t11 = *((char**)t9);
	t9  = (t42 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t11, t10);
	t16                   = (t42 + 0U);
	t13                   = *((int*)t16);
	t17                   = (t42 + 4U);
	t14                   = *((int*)t17);
	t19                   = (t42 + 8U);
	t23                   = *((int*)t19);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t14;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t23;
	t24                   = (t14 - t13);
	t12                   = (t24 * t23);
	t12                   = (t12 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t12;

LAB1:
	return t0;
LAB3:
	*((char**)t54) = t3;
	goto LAB2;

LAB5:
	*((char**)t57) = t5;
	goto LAB4;

LAB6:
	t86 = (t42 + 12U);
	t87 = *((unsigned int*)t86);
	t87 = (t87 * 1U);
	t88 = xsi_get_transient_memory(t87);
	memset(t88, 0, t87);
	t89 = t88;
	memset(t89, (unsigned char)1, t87);
	t90 = (t45 + 56U);
	t91 = *((char**)t90);
	t90 = (t91 + 0);
	t92 = (t42 + 12U);
	t93 = *((unsigned int*)t92);
	t93 = (t93 * 1U);
	memcpy(t90, t88, t93);
	t9  = (t45 + 56U);
	t11 = *((char**)t9);
	t9  = (t42 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t11, t10);
	t16                   = (t42 + 0U);
	t13                   = *((int*)t16);
	t17                   = (t42 + 4U);
	t14                   = *((int*)t17);
	t19                   = (t42 + 8U);
	t23                   = *((int*)t19);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t14;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t23;
	t24                   = (t14 - t13);
	t12                   = (t24 * t23);
	t12                   = (t12 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t12;
	goto LAB1;

LAB9:
	t60 = (unsigned char)1;
	goto LAB11;

LAB12:
	goto LAB7;

LAB14:
	t11 = (t4 + 0U);
	t24 = *((int*)t11);
	t16 = (t4 + 8U);
	t28 = *((int*)t16);
	t30 = (t14 - t24);
	t12 = (t30 * t28);
	t17 = (t4 + 4U);
	t40 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t24, t40, t28, t14);
	t25 = (1U * t12);
	t31 = (0 + t25);
	t19 = (t3 + t31);
	t55 = *((unsigned char*)t19);
	t58 = (t55 == (unsigned char)3);
	if(t58 != 0)
		goto LAB17;

LAB19:
LAB18:
	t9  = (t15 + 56U);
	t11 = *((char**)t9);
	t13 = *((int*)t11);
	t24 = t13;
	t28 = 1;

LAB20:
	if(t24 >= t28)
		goto LAB21;

LAB23:
	t9                     = (t29 + 56U);
	t11                    = *((char**)t9);
	t9                     = (t26 + 0U);
	t13                    = *((int*)t9);
	t16                    = (t26 + 8U);
	t24                    = *((int*)t16);
	t28                    = (0 - t13);
	t10                    = (t28 * t24);
	t12                    = (1U * t10);
	t25                    = (0 + t12);
	t17                    = (t11 + t25);
	*((unsigned char*)t17) = (unsigned char)2;

LAB15:
	if(t14 == t23)
		goto LAB16;

LAB25:
	t13 = (t14 + 1);
	t14 = t13;
	goto LAB13;

LAB17:
	t20 = (t45 + 56U);
	t21 = *((char**)t20);
	t20 = (t29 + 56U);
	t22 = *((char**)t20);
	t20 = ieee_p_3499444699_sub_2254111597_3536714472(t1, t94, t21, t42, t22, t26);
	t27 = (t45 + 56U);
	t32 = *((char**)t27);
	t27 = (t32 + 0);
	t33 = (t94 + 12U);
	t47 = *((unsigned int*)t33);
	t68 = (1U * t47);
	memcpy(t27, t20, t68);
	goto LAB18;

LAB21:
	t9  = (t29 + 56U);
	t16 = *((char**)t9);
	t30 = (t24 - 1);
	t9  = (t26 + 0U);
	t40 = *((int*)t9);
	t17 = (t26 + 8U);
	t41 = *((int*)t17);
	t44 = (t30 - t40);
	t10 = (t44 * t41);
	t19 = (t26 + 4U);
	t46 = *((int*)t19);
	xsi_vhdl_check_range_of_index(t40, t46, t41, t30);
	t12 = (1U * t10);
	t25 = (0 + t12);
	t20 = (t16 + t25);
	t55 = *((unsigned char*)t20);
	t21 = (t29 + 56U);
	t22 = *((char**)t21);
	t21 = (t26 + 0U);
	t62 = *((int*)t21);
	t27 = (t26 + 8U);
	t64 = *((int*)t27);
	t66 = (t24 - t62);
	t31 = (t66 * t64);
	t32 = (t26 + 4U);
	t67 = *((int*)t32);
	xsi_vhdl_check_range_of_index(t62, t67, t64, t24);
	t47                    = (1U * t31);
	t68                    = (0 + t47);
	t33                    = (t22 + t68);
	*((unsigned char*)t33) = t55;

LAB22:
	if(t24 == t28)
		goto LAB23;

LAB24:
	t13 = (t24 + -1);
	t24 = t13;
	goto LAB20;

LAB26:;
}

char* ieee_p_3499444699_sub_1658551380_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[368];
	char          t8[40];
	char          t12[8];
	char          t19[16];
	char          t35[16];
	char          t88[16];
	char*         t0;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	int           t16;
	int           t17;
	unsigned int  t18;
	char*         t20;
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
	int           t33;
	int           t34;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t47;
	char*         t48;
	unsigned char t49;
	char*         t50;
	char*         t51;
	unsigned char t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	int           t56;
	char*         t57;
	int           t58;
	char*         t59;
	int           t60;
	int           t61;
	unsigned int  t62;
	unsigned int  t63;
	char*         t64;
	unsigned char t65;
	unsigned char t66;
	char*         t67;
	int           t68;
	char*         t69;
	int           t70;
	char*         t71;
	int           t72;
	int           t73;
	unsigned int  t74;
	unsigned int  t75;
	unsigned int  t76;
	char*         t77;
	unsigned char t78;
	unsigned char t79;
	char*         t80;
	unsigned int  t81;
	char*         t82;
	char*         t83;
	char*         t84;
	char*         t85;
	char*         t86;
	unsigned int  t87;
	unsigned char t89;
	int           t90;
	int           t91;
	unsigned int  t92;
	unsigned int  t93;
	unsigned char t94;
	unsigned char t95;
	unsigned char t96;

LAB0:
	t9             = (t7 + 4U);
	t10            = ((IEEE_P_2592010699) + 3224);
	t11            = (t9 + 88U);
	*((char**)t11) = t10;
	t13            = (t9 + 56U);
	*((char**)t13) = t12;
	xsi_type_set_default_value(t10, t12, 0);
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 1U;
	t15                   = (t4 + 0U);
	t16                   = *((int*)t15);
	t17                   = (0 - t16);
	t18                   = (t17 * -1);
	t18                   = (t18 + 1);
	t18                   = (t18 * 1U);
	t20                   = (t4 + 0U);
	t21                   = *((int*)t20);
	t22                   = (t19 + 0U);
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
	t23                   = (t7 + 124U);
	t26                   = ((IEEE_P_2592010699) + 3912);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t18);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	xsi_type_set_default_value(t26, t28, t19);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t19;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t18;
	t32                   = (t4 + 0U);
	t33                   = *((int*)t32);
	t34                   = (0 - t33);
	t25                   = (t34 * -1);
	t25                   = (t25 + 1);
	t25                   = (t25 * 1U);
	t36                   = (t4 + 0U);
	t37                   = *((int*)t36);
	t38                   = (t35 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t37;
	t39                   = (t38 + 4U);
	*((int*)t39)          = 0;
	t39                   = (t38 + 8U);
	*((int*)t39)          = -1;
	t40                   = (0 - t37);
	t41                   = (t40 * -1);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;
	t39                   = (t7 + 244U);
	t42                   = (t1 + 2728);
	t43                   = (t39 + 88U);
	*((char**)t43)        = t42;
	t44                   = (char*)alloca(t25);
	t45                   = (t39 + 56U);
	*((char**)t45)        = t44;
	xsi_type_set_default_value(t42, t44, t35);
	t46                   = (t39 + 64U);
	*((char**)t46)        = t35;
	t47                   = (t39 + 80U);
	*((unsigned int*)t47) = t25;
	t48                   = (t8 + 4U);
	t49                   = (t3 != 0);
	if(t49 == 1)
		goto LAB3;

LAB2:
	t50            = (t8 + 12U);
	*((char**)t50) = t4;
	t51            = (t8 + 20U);
	t52            = (t5 != 0);
	if(t52 == 1)
		goto LAB5;

LAB4:
	t53            = (t8 + 28U);
	*((char**)t53) = t6;
	t55            = (t4 + 0U);
	t56            = *((int*)t55);
	t57            = (t4 + 0U);
	t58            = *((int*)t57);
	t59            = (t4 + 8U);
	t60            = *((int*)t59);
	t61            = (t56 - t58);
	t41            = (t61 * t60);
	t62            = (1U * t41);
	t63            = (0 + t62);
	t64            = (t3 + t63);
	t65            = *((unsigned char*)t64);
	t66            = (t65 == (unsigned char)1);
	if(t66 == 1)
		goto LAB9;

LAB10:
	t67 = (t6 + 0U);
	t68 = *((int*)t67);
	t69 = (t6 + 0U);
	t70 = *((int*)t69);
	t71 = (t6 + 8U);
	t72 = *((int*)t71);
	t73 = (t68 - t70);
	t74 = (t73 * t72);
	t75 = (1U * t74);
	t76 = (0 + t75);
	t77 = (t5 + t76);
	t78 = *((unsigned char*)t77);
	t79 = (t78 == (unsigned char)1);
	t54 = t79;

LAB11:
	if(t54 != 0)
		goto LAB6;

LAB8:
LAB7:
	t10                    = (t9 + 56U);
	t11                    = *((char**)t10);
	t10                    = (t11 + 0);
	*((unsigned char*)t10) = (unsigned char)3;
	t10 = ieee_p_2592010699_sub_3946049995_503743352(IEEE_P_2592010699, t88, t5, t6);
	t11 = (t23 + 56U);
	t13 = *((char**)t11);
	t11 = (t13 + 0);
	t14 = (t88 + 12U);
	t18 = *((unsigned int*)t14);
	t25 = (1U * t18);
	memcpy(t11, t10, t25);
	t10 = (t4 + 0U);
	t16 = *((int*)t10);
	t17 = 0;
	t21 = t16;

LAB13:
	if(t17 <= t21)
		goto LAB14;

LAB16:
	t10 = (t39 + 56U);
	t11 = *((char**)t10);
	t10 = (t35 + 12U);
	t18 = *((unsigned int*)t10);
	t18 = (t18 * 1U);
	t0  = xsi_get_transient_memory(t18);
	memcpy(t0, t11, t18);
	t13                   = (t35 + 0U);
	t16                   = *((int*)t13);
	t14                   = (t35 + 4U);
	t17                   = *((int*)t14);
	t15                   = (t35 + 8U);
	t21                   = *((int*)t15);
	t20                   = (t2 + 0U);
	t22                   = (t20 + 0U);
	*((int*)t22)          = t16;
	t22                   = (t20 + 4U);
	*((int*)t22)          = t17;
	t22                   = (t20 + 8U);
	*((int*)t22)          = t21;
	t24                   = (t17 - t16);
	t25                   = (t24 * t21);
	t25                   = (t25 + 1);
	t22                   = (t20 + 12U);
	*((unsigned int*)t22) = t25;

LAB1:
	return t0;
LAB3:
	*((char**)t48) = t3;
	goto LAB2;

LAB5:
	*((char**)t51) = t5;
	goto LAB4;

LAB6:
	t80 = (t35 + 12U);
	t81 = *((unsigned int*)t80);
	t81 = (t81 * 1U);
	t82 = xsi_get_transient_memory(t81);
	memset(t82, 0, t81);
	t83 = t82;
	memset(t83, (unsigned char)1, t81);
	t84 = (t39 + 56U);
	t85 = *((char**)t84);
	t84 = (t85 + 0);
	t86 = (t35 + 12U);
	t87 = *((unsigned int*)t86);
	t87 = (t87 * 1U);
	memcpy(t84, t82, t87);
	t10 = (t39 + 56U);
	t11 = *((char**)t10);
	t10 = (t35 + 12U);
	t18 = *((unsigned int*)t10);
	t18 = (t18 * 1U);
	t0  = xsi_get_transient_memory(t18);
	memcpy(t0, t11, t18);
	t13                   = (t35 + 0U);
	t16                   = *((int*)t13);
	t14                   = (t35 + 4U);
	t17                   = *((int*)t14);
	t15                   = (t35 + 8U);
	t21                   = *((int*)t15);
	t20                   = (t2 + 0U);
	t22                   = (t20 + 0U);
	*((int*)t22)          = t16;
	t22                   = (t20 + 4U);
	*((int*)t22)          = t17;
	t22                   = (t20 + 8U);
	*((int*)t22)          = t21;
	t24                   = (t17 - t16);
	t25                   = (t24 * t21);
	t25                   = (t25 + 1);
	t22                   = (t20 + 12U);
	*((unsigned int*)t22) = t25;
	goto LAB1;

LAB9:
	t54 = (unsigned char)1;
	goto LAB11;

LAB12:
	goto LAB7;

LAB14:
	t11 = (t4 + 0U);
	t24 = *((int*)t11);
	t13 = (t4 + 8U);
	t33 = *((int*)t13);
	t34 = (t17 - t24);
	t18 = (t34 * t33);
	t14 = (t4 + 4U);
	t37 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t24, t37, t33, t17);
	t25 = (1U * t18);
	t41 = (0 + t25);
	t15 = (t3 + t41);
	t49 = *((unsigned char*)t15);
	t20 = (t23 + 56U);
	t22 = *((char**)t20);
	t20 = (t19 + 0U);
	t40 = *((int*)t20);
	t26 = (t19 + 8U);
	t56 = *((int*)t26);
	t58 = (t17 - t40);
	t62 = (t58 * t56);
	t27 = (t19 + 4U);
	t60 = *((int*)t27);
	xsi_vhdl_check_range_of_index(t40, t60, t56, t17);
	t63 = (1U * t62);
	t74 = (0 + t63);
	t29 = (t22 + t74);
	t52 = *((unsigned char*)t29);
	t54 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t49, t52);
	t30 = (t9 + 56U);
	t31 = *((char**)t30);
	t65 = *((unsigned char*)t31);
	t66 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t54, t65);
	t30 = (t39 + 56U);
	t32 = *((char**)t30);
	t30 = (t35 + 0U);
	t61 = *((int*)t30);
	t36 = (t35 + 8U);
	t68 = *((int*)t36);
	t70 = (t17 - t61);
	t75 = (t70 * t68);
	t38 = (t35 + 4U);
	t72 = *((int*)t38);
	xsi_vhdl_check_range_of_index(t61, t72, t68, t17);
	t76                    = (1U * t75);
	t81                    = (0 + t76);
	t42                    = (t32 + t81);
	*((unsigned char*)t42) = t66;
	t10                    = (t4 + 0U);
	t16                    = *((int*)t10);
	t11                    = (t4 + 8U);
	t24                    = *((int*)t11);
	t33                    = (t17 - t16);
	t18                    = (t33 * t24);
	t13                    = (t4 + 4U);
	t34                    = *((int*)t13);
	xsi_vhdl_check_range_of_index(t16, t34, t24, t17);
	t25 = (1U * t18);
	t41 = (0 + t25);
	t14 = (t3 + t41);
	t49 = *((unsigned char*)t14);
	t15 = (t23 + 56U);
	t20 = *((char**)t15);
	t15 = (t19 + 0U);
	t37 = *((int*)t15);
	t22 = (t19 + 8U);
	t40 = *((int*)t22);
	t56 = (t17 - t37);
	t62 = (t56 * t40);
	t26 = (t19 + 4U);
	t58 = *((int*)t26);
	xsi_vhdl_check_range_of_index(t37, t58, t40, t17);
	t63 = (1U * t62);
	t74 = (0 + t63);
	t27 = (t20 + t74);
	t52 = *((unsigned char*)t27);
	t54 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t49, t52);
	t29 = (t4 + 0U);
	t60 = *((int*)t29);
	t30 = (t4 + 8U);
	t61 = *((int*)t30);
	t68 = (t17 - t60);
	t75 = (t68 * t61);
	t31 = (t4 + 4U);
	t70 = *((int*)t31);
	xsi_vhdl_check_range_of_index(t60, t70, t61, t17);
	t76 = (1U * t75);
	t81 = (0 + t76);
	t32 = (t3 + t81);
	t65 = *((unsigned char*)t32);
	t36 = (t9 + 56U);
	t38 = *((char**)t36);
	t66 = *((unsigned char*)t38);
	t78 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t65, t66);
	t79 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t54, t78);
	t36 = (t9 + 56U);
	t42 = *((char**)t36);
	t89 = *((unsigned char*)t42);
	t36 = (t23 + 56U);
	t43 = *((char**)t36);
	t36 = (t19 + 0U);
	t72 = *((int*)t36);
	t45 = (t19 + 8U);
	t73 = *((int*)t45);
	t90 = (t17 - t72);
	t87 = (t90 * t73);
	t46 = (t19 + 4U);
	t91 = *((int*)t46);
	xsi_vhdl_check_range_of_index(t72, t91, t73, t17);
	t92 = (1U * t87);
	t93 = (0 + t92);
	t47 = (t43 + t93);
	t94 = *((unsigned char*)t47);
	t95 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t89, t94);
	t96 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t79, t95);
	t55 = (t9 + 56U);
	t57 = *((char**)t55);
	t55 = (t57 + 0);
	*((unsigned char*)t55) = t96;

LAB15:
	if(t17 == t21)
		goto LAB16;

LAB17:
	t16 = (t17 + 1);
	t17 = t16;
	goto LAB13;

LAB18:;
}

char* ieee_p_3499444699_sub_3258556147_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[368];
	char          t8[40];
	char          t12[8];
	char          t19[16];
	char*         t0;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	int           t16;
	int           t17;
	unsigned int  t18;
	char*         t20;
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
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	char*         t38;
	char*         t39;
	unsigned char t40;
	char*         t41;
	char*         t42;
	unsigned char t43;
	char*         t44;
	unsigned char t45;
	char*         t46;
	int           t47;
	char*         t48;
	int           t49;
	char*         t50;
	int           t51;
	int           t52;
	unsigned int  t53;
	unsigned int  t54;
	char*         t55;
	unsigned char t56;
	unsigned char t57;
	char*         t58;
	int           t59;
	char*         t60;
	int           t61;
	char*         t62;
	int           t63;
	int           t64;
	unsigned int  t65;
	unsigned int  t66;
	unsigned int  t67;
	char*         t68;
	unsigned char t69;
	unsigned char t70;
	char*         t71;
	unsigned int  t72;
	char*         t73;
	char*         t74;
	char*         t75;
	char*         t76;
	char*         t77;
	unsigned int  t78;
	int           t79;
	int           t80;
	int           t81;
	unsigned char t82;
	int           t83;
	int           t84;
	unsigned int  t85;
	int           t86;
	unsigned int  t87;
	unsigned int  t88;
	unsigned char t89;
	unsigned char t90;
	unsigned char t91;

LAB0:
	t9             = (t7 + 4U);
	t10            = ((IEEE_P_2592010699) + 3224);
	t11            = (t9 + 88U);
	*((char**)t11) = t10;
	t13            = (t9 + 56U);
	*((char**)t13) = t12;
	xsi_type_set_default_value(t10, t12, 0);
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 1U;
	t15                   = (t4 + 0U);
	t16                   = *((int*)t15);
	t17                   = (0 - t16);
	t18                   = (t17 * -1);
	t18                   = (t18 + 1);
	t18                   = (t18 * 1U);
	t20                   = (t4 + 0U);
	t21                   = *((int*)t20);
	t22                   = (t19 + 0U);
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
	t23                   = (t7 + 124U);
	t26                   = (t1 + 2728);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t18);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	xsi_type_set_default_value(t26, t28, t19);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t19;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t18;
	t32                   = (t7 + 244U);
	t33                   = (t1 + 2728);
	t34                   = (t32 + 88U);
	*((char**)t34)        = t33;
	t35                   = (char*)alloca(t18);
	t36                   = (t32 + 56U);
	*((char**)t36)        = t35;
	xsi_type_set_default_value(t33, t35, t19);
	t37                   = (t32 + 64U);
	*((char**)t37)        = t19;
	t38                   = (t32 + 80U);
	*((unsigned int*)t38) = t18;
	t39                   = (t8 + 4U);
	t40                   = (t3 != 0);
	if(t40 == 1)
		goto LAB3;

LAB2:
	t41            = (t8 + 12U);
	*((char**)t41) = t4;
	t42            = (t8 + 20U);
	t43            = (t5 != 0);
	if(t43 == 1)
		goto LAB5;

LAB4:
	t44            = (t8 + 28U);
	*((char**)t44) = t6;
	t46            = (t4 + 0U);
	t47            = *((int*)t46);
	t48            = (t4 + 0U);
	t49            = *((int*)t48);
	t50            = (t4 + 8U);
	t51            = *((int*)t50);
	t52            = (t47 - t49);
	t25            = (t52 * t51);
	t53            = (1U * t25);
	t54            = (0 + t53);
	t55            = (t3 + t54);
	t56            = *((unsigned char*)t55);
	t57            = (t56 == (unsigned char)1);
	if(t57 == 1)
		goto LAB9;

LAB10:
	t58 = (t6 + 0U);
	t59 = *((int*)t58);
	t60 = (t6 + 0U);
	t61 = *((int*)t60);
	t62 = (t6 + 8U);
	t63 = *((int*)t62);
	t64 = (t59 - t61);
	t65 = (t64 * t63);
	t66 = (1U * t65);
	t67 = (0 + t66);
	t68 = (t5 + t67);
	t69 = *((unsigned char*)t68);
	t70 = (t69 == (unsigned char)1);
	t45 = t70;

LAB11:
	if(t45 != 0)
		goto LAB6;

LAB8:
LAB7:
	t10                    = (t9 + 56U);
	t11                    = *((char**)t10);
	t10                    = (t11 + 0);
	*((unsigned char*)t10) = (unsigned char)2;
	t10                    = (t23 + 56U);
	t11                    = *((char**)t10);
	t10                    = (t11 + 0);
	t13                    = (t6 + 12U);
	t18                    = *((unsigned int*)t13);
	t18                    = (t18 * 1U);
	memcpy(t10, t5, t18);
	t10 = (t4 + 0U);
	t16 = *((int*)t10);
	t17 = 0;
	t21 = t16;

LAB13:
	if(t17 <= t21)
		goto LAB14;

LAB16:
	t10 = (t32 + 56U);
	t11 = *((char**)t10);
	t10 = (t19 + 12U);
	t18 = *((unsigned int*)t10);
	t18 = (t18 * 1U);
	t0  = xsi_get_transient_memory(t18);
	memcpy(t0, t11, t18);
	t13                   = (t19 + 0U);
	t16                   = *((int*)t13);
	t14                   = (t19 + 4U);
	t17                   = *((int*)t14);
	t15                   = (t19 + 8U);
	t21                   = *((int*)t15);
	t20                   = (t2 + 0U);
	t22                   = (t20 + 0U);
	*((int*)t22)          = t16;
	t22                   = (t20 + 4U);
	*((int*)t22)          = t17;
	t22                   = (t20 + 8U);
	*((int*)t22)          = t21;
	t24                   = (t17 - t16);
	t25                   = (t24 * t21);
	t25                   = (t25 + 1);
	t22                   = (t20 + 12U);
	*((unsigned int*)t22) = t25;

LAB1:
	return t0;
LAB3:
	*((char**)t39) = t3;
	goto LAB2;

LAB5:
	*((char**)t42) = t5;
	goto LAB4;

LAB6:
	t71 = (t19 + 12U);
	t72 = *((unsigned int*)t71);
	t72 = (t72 * 1U);
	t73 = xsi_get_transient_memory(t72);
	memset(t73, 0, t72);
	t74 = t73;
	memset(t74, (unsigned char)1, t72);
	t75 = (t32 + 56U);
	t76 = *((char**)t75);
	t75 = (t76 + 0);
	t77 = (t19 + 12U);
	t78 = *((unsigned int*)t77);
	t78 = (t78 * 1U);
	memcpy(t75, t73, t78);
	t10 = (t32 + 56U);
	t11 = *((char**)t10);
	t10 = (t19 + 12U);
	t18 = *((unsigned int*)t10);
	t18 = (t18 * 1U);
	t0  = xsi_get_transient_memory(t18);
	memcpy(t0, t11, t18);
	t13                   = (t19 + 0U);
	t16                   = *((int*)t13);
	t14                   = (t19 + 4U);
	t17                   = *((int*)t14);
	t15                   = (t19 + 8U);
	t21                   = *((int*)t15);
	t20                   = (t2 + 0U);
	t22                   = (t20 + 0U);
	*((int*)t22)          = t16;
	t22                   = (t20 + 4U);
	*((int*)t22)          = t17;
	t22                   = (t20 + 8U);
	*((int*)t22)          = t21;
	t24                   = (t17 - t16);
	t25                   = (t24 * t21);
	t25                   = (t25 + 1);
	t22                   = (t20 + 12U);
	*((unsigned int*)t22) = t25;
	goto LAB1;

LAB9:
	t45 = (unsigned char)1;
	goto LAB11;

LAB12:
	goto LAB7;

LAB14:
	t11 = (t4 + 0U);
	t24 = *((int*)t11);
	t13 = (t4 + 8U);
	t47 = *((int*)t13);
	t49 = (t17 - t24);
	t18 = (t49 * t47);
	t14 = (t4 + 4U);
	t51 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t24, t51, t47, t17);
	t25 = (1U * t18);
	t53 = (0 + t25);
	t15 = (t3 + t53);
	t40 = *((unsigned char*)t15);
	t20 = (t23 + 56U);
	t22 = *((char**)t20);
	t20 = (t19 + 0U);
	t52 = *((int*)t20);
	t26 = (t19 + 8U);
	t59 = *((int*)t26);
	t61 = (t17 - t52);
	t54 = (t61 * t59);
	t27 = (t19 + 4U);
	t63 = *((int*)t27);
	xsi_vhdl_check_range_of_index(t52, t63, t59, t17);
	t65 = (1U * t54);
	t66 = (0 + t65);
	t29 = (t22 + t66);
	t43 = *((unsigned char*)t29);
	t45 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t40, t43);
	t30 = (t9 + 56U);
	t31 = *((char**)t30);
	t56 = *((unsigned char*)t31);
	t57 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t45, t56);
	t30 = (t32 + 56U);
	t33 = *((char**)t30);
	t30 = (t19 + 0U);
	t64 = *((int*)t30);
	t34 = (t19 + 8U);
	t79 = *((int*)t34);
	t80 = (t17 - t64);
	t67 = (t80 * t79);
	t36 = (t19 + 4U);
	t81 = *((int*)t36);
	xsi_vhdl_check_range_of_index(t64, t81, t79, t17);
	t72                    = (1U * t67);
	t78                    = (0 + t72);
	t37                    = (t33 + t78);
	*((unsigned char*)t37) = t57;
	t10                    = (t4 + 0U);
	t16                    = *((int*)t10);
	t11                    = (t4 + 8U);
	t24                    = *((int*)t11);
	t47                    = (t17 - t16);
	t18                    = (t47 * t24);
	t13                    = (t4 + 4U);
	t49                    = *((int*)t13);
	xsi_vhdl_check_range_of_index(t16, t49, t24, t17);
	t25 = (1U * t18);
	t53 = (0 + t25);
	t14 = (t3 + t53);
	t40 = *((unsigned char*)t14);
	t15 = (t23 + 56U);
	t20 = *((char**)t15);
	t15 = (t19 + 0U);
	t51 = *((int*)t15);
	t22 = (t19 + 8U);
	t52 = *((int*)t22);
	t59 = (t17 - t51);
	t54 = (t59 * t52);
	t26 = (t19 + 4U);
	t61 = *((int*)t26);
	xsi_vhdl_check_range_of_index(t51, t61, t52, t17);
	t65 = (1U * t54);
	t66 = (0 + t65);
	t27 = (t20 + t66);
	t43 = *((unsigned char*)t27);
	t45 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t40, t43);
	t29 = (t4 + 0U);
	t63 = *((int*)t29);
	t30 = (t4 + 8U);
	t64 = *((int*)t30);
	t79 = (t17 - t63);
	t67 = (t79 * t64);
	t31 = (t4 + 4U);
	t80 = *((int*)t31);
	xsi_vhdl_check_range_of_index(t63, t80, t64, t17);
	t72 = (1U * t67);
	t78 = (0 + t72);
	t33 = (t3 + t78);
	t56 = *((unsigned char*)t33);
	t34 = (t9 + 56U);
	t36 = *((char**)t34);
	t57 = *((unsigned char*)t36);
	t69 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t56, t57);
	t70 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t45, t69);
	t34 = (t9 + 56U);
	t37 = *((char**)t34);
	t82 = *((unsigned char*)t37);
	t34 = (t23 + 56U);
	t38 = *((char**)t34);
	t34 = (t19 + 0U);
	t81 = *((int*)t34);
	t46 = (t19 + 8U);
	t83 = *((int*)t46);
	t84 = (t17 - t81);
	t85 = (t84 * t83);
	t48 = (t19 + 4U);
	t86 = *((int*)t48);
	xsi_vhdl_check_range_of_index(t81, t86, t83, t17);
	t87 = (1U * t85);
	t88 = (0 + t87);
	t50 = (t38 + t88);
	t89 = *((unsigned char*)t50);
	t90 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t82, t89);
	t91 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t70, t90);
	t55 = (t9 + 56U);
	t58 = *((char**)t55);
	t55 = (t58 + 0);
	*((unsigned char*)t55) = t91;

LAB15:
	if(t17 == t21)
		goto LAB16;

LAB17:
	t16 = (t17 + 1);
	t17 = t16;
	goto LAB13;

LAB18:;
}

char* ieee_p_3499444699_sub_2026593007_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[368];
	char          t8[40];
	char          t12[8];
	char          t19[16];
	char          t35[16];
	char          t88[16];
	char*         t0;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	int           t16;
	int           t17;
	unsigned int  t18;
	char*         t20;
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
	int           t33;
	int           t34;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t47;
	char*         t48;
	unsigned char t49;
	char*         t50;
	char*         t51;
	unsigned char t52;
	char*         t53;
	unsigned char t54;
	char*         t55;
	int           t56;
	char*         t57;
	int           t58;
	char*         t59;
	int           t60;
	int           t61;
	unsigned int  t62;
	unsigned int  t63;
	char*         t64;
	unsigned char t65;
	unsigned char t66;
	char*         t67;
	int           t68;
	char*         t69;
	int           t70;
	char*         t71;
	int           t72;
	int           t73;
	unsigned int  t74;
	unsigned int  t75;
	unsigned int  t76;
	char*         t77;
	unsigned char t78;
	unsigned char t79;
	char*         t80;
	unsigned int  t81;
	char*         t82;
	char*         t83;
	char*         t84;
	char*         t85;
	char*         t86;
	unsigned int  t87;
	unsigned char t89;
	int           t90;
	int           t91;
	unsigned int  t92;
	unsigned int  t93;
	unsigned char t94;
	unsigned char t95;
	unsigned char t96;

LAB0:
	t9             = (t7 + 4U);
	t10            = ((IEEE_P_2592010699) + 3224);
	t11            = (t9 + 88U);
	*((char**)t11) = t10;
	t13            = (t9 + 56U);
	*((char**)t13) = t12;
	xsi_type_set_default_value(t10, t12, 0);
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 1U;
	t15                   = (t4 + 0U);
	t16                   = *((int*)t15);
	t17                   = (0 - t16);
	t18                   = (t17 * -1);
	t18                   = (t18 + 1);
	t18                   = (t18 * 1U);
	t20                   = (t4 + 0U);
	t21                   = *((int*)t20);
	t22                   = (t19 + 0U);
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
	t23                   = (t7 + 124U);
	t26                   = ((IEEE_P_2592010699) + 3912);
	t27                   = (t23 + 88U);
	*((char**)t27)        = t26;
	t28                   = (char*)alloca(t18);
	t29                   = (t23 + 56U);
	*((char**)t29)        = t28;
	xsi_type_set_default_value(t26, t28, t19);
	t30                   = (t23 + 64U);
	*((char**)t30)        = t19;
	t31                   = (t23 + 80U);
	*((unsigned int*)t31) = t18;
	t32                   = (t4 + 0U);
	t33                   = *((int*)t32);
	t34                   = (0 - t33);
	t25                   = (t34 * -1);
	t25                   = (t25 + 1);
	t25                   = (t25 * 1U);
	t36                   = (t4 + 0U);
	t37                   = *((int*)t36);
	t38                   = (t35 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t37;
	t39                   = (t38 + 4U);
	*((int*)t39)          = 0;
	t39                   = (t38 + 8U);
	*((int*)t39)          = -1;
	t40                   = (0 - t37);
	t41                   = (t40 * -1);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;
	t39                   = (t7 + 244U);
	t42                   = (t1 + 2616);
	t43                   = (t39 + 88U);
	*((char**)t43)        = t42;
	t44                   = (char*)alloca(t25);
	t45                   = (t39 + 56U);
	*((char**)t45)        = t44;
	xsi_type_set_default_value(t42, t44, t35);
	t46                   = (t39 + 64U);
	*((char**)t46)        = t35;
	t47                   = (t39 + 80U);
	*((unsigned int*)t47) = t25;
	t48                   = (t8 + 4U);
	t49                   = (t3 != 0);
	if(t49 == 1)
		goto LAB3;

LAB2:
	t50            = (t8 + 12U);
	*((char**)t50) = t4;
	t51            = (t8 + 20U);
	t52            = (t5 != 0);
	if(t52 == 1)
		goto LAB5;

LAB4:
	t53            = (t8 + 28U);
	*((char**)t53) = t6;
	t55            = (t4 + 0U);
	t56            = *((int*)t55);
	t57            = (t4 + 0U);
	t58            = *((int*)t57);
	t59            = (t4 + 8U);
	t60            = *((int*)t59);
	t61            = (t56 - t58);
	t41            = (t61 * t60);
	t62            = (1U * t41);
	t63            = (0 + t62);
	t64            = (t3 + t63);
	t65            = *((unsigned char*)t64);
	t66            = (t65 == (unsigned char)1);
	if(t66 == 1)
		goto LAB9;

LAB10:
	t67 = (t6 + 0U);
	t68 = *((int*)t67);
	t69 = (t6 + 0U);
	t70 = *((int*)t69);
	t71 = (t6 + 8U);
	t72 = *((int*)t71);
	t73 = (t68 - t70);
	t74 = (t73 * t72);
	t75 = (1U * t74);
	t76 = (0 + t75);
	t77 = (t5 + t76);
	t78 = *((unsigned char*)t77);
	t79 = (t78 == (unsigned char)1);
	t54 = t79;

LAB11:
	if(t54 != 0)
		goto LAB6;

LAB8:
LAB7:
	t10                    = (t9 + 56U);
	t11                    = *((char**)t10);
	t10                    = (t11 + 0);
	*((unsigned char*)t10) = (unsigned char)3;
	t10 = ieee_p_2592010699_sub_3946049995_503743352(IEEE_P_2592010699, t88, t5, t6);
	t11 = (t23 + 56U);
	t13 = *((char**)t11);
	t11 = (t13 + 0);
	t14 = (t88 + 12U);
	t18 = *((unsigned int*)t14);
	t25 = (1U * t18);
	memcpy(t11, t10, t25);
	t10 = (t4 + 0U);
	t16 = *((int*)t10);
	t17 = 0;
	t21 = t16;

LAB13:
	if(t17 <= t21)
		goto LAB14;

LAB16:
	t10 = (t39 + 56U);
	t11 = *((char**)t10);
	t10 = (t35 + 12U);
	t18 = *((unsigned int*)t10);
	t18 = (t18 * 1U);
	t0  = xsi_get_transient_memory(t18);
	memcpy(t0, t11, t18);
	t13                   = (t35 + 0U);
	t16                   = *((int*)t13);
	t14                   = (t35 + 4U);
	t17                   = *((int*)t14);
	t15                   = (t35 + 8U);
	t21                   = *((int*)t15);
	t20                   = (t2 + 0U);
	t22                   = (t20 + 0U);
	*((int*)t22)          = t16;
	t22                   = (t20 + 4U);
	*((int*)t22)          = t17;
	t22                   = (t20 + 8U);
	*((int*)t22)          = t21;
	t24                   = (t17 - t16);
	t25                   = (t24 * t21);
	t25                   = (t25 + 1);
	t22                   = (t20 + 12U);
	*((unsigned int*)t22) = t25;

LAB1:
	return t0;
LAB3:
	*((char**)t48) = t3;
	goto LAB2;

LAB5:
	*((char**)t51) = t5;
	goto LAB4;

LAB6:
	t80 = (t35 + 12U);
	t81 = *((unsigned int*)t80);
	t81 = (t81 * 1U);
	t82 = xsi_get_transient_memory(t81);
	memset(t82, 0, t81);
	t83 = t82;
	memset(t83, (unsigned char)1, t81);
	t84 = (t39 + 56U);
	t85 = *((char**)t84);
	t84 = (t85 + 0);
	t86 = (t35 + 12U);
	t87 = *((unsigned int*)t86);
	t87 = (t87 * 1U);
	memcpy(t84, t82, t87);
	t10 = (t39 + 56U);
	t11 = *((char**)t10);
	t10 = (t35 + 12U);
	t18 = *((unsigned int*)t10);
	t18 = (t18 * 1U);
	t0  = xsi_get_transient_memory(t18);
	memcpy(t0, t11, t18);
	t13                   = (t35 + 0U);
	t16                   = *((int*)t13);
	t14                   = (t35 + 4U);
	t17                   = *((int*)t14);
	t15                   = (t35 + 8U);
	t21                   = *((int*)t15);
	t20                   = (t2 + 0U);
	t22                   = (t20 + 0U);
	*((int*)t22)          = t16;
	t22                   = (t20 + 4U);
	*((int*)t22)          = t17;
	t22                   = (t20 + 8U);
	*((int*)t22)          = t21;
	t24                   = (t17 - t16);
	t25                   = (t24 * t21);
	t25                   = (t25 + 1);
	t22                   = (t20 + 12U);
	*((unsigned int*)t22) = t25;
	goto LAB1;

LAB9:
	t54 = (unsigned char)1;
	goto LAB11;

LAB12:
	goto LAB7;

LAB14:
	t11 = (t4 + 0U);
	t24 = *((int*)t11);
	t13 = (t4 + 8U);
	t33 = *((int*)t13);
	t34 = (t17 - t24);
	t18 = (t34 * t33);
	t14 = (t4 + 4U);
	t37 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t24, t37, t33, t17);
	t25 = (1U * t18);
	t41 = (0 + t25);
	t15 = (t3 + t41);
	t49 = *((unsigned char*)t15);
	t20 = (t23 + 56U);
	t22 = *((char**)t20);
	t20 = (t19 + 0U);
	t40 = *((int*)t20);
	t26 = (t19 + 8U);
	t56 = *((int*)t26);
	t58 = (t17 - t40);
	t62 = (t58 * t56);
	t27 = (t19 + 4U);
	t60 = *((int*)t27);
	xsi_vhdl_check_range_of_index(t40, t60, t56, t17);
	t63 = (1U * t62);
	t74 = (0 + t63);
	t29 = (t22 + t74);
	t52 = *((unsigned char*)t29);
	t54 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t49, t52);
	t30 = (t9 + 56U);
	t31 = *((char**)t30);
	t65 = *((unsigned char*)t31);
	t66 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t54, t65);
	t30 = (t39 + 56U);
	t32 = *((char**)t30);
	t30 = (t35 + 0U);
	t61 = *((int*)t30);
	t36 = (t35 + 8U);
	t68 = *((int*)t36);
	t70 = (t17 - t61);
	t75 = (t70 * t68);
	t38 = (t35 + 4U);
	t72 = *((int*)t38);
	xsi_vhdl_check_range_of_index(t61, t72, t68, t17);
	t76                    = (1U * t75);
	t81                    = (0 + t76);
	t42                    = (t32 + t81);
	*((unsigned char*)t42) = t66;
	t10                    = (t4 + 0U);
	t16                    = *((int*)t10);
	t11                    = (t4 + 8U);
	t24                    = *((int*)t11);
	t33                    = (t17 - t16);
	t18                    = (t33 * t24);
	t13                    = (t4 + 4U);
	t34                    = *((int*)t13);
	xsi_vhdl_check_range_of_index(t16, t34, t24, t17);
	t25 = (1U * t18);
	t41 = (0 + t25);
	t14 = (t3 + t41);
	t49 = *((unsigned char*)t14);
	t15 = (t23 + 56U);
	t20 = *((char**)t15);
	t15 = (t19 + 0U);
	t37 = *((int*)t15);
	t22 = (t19 + 8U);
	t40 = *((int*)t22);
	t56 = (t17 - t37);
	t62 = (t56 * t40);
	t26 = (t19 + 4U);
	t58 = *((int*)t26);
	xsi_vhdl_check_range_of_index(t37, t58, t40, t17);
	t63 = (1U * t62);
	t74 = (0 + t63);
	t27 = (t20 + t74);
	t52 = *((unsigned char*)t27);
	t54 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t49, t52);
	t29 = (t4 + 0U);
	t60 = *((int*)t29);
	t30 = (t4 + 8U);
	t61 = *((int*)t30);
	t68 = (t17 - t60);
	t75 = (t68 * t61);
	t31 = (t4 + 4U);
	t70 = *((int*)t31);
	xsi_vhdl_check_range_of_index(t60, t70, t61, t17);
	t76 = (1U * t75);
	t81 = (0 + t76);
	t32 = (t3 + t81);
	t65 = *((unsigned char*)t32);
	t36 = (t9 + 56U);
	t38 = *((char**)t36);
	t66 = *((unsigned char*)t38);
	t78 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t65, t66);
	t79 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t54, t78);
	t36 = (t9 + 56U);
	t42 = *((char**)t36);
	t89 = *((unsigned char*)t42);
	t36 = (t23 + 56U);
	t43 = *((char**)t36);
	t36 = (t19 + 0U);
	t72 = *((int*)t36);
	t45 = (t19 + 8U);
	t73 = *((int*)t45);
	t90 = (t17 - t72);
	t87 = (t90 * t73);
	t46 = (t19 + 4U);
	t91 = *((int*)t46);
	xsi_vhdl_check_range_of_index(t72, t91, t73, t17);
	t92 = (1U * t87);
	t93 = (0 + t92);
	t47 = (t43 + t93);
	t94 = *((unsigned char*)t47);
	t95 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t89, t94);
	t96 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t79, t95);
	t55 = (t9 + 56U);
	t57 = *((char**)t55);
	t55 = (t57 + 0);
	*((unsigned char*)t55) = t96;

LAB15:
	if(t17 == t21)
		goto LAB16;

LAB17:
	t16 = (t17 + 1);
	t17 = t16;
	goto LAB13;

LAB18:;
}

char* ieee_p_3499444699_sub_589026959_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[488];
	char          t8[40];
	char          t12[8];
	char          t18[8];
	char          t27[8];
	char          t35[16];
	char          t47[16];
	char          t53[16];
	char*         t0;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned int  t22;
	int           t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	int           t32;
	int           t33;
	unsigned int  t34;
	char*         t36;
	int           t37;
	char*         t38;
	int           t39;
	unsigned int  t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	int           t50;
	char*         t51;
	int           t52;
	char*         t54;
	int           t55;
	char*         t56;
	int           t57;
	unsigned char t58;
	char*         t59;
	char*         t60;
	unsigned char t61;
	char*         t62;
	unsigned char t63;
	char*         t64;
	char*         t65;
	char*         t66;
	int           t67;
	int           t68;
	char*         t69;
	int           t70;
	int           t71;
	char*         t72;
	int           t73;
	unsigned int  t74;
	unsigned int  t75;
	char*         t76;
	unsigned char t77;
	unsigned char t78;
	char*         t79;
	char*         t80;
	char*         t81;
	int           t82;
	int           t83;
	char*         t84;
	int           t85;
	int           t86;
	unsigned int  t87;
	char*         t88;
	int           t89;
	unsigned int  t90;
	unsigned int  t91;
	char*         t92;
	unsigned char t93;
	unsigned char t94;
	char*         t95;
	unsigned int  t96;
	char*         t97;
	char*         t98;
	char*         t99;
	char*         t100;
	char*         t101;
	unsigned int  t102;

LAB0:
	t9             = (t7 + 4U);
	t10            = ((IEEE_P_2592010699) + 3224);
	t11            = (t9 + 88U);
	*((char**)t11) = t10;
	t13            = (t9 + 56U);
	*((char**)t13) = t12;
	xsi_type_set_default_value(t10, t12, 0);
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 1U;
	t15                   = (t7 + 124U);
	t16                   = ((IEEE_P_2592010699) + 3224);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	xsi_type_set_default_value(t16, t18, 0);
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 1U;
	t21                   = (t4 + 12U);
	t22                   = *((unsigned int*)t21);
	t23                   = (t22 - 1);
	t24                   = (t7 + 244U);
	t25                   = ((STD_STANDARD) + 832);
	t26                   = (t24 + 88U);
	*((char**)t26)        = t25;
	t28                   = (t24 + 56U);
	*((char**)t28)        = t27;
	*((int*)t27)          = t23;
	t29                   = (t24 + 80U);
	*((unsigned int*)t29) = 4U;
	t30                   = (t24 + 56U);
	t31                   = *((char**)t30);
	t32                   = *((int*)t31);
	t33                   = (0 - t32);
	t34                   = (t33 * -1);
	t34                   = (t34 + 1);
	t34                   = (t34 * 1U);
	t30                   = (t24 + 56U);
	t36                   = *((char**)t30);
	t37                   = *((int*)t36);
	t30                   = (t35 + 0U);
	t38                   = (t30 + 0U);
	*((int*)t38)          = t37;
	t38                   = (t30 + 4U);
	*((int*)t38)          = 0;
	t38                   = (t30 + 8U);
	*((int*)t38)          = -1;
	t39                   = (0 - t37);
	t40                   = (t39 * -1);
	t40                   = (t40 + 1);
	t38                   = (t30 + 12U);
	*((unsigned int*)t38) = t40;
	t38                   = (t7 + 364U);
	t41                   = (t1 + 2616);
	t42                   = (t38 + 88U);
	*((char**)t42)        = t41;
	t43                   = (char*)alloca(t34);
	t44                   = (t38 + 56U);
	*((char**)t44)        = t43;
	xsi_type_set_default_value(t41, t43, t35);
	t45                   = (t38 + 64U);
	*((char**)t45)        = t35;
	t46                   = (t38 + 80U);
	*((unsigned int*)t46) = t34;
	t48                   = (t24 + 56U);
	t49                   = *((char**)t48);
	t50                   = *((int*)t49);
	t48                   = (t47 + 0U);
	t51                   = (t48 + 0U);
	*((int*)t51)          = t50;
	t51                   = (t48 + 4U);
	*((int*)t51)          = 0;
	t51                   = (t48 + 8U);
	*((int*)t51)          = -1;
	t52                   = (0 - t50);
	t40                   = (t52 * -1);
	t40                   = (t40 + 1);
	t51                   = (t48 + 12U);
	*((unsigned int*)t51) = t40;
	t51                   = (t24 + 56U);
	t54                   = *((char**)t51);
	t55                   = *((int*)t54);
	t51                   = (t53 + 0U);
	t56                   = (t51 + 0U);
	*((int*)t56)          = t55;
	t56                   = (t51 + 4U);
	*((int*)t56)          = 0;
	t56                   = (t51 + 8U);
	*((int*)t56)          = -1;
	t57                   = (0 - t55);
	t40                   = (t57 * -1);
	t40                   = (t40 + 1);
	t56                   = (t51 + 12U);
	*((unsigned int*)t56) = t40;
	t56                   = (t8 + 4U);
	t58                   = (t3 != 0);
	if(t58 == 1)
		goto LAB3;

LAB2:
	t59            = (t8 + 12U);
	*((char**)t59) = t4;
	t60            = (t8 + 20U);
	t61            = (t5 != 0);
	if(t61 == 1)
		goto LAB5;

LAB4:
	t62            = (t8 + 28U);
	*((char**)t62) = t6;
	t64            = (t3 + 0);
	t65            = (t24 + 56U);
	t66            = *((char**)t65);
	t67            = *((int*)t66);
	t65            = (t47 + 0U);
	t68            = *((int*)t65);
	t69            = (t47 + 8U);
	t70            = *((int*)t69);
	t71            = (t67 - t68);
	t40            = (t71 * t70);
	t72            = (t47 + 4U);
	t73            = *((int*)t72);
	xsi_vhdl_check_range_of_index(t68, t73, t70, t67);
	t74 = (1U * t40);
	t75 = (0 + t74);
	t76 = (t64 + t75);
	t77 = *((unsigned char*)t76);
	t78 = (t77 == (unsigned char)1);
	if(t78 == 1)
		goto LAB9;

LAB10:
	t79 = (t5 + 0);
	t80 = (t24 + 56U);
	t81 = *((char**)t80);
	t82 = *((int*)t81);
	t80 = (t53 + 0U);
	t83 = *((int*)t80);
	t84 = (t53 + 8U);
	t85 = *((int*)t84);
	t86 = (t82 - t83);
	t87 = (t86 * t85);
	t88 = (t53 + 4U);
	t89 = *((int*)t88);
	xsi_vhdl_check_range_of_index(t83, t89, t85, t82);
	t90 = (1U * t87);
	t91 = (0 + t90);
	t92 = (t79 + t91);
	t93 = *((unsigned char*)t92);
	t94 = (t93 == (unsigned char)1);
	t63 = t94;

LAB11:
	if(t63 != 0)
		goto LAB6;

LAB8:
LAB7:
	t10 = (t3 + 0);
	t11 = (t47 + 0U);
	t23 = *((int*)t11);
	t13 = (t47 + 8U);
	t32 = *((int*)t13);
	t33 = (0 - t23);
	t22 = (t33 * t32);
	t34 = (1U * t22);
	t40 = (0 + t34);
	t14 = (t10 + t40);
	t58 = *((unsigned char*)t14);
	t16 = (t5 + 0);
	t17 = (t53 + 0U);
	t37 = *((int*)t17);
	t19 = (t53 + 8U);
	t39 = *((int*)t19);
	t50 = (0 - t37);
	t74 = (t50 * t39);
	t75 = (1U * t74);
	t87 = (0 + t75);
	t20 = (t16 + t87);
	t61 = *((unsigned char*)t20);
	t63 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t58, t61);
	t21 = (t38 + 56U);
	t25 = *((char**)t21);
	t21 = (t35 + 0U);
	t52 = *((int*)t21);
	t26 = (t35 + 8U);
	t55 = *((int*)t26);
	t57 = (0 - t52);
	t90 = (t57 * t55);
	t91 = (1U * t90);
	t96 = (0 + t91);
	t28 = (t25 + t96);
	*((unsigned char*)t28) = t63;
	t10                    = (t3 + 0);
	t11                    = (t47 + 0U);
	t23                    = *((int*)t11);
	t13                    = (t47 + 8U);
	t32                    = *((int*)t13);
	t33                    = (0 - t23);
	t22                    = (t33 * t32);
	t34                    = (1U * t22);
	t40                    = (0 + t34);
	t14                    = (t10 + t40);
	t58                    = *((unsigned char*)t14);
	t16                    = (t5 + 0);
	t17                    = (t53 + 0U);
	t37                    = *((int*)t17);
	t19                    = (t53 + 8U);
	t39                    = *((int*)t19);
	t50                    = (0 - t37);
	t74                    = (t50 * t39);
	t75                    = (1U * t74);
	t87                    = (0 + t75);
	t20                    = (t16 + t87);
	t61                    = *((unsigned char*)t20);
	t63 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t58, t61);
	t21 = (t9 + 56U);
	t25 = *((char**)t21);
	t21 = (t25 + 0);
	*((unsigned char*)t21) = t63;
	t10                    = (t24 + 56U);
	t11                    = *((char**)t10);
	t23                    = *((int*)t11);
	t32                    = (t23 - 1);
	t33                    = 1;
	t37                    = t32;

LAB13:
	if(t33 <= t37)
		goto LAB14;

LAB16:
	t10 = (t24 + 56U);
	t11 = *((char**)t10);
	t23 = *((int*)t11);
	t58 = (t23 > 0);
	if(t58 != 0)
		goto LAB18;

LAB20:
LAB19:
	t10 = (t38 + 56U);
	t11 = *((char**)t10);
	t10 = (t35 + 12U);
	t22 = *((unsigned int*)t10);
	t22 = (t22 * 1U);
	t0  = xsi_get_transient_memory(t22);
	memcpy(t0, t11, t22);
	t13                   = (t35 + 0U);
	t23                   = *((int*)t13);
	t14                   = (t35 + 4U);
	t32                   = *((int*)t14);
	t16                   = (t35 + 8U);
	t33                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t19                   = (t17 + 0U);
	*((int*)t19)          = t23;
	t19                   = (t17 + 4U);
	*((int*)t19)          = t32;
	t19                   = (t17 + 8U);
	*((int*)t19)          = t33;
	t37                   = (t32 - t23);
	t34                   = (t37 * t33);
	t34                   = (t34 + 1);
	t19                   = (t17 + 12U);
	*((unsigned int*)t19) = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t56) = t3;
	goto LAB2;

LAB5:
	*((char**)t60) = t5;
	goto LAB4;

LAB6:
	t95 = (t35 + 12U);
	t96 = *((unsigned int*)t95);
	t96 = (t96 * 1U);
	t97 = xsi_get_transient_memory(t96);
	memset(t97, 0, t96);
	t98 = t97;
	memset(t98, (unsigned char)1, t96);
	t99  = (t38 + 56U);
	t100 = *((char**)t99);
	t99  = (t100 + 0);
	t101 = (t35 + 12U);
	t102 = *((unsigned int*)t101);
	t102 = (t102 * 1U);
	memcpy(t99, t97, t102);
	t10 = (t38 + 56U);
	t11 = *((char**)t10);
	t10 = (t35 + 12U);
	t22 = *((unsigned int*)t10);
	t22 = (t22 * 1U);
	t0  = xsi_get_transient_memory(t22);
	memcpy(t0, t11, t22);
	t13                   = (t35 + 0U);
	t23                   = *((int*)t13);
	t14                   = (t35 + 4U);
	t32                   = *((int*)t14);
	t16                   = (t35 + 8U);
	t33                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t19                   = (t17 + 0U);
	*((int*)t19)          = t23;
	t19                   = (t17 + 4U);
	*((int*)t19)          = t32;
	t19                   = (t17 + 8U);
	*((int*)t19)          = t33;
	t37                   = (t32 - t23);
	t34                   = (t37 * t33);
	t34                   = (t34 + 1);
	t19                   = (t17 + 12U);
	*((unsigned int*)t19) = t34;
	goto LAB1;

LAB9:
	t63 = (unsigned char)1;
	goto LAB11;

LAB12:
	goto LAB7;

LAB14:
	t10 = (t3 + 0);
	t13 = (t47 + 0U);
	t39 = *((int*)t13);
	t14 = (t47 + 8U);
	t50 = *((int*)t14);
	t52 = (t33 - t39);
	t22 = (t52 * t50);
	t16 = (t47 + 4U);
	t55 = *((int*)t16);
	xsi_vhdl_check_range_of_index(t39, t55, t50, t33);
	t34 = (1U * t22);
	t40 = (0 + t34);
	t17 = (t10 + t40);
	t58 = *((unsigned char*)t17);
	t19 = (t5 + 0);
	t20 = (t53 + 0U);
	t57 = *((int*)t20);
	t21 = (t53 + 8U);
	t67 = *((int*)t21);
	t68 = (t33 - t57);
	t74 = (t68 * t67);
	t25 = (t53 + 4U);
	t70 = *((int*)t25);
	xsi_vhdl_check_range_of_index(t57, t70, t67, t33);
	t75 = (1U * t74);
	t87 = (0 + t75);
	t26 = (t19 + t87);
	t61 = *((unsigned char*)t26);
	t63 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t58, t61);
	t28 = (t15 + 56U);
	t29 = *((char**)t28);
	t28 = (t29 + 0);
	*((unsigned char*)t28) = t63;
	t10                    = (t15 + 56U);
	t11                    = *((char**)t10);
	t58                    = *((unsigned char*)t11);
	t10                    = (t9 + 56U);
	t13                    = *((char**)t10);
	t61                    = *((unsigned char*)t13);
	t63 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t58, t61);
	t10 = (t38 + 56U);
	t14 = *((char**)t10);
	t10 = (t35 + 0U);
	t23 = *((int*)t10);
	t16 = (t35 + 8U);
	t32 = *((int*)t16);
	t39 = (t33 - t23);
	t22 = (t39 * t32);
	t17 = (t35 + 4U);
	t50 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t23, t50, t32, t33);
	t34                    = (1U * t22);
	t40                    = (0 + t34);
	t19                    = (t14 + t40);
	*((unsigned char*)t19) = t63;
	t10                    = (t3 + 0);
	t11                    = (t47 + 0U);
	t23                    = *((int*)t11);
	t13                    = (t47 + 8U);
	t32                    = *((int*)t13);
	t39                    = (t33 - t23);
	t22                    = (t39 * t32);
	t14                    = (t47 + 4U);
	t50                    = *((int*)t14);
	xsi_vhdl_check_range_of_index(t23, t50, t32, t33);
	t34 = (1U * t22);
	t40 = (0 + t34);
	t16 = (t10 + t40);
	t58 = *((unsigned char*)t16);
	t17 = (t5 + 0);
	t19 = (t53 + 0U);
	t52 = *((int*)t19);
	t20 = (t53 + 8U);
	t55 = *((int*)t20);
	t57 = (t33 - t52);
	t74 = (t57 * t55);
	t21 = (t53 + 4U);
	t67 = *((int*)t21);
	xsi_vhdl_check_range_of_index(t52, t67, t55, t33);
	t75 = (1U * t74);
	t87 = (0 + t75);
	t25 = (t17 + t87);
	t61 = *((unsigned char*)t25);
	t63 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t58, t61);
	t26 = (t9 + 56U);
	t28 = *((char**)t26);
	t77 = *((unsigned char*)t28);
	t26 = (t15 + 56U);
	t29 = *((char**)t26);
	t78 = *((unsigned char*)t29);
	t93 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t77, t78);
	t94 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t63, t93);
	t26 = (t9 + 56U);
	t30 = *((char**)t26);
	t26 = (t30 + 0);
	*((unsigned char*)t26) = t94;

LAB15:
	if(t33 == t37)
		goto LAB16;

LAB17:
	t23 = (t33 + 1);
	t33 = t23;
	goto LAB13;

LAB18:
	t10 = (t3 + 0);
	t13 = (t24 + 56U);
	t14 = *((char**)t13);
	t32 = *((int*)t14);
	t13 = (t47 + 0U);
	t33 = *((int*)t13);
	t16 = (t47 + 8U);
	t37 = *((int*)t16);
	t39 = (t32 - t33);
	t22 = (t39 * t37);
	t17 = (t47 + 4U);
	t50 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t33, t50, t37, t32);
	t34 = (1U * t22);
	t40 = (0 + t34);
	t19 = (t10 + t40);
	t61 = *((unsigned char*)t19);
	t20 = (t5 + 0);
	t21 = (t24 + 56U);
	t25 = *((char**)t21);
	t52 = *((int*)t25);
	t21 = (t53 + 0U);
	t55 = *((int*)t21);
	t26 = (t53 + 8U);
	t57 = *((int*)t26);
	t67 = (t52 - t55);
	t74 = (t67 * t57);
	t28 = (t53 + 4U);
	t68 = *((int*)t28);
	xsi_vhdl_check_range_of_index(t55, t68, t57, t52);
	t75 = (1U * t74);
	t87 = (0 + t75);
	t29 = (t20 + t87);
	t63 = *((unsigned char*)t29);
	t77 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t61, t63);
	t30 = (t9 + 56U);
	t31 = *((char**)t30);
	t78 = *((unsigned char*)t31);
	t93 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t77, t78);
	t30 = (t38 + 56U);
	t36 = *((char**)t30);
	t30 = (t24 + 56U);
	t41 = *((char**)t30);
	t70 = *((int*)t41);
	t30 = (t35 + 0U);
	t71 = *((int*)t30);
	t42 = (t35 + 8U);
	t73 = *((int*)t42);
	t82 = (t70 - t71);
	t90 = (t82 * t73);
	t44 = (t35 + 4U);
	t83 = *((int*)t44);
	xsi_vhdl_check_range_of_index(t71, t83, t73, t70);
	t91                    = (1U * t90);
	t96                    = (0 + t91);
	t45                    = (t36 + t96);
	*((unsigned char*)t45) = t93;
	goto LAB19;

LAB21:;
}

char* ieee_p_3499444699_sub_3138463120_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t20[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	char*         t19;
	char*         t21;
	unsigned int  t22;
	char*         t23;
	char*         t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	int           t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = ieee_std_logic_arith_conv_signed_signext(t1, t16, t3, t4, ((t18)));
	t21            = (t6 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = ieee_std_logic_arith_conv_signed_signext(t1, t20, t5, t6, ((t22)));
	t24            = ieee_std_logic_arith_mult_signed(t1, t15, t19, t16, t23, t20);
	t25            = (t15 + 12U);
	t26            = *((unsigned int*)t25);
	t26            = (t26 * 1U);
	t0             = xsi_get_transient_memory(t26);
	memcpy(t0, t24, t26);
	t27                   = (t15 + 0U);
	t28                   = *((int*)t27);
	t29                   = (t15 + 4U);
	t30                   = *((int*)t29);
	t31                   = (t15 + 8U);
	t32                   = *((int*)t31);
	t33                   = (t2 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t28;
	t34                   = (t33 + 4U);
	*((int*)t34)          = t30;
	t34                   = (t33 + 8U);
	*((int*)t34)          = t32;
	t35                   = (t30 - t28);
	t36                   = (t35 * t32);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_1704181104_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t20[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	char*         t19;
	char*         t21;
	unsigned int  t22;
	char*         t23;
	char*         t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	int           t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t16, t3, t4, ((t18)));
	t21            = (t6 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t20, t5, t6, ((t22)));
	t24            = ieee_std_logic_arith_mult_unsigned(t1, t15, t19, t16, t23, t20);
	t25            = (t15 + 12U);
	t26            = *((unsigned int*)t25);
	t26            = (t26 * 1U);
	t0             = xsi_get_transient_memory(t26);
	memcpy(t0, t24, t26);
	t27                   = (t15 + 0U);
	t28                   = *((int*)t27);
	t29                   = (t15 + 4U);
	t30                   = *((int*)t29);
	t31                   = (t15 + 8U);
	t32                   = *((int*)t31);
	t33                   = (t2 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t28;
	t34                   = (t33 + 4U);
	*((int*)t34)          = t30;
	t34                   = (t33 + 8U);
	*((int*)t34)          = t32;
	t35                   = (t30 - t28);
	t36                   = (t35 * t32);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_3254203762_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t21[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	int           t19;
	char*         t20;
	char*         t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned int  t27;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = (t18 + 1);
	t20            = ieee_std_logic_arith_conv_signed_zeroext(t1, t16, t3, t4, t19);
	t22            = (t6 + 12U);
	t23            = *((unsigned int*)t22);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t21, t5, t6, ((t23)));
	t25            = ieee_std_logic_arith_mult_signed(t1, t15, t20, t16, t24, t21);
	t26            = (t15 + 12U);
	t27            = *((unsigned int*)t26);
	t27            = (t27 * 1U);
	t0             = xsi_get_transient_memory(t27);
	memcpy(t0, t25, t27);
	t28                   = (t15 + 0U);
	t29                   = *((int*)t28);
	t30                   = (t15 + 4U);
	t31                   = *((int*)t30);
	t32                   = (t15 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t2 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t29;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t31;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t31 - t29);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2938610218_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t20[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	char*         t19;
	char*         t21;
	unsigned int  t22;
	int           t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned int  t27;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = ieee_std_logic_arith_conv_signed_signext(t1, t16, t3, t4, ((t18)));
	t21            = (t6 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = (t22 + 1);
	t24            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t5, t6, t23);
	t25            = ieee_std_logic_arith_mult_signed(t1, t15, t19, t16, t24, t20);
	t26            = (t15 + 12U);
	t27            = *((unsigned int*)t26);
	t27            = (t27 * 1U);
	t0             = xsi_get_transient_memory(t27);
	memcpy(t0, t25, t27);
	t28                   = (t15 + 0U);
	t29                   = *((int*)t28);
	t30                   = (t15 + 4U);
	t31                   = *((int*)t30);
	t32                   = (t15 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t2 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t29;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t31;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t31 - t29);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_258058432_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t20[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	char*         t19;
	char*         t21;
	unsigned int  t22;
	char*         t23;
	char*         t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	int           t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = ieee_std_logic_arith_conv_signed_signext(t1, t16, t3, t4, ((t18)));
	t21            = (t6 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = ieee_std_logic_arith_conv_signed_signext(t1, t20, t5, t6, ((t22)));
	t24            = ieee_std_logic_arith_mult_signed(t1, t15, t19, t16, t23, t20);
	t25            = (t15 + 12U);
	t26            = *((unsigned int*)t25);
	t26            = (t26 * 1U);
	t0             = xsi_get_transient_memory(t26);
	memcpy(t0, t24, t26);
	t27                   = (t15 + 0U);
	t28                   = *((int*)t27);
	t29                   = (t15 + 4U);
	t30                   = *((int*)t29);
	t31                   = (t15 + 8U);
	t32                   = *((int*)t31);
	t33                   = (t2 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t28;
	t34                   = (t33 + 4U);
	*((int*)t34)          = t30;
	t34                   = (t33 + 8U);
	*((int*)t34)          = t32;
	t35                   = (t30 - t28);
	t36                   = (t35 * t32);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_173946173_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t20[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	char*         t19;
	char*         t21;
	unsigned int  t22;
	char*         t23;
	char*         t24;
	char*         t25;
	unsigned int  t26;
	char*         t27;
	int           t28;
	char*         t29;
	int           t30;
	char*         t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t16, t3, t4, ((t18)));
	t21            = (t6 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t20, t5, t6, ((t22)));
	t24            = ieee_std_logic_arith_mult_unsigned(t1, t15, t19, t16, t23, t20);
	t25            = (t15 + 12U);
	t26            = *((unsigned int*)t25);
	t26            = (t26 * 1U);
	t0             = xsi_get_transient_memory(t26);
	memcpy(t0, t24, t26);
	t27                   = (t15 + 0U);
	t28                   = *((int*)t27);
	t29                   = (t15 + 4U);
	t30                   = *((int*)t29);
	t31                   = (t15 + 8U);
	t32                   = *((int*)t31);
	t33                   = (t2 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t28;
	t34                   = (t33 + 4U);
	*((int*)t34)          = t30;
	t34                   = (t33 + 8U);
	*((int*)t34)          = t32;
	t35                   = (t30 - t28);
	t36                   = (t35 * t32);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_373799074_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t21[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	int           t19;
	char*         t20;
	char*         t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned int  t27;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = (t18 + 1);
	t20            = ieee_std_logic_arith_conv_signed_zeroext(t1, t16, t3, t4, t19);
	t22            = (t6 + 12U);
	t23            = *((unsigned int*)t22);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t21, t5, t6, ((t23)));
	t25            = ieee_std_logic_arith_mult_signed(t1, t15, t20, t16, t24, t21);
	t26            = (t15 + 12U);
	t27            = *((unsigned int*)t26);
	t27            = (t27 * 1U);
	t0             = xsi_get_transient_memory(t27);
	memcpy(t0, t25, t27);
	t28                   = (t15 + 0U);
	t29                   = *((int*)t28);
	t30                   = (t15 + 4U);
	t31                   = *((int*)t30);
	t32                   = (t15 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t2 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t29;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t31;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t31 - t29);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_58205530_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t8[40];
	char          t15[16];
	char          t16[16];
	char          t20[16];
	char*         t0;
	char*         t9;
	unsigned char t10;
	char*         t11;
	char*         t12;
	unsigned char t13;
	char*         t14;
	char*         t17;
	unsigned int  t18;
	char*         t19;
	char*         t21;
	unsigned int  t22;
	int           t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned int  t27;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;

LAB0:
	t9  = (t8 + 4U);
	t10 = (t3 != 0);
	if(t10 == 1)
		goto LAB3;

LAB2:
	t11            = (t8 + 12U);
	*((char**)t11) = t4;
	t12            = (t8 + 20U);
	t13            = (t5 != 0);
	if(t13 == 1)
		goto LAB5;

LAB4:
	t14            = (t8 + 28U);
	*((char**)t14) = t6;
	t17            = (t4 + 12U);
	t18            = *((unsigned int*)t17);
	t19            = ieee_std_logic_arith_conv_signed_signext(t1, t16, t3, t4, ((t18)));
	t21            = (t6 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = (t22 + 1);
	t24            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t5, t6, t23);
	t25            = ieee_std_logic_arith_mult_signed(t1, t15, t19, t16, t24, t20);
	t26            = (t15 + 12U);
	t27            = *((unsigned int*)t26);
	t27            = (t27 * 1U);
	t0             = xsi_get_transient_memory(t27);
	memcpy(t0, t25, t27);
	t28                   = (t15 + 0U);
	t29                   = *((int*)t28);
	t30                   = (t15 + 4U);
	t31                   = *((int*)t30);
	t32                   = (t15 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t2 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t29;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t31;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t31 - t29);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;

LAB1:
	return t0;
LAB3:
	*((char**)t9) = t3;
	goto LAB2;

LAB5:
	*((char**)t12) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2254111597_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_plus_unsigned(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_3158760445_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_signed_signext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_signed_signext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_plus_signed(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2683234343_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	unsigned int  t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 + 1);
	t12                   = (t6 + 12U);
	t13                   = *((unsigned int*)t12);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t11, ((t13)));
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_zeroext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_signext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_plus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_3006065631_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t6 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 + 1);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), t13);
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_signext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_zeroext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_plus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_1438093509_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	unsigned char t37;
	char*         t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = (t1 + 2616);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	t37                   = (t3 != 0);
	if(t37 == 1)
		goto LAB3;

LAB2:
	t38            = (t7 + 12U);
	*((char**)t38) = t4;
	t39            = (t7 + 20U);
	*((int*)t39)   = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_zeroext(t1, t42, t3, t4, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_integer(t1, t46, t5, t49);
	t50            = ieee_std_logic_arith_plus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t36) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1350516001_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = (t1 + 2616);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	*((int*)t36)          = t3;
	t37                   = (t7 + 8U);
	t38                   = (t4 != 0);
	if(t38 == 1)
		goto LAB3;

LAB2:
	t39            = (t7 + 16U);
	*((char**)t39) = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_integer(t1, t42, t3, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_zeroext(t1, t46, t4, t5, t49);
	t50            = ieee_std_logic_arith_plus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t37) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2783551994_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t7 + 12U);
	*((char**)t18) = t4;
	t19            = (t7 + 20U);
	*((int*)t19)   = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_integer(t1, t25, t5, t28);
	t29            = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_3401658142_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	*((int*)t16)          = t3;
	t17                   = (t7 + 8U);
	t18                   = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 16U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_integer(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1819668549_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18                    = (t7 + 12U);
	*((char**)t18)         = t4;
	t19                    = (t7 + 20U);
	*((unsigned char*)t19) = t5;
	t22                    = (t10 + 56U);
	t23                    = *((char**)t22);
	t24                    = *((int*)t23);
	t22 = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t21, t3, t4, t24);
	t26 = (t10 + 56U);
	t27 = *((char**)t26);
	t28 = *((int*)t27);
	t26 = ieee_p_3499444699_sub_2596859466_3536714472(t1, t25, t5, t28);
	t29 = ieee_std_logic_arith_plus_unsigned(t1, t20, t22, t21, t26, t25);
	t30 = (t20 + 12U);
	t31 = *((unsigned int*)t30);
	t31 = (t31 * 1U);
	t0  = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1347574249_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                     = (t5 + 12U);
	t9                     = *((unsigned int*)t8);
	t10                    = (t6 + 4U);
	t11                    = ((STD_STANDARD) + 384);
	t12                    = (t10 + 88U);
	*((char**)t12)         = t11;
	t14                    = (t10 + 56U);
	*((char**)t14)         = t13;
	*((unsigned int*)t13)  = t9;
	t15                    = (t10 + 80U);
	*((unsigned int*)t15)  = 4U;
	t16                    = (t7 + 4U);
	*((unsigned char*)t16) = t3;
	t17                    = (t7 + 5U);
	t18                    = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 13U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_p_3499444699_sub_2596859466_3536714472(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_plus_unsigned(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_3645364408_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18                    = (t7 + 12U);
	*((char**)t18)         = t4;
	t19                    = (t7 + 20U);
	*((unsigned char*)t19) = t5;
	t22                    = (t10 + 56U);
	t23                    = *((char**)t22);
	t24                    = *((int*)t23);
	t22 = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26 = (t10 + 56U);
	t27 = *((char**)t26);
	t28 = *((int*)t27);
	t26 = ieee_p_3499444699_sub_17676902_3536714472(t1, t25, t5, t28);
	t29 = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30 = (t20 + 12U);
	t31 = *((unsigned int*)t30);
	t31 = (t31 * 1U);
	t0  = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2850438820_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                     = (t5 + 12U);
	t9                     = *((unsigned int*)t8);
	t10                    = (t6 + 4U);
	t11                    = ((STD_STANDARD) + 384);
	t12                    = (t10 + 88U);
	*((char**)t12)         = t11;
	t14                    = (t10 + 56U);
	*((char**)t14)         = t13;
	*((unsigned int*)t13)  = t9;
	t15                    = (t10 + 80U);
	*((unsigned int*)t15)  = 4U;
	t16                    = (t7 + 4U);
	*((unsigned char*)t16) = t3;
	t17                    = (t7 + 5U);
	t18                    = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 13U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_p_3499444699_sub_17676902_3536714472(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_723876666_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_plus_unsigned(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_278355757_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_signed_signext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_signed_signext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_plus_signed(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_4097796951_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	unsigned int  t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 + 1);
	t12                   = (t6 + 12U);
	t13                   = *((unsigned int*)t12);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t11, ((t13)));
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_zeroext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_signext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_plus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_125660943_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t6 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 + 1);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), t13);
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_signext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_zeroext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_plus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_4232465333_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	unsigned char t37;
	char*         t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = ((IEEE_P_2592010699) + 4024);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	t37                   = (t3 != 0);
	if(t37 == 1)
		goto LAB3;

LAB2:
	t38            = (t7 + 12U);
	*((char**)t38) = t4;
	t39            = (t7 + 20U);
	*((int*)t39)   = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_zeroext(t1, t42, t3, t4, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_integer(t1, t46, t5, t49);
	t50            = ieee_std_logic_arith_plus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t36) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4144887825_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = ((IEEE_P_2592010699) + 4024);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	*((int*)t36)          = t3;
	t37                   = (t7 + 8U);
	t38                   = (t4 != 0);
	if(t38 == 1)
		goto LAB3;

LAB2:
	t39            = (t7 + 16U);
	*((char**)t39) = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_integer(t1, t42, t3, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_zeroext(t1, t46, t4, t5, t49);
	t50            = ieee_std_logic_arith_plus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t37) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4198114602_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t7 + 12U);
	*((char**)t18) = t4;
	t19            = (t7 + 20U);
	*((int*)t19)   = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_integer(t1, t25, t5, t28);
	t29            = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_521253454_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	*((int*)t16)          = t3;
	t17                   = (t7 + 8U);
	t18                   = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 16U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_integer(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_289433618_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18                    = (t7 + 12U);
	*((char**)t18)         = t4;
	t19                    = (t7 + 20U);
	*((unsigned char*)t19) = t5;
	t22                    = (t10 + 56U);
	t23                    = *((char**)t22);
	t24                    = *((int*)t23);
	t22 = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t21, t3, t4, t24);
	t26 = (t10 + 56U);
	t27 = *((char**)t26);
	t28 = *((int*)t27);
	t26 = ieee_p_3499444699_sub_2596859466_3536714472(t1, t25, t5, t28);
	t29 = ieee_std_logic_arith_plus_unsigned(t1, t20, t22, t21, t26, t25);
	t30 = (t20 + 12U);
	t31 = *((unsigned int*)t30);
	t31 = (t31 * 1U);
	t0  = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4112306614_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                     = (t5 + 12U);
	t9                     = *((unsigned int*)t8);
	t10                    = (t6 + 4U);
	t11                    = ((STD_STANDARD) + 384);
	t12                    = (t10 + 88U);
	*((char**)t12)         = t11;
	t14                    = (t10 + 56U);
	*((char**)t14)         = t13;
	*((unsigned int*)t13)  = t9;
	t15                    = (t10 + 80U);
	*((unsigned int*)t15)  = 4U;
	t16                    = (t7 + 4U);
	*((unsigned char*)t16) = t3;
	t17                    = (t7 + 5U);
	t18                    = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 13U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_p_3499444699_sub_2596859466_3536714472(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_plus_unsigned(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_764959720_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18                    = (t7 + 12U);
	*((char**)t18)         = t4;
	t19                    = (t7 + 20U);
	*((unsigned char*)t19) = t5;
	t22                    = (t10 + 56U);
	t23                    = *((char**)t22);
	t24                    = *((int*)t23);
	t22 = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26 = (t10 + 56U);
	t27 = *((char**)t26);
	t28 = *((int*)t27);
	t26 = ieee_p_3499444699_sub_17676902_3536714472(t1, t25, t5, t28);
	t29 = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30 = (t20 + 12U);
	t31 = *((unsigned int*)t30);
	t31 = (t31 * 1U);
	t0  = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4265001428_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                     = (t5 + 12U);
	t9                     = *((unsigned int*)t8);
	t10                    = (t6 + 4U);
	t11                    = ((STD_STANDARD) + 384);
	t12                    = (t10 + 88U);
	*((char**)t12)         = t11;
	t14                    = (t10 + 56U);
	*((char**)t14)         = t13;
	*((unsigned int*)t13)  = t9;
	t15                    = (t10 + 80U);
	*((unsigned int*)t15)  = 4U;
	t16                    = (t7 + 4U);
	*((unsigned char*)t16) = t3;
	t17                    = (t7 + 5U);
	t18                    = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 13U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_p_3499444699_sub_17676902_3536714472(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_plus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2254183471_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_minus_unsigned(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_3158832319_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_signed_signext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_signed_signext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_minus_signed(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_2683306217_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	unsigned int  t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 + 1);
	t12                   = (t6 + 12U);
	t13                   = *((unsigned int*)t12);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t11, ((t13)));
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_zeroext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_signext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_minus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_3006137505_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t6 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 + 1);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), t13);
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_signext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_zeroext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_minus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_1438165383_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	unsigned char t37;
	char*         t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = (t1 + 2616);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	t37                   = (t3 != 0);
	if(t37 == 1)
		goto LAB3;

LAB2:
	t38            = (t7 + 12U);
	*((char**)t38) = t4;
	t39            = (t7 + 20U);
	*((int*)t39)   = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_zeroext(t1, t42, t3, t4, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_integer(t1, t46, t5, t49);
	t50            = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t36) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1350587875_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = (t1 + 2616);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	*((int*)t36)          = t3;
	t37                   = (t7 + 8U);
	t38                   = (t4 != 0);
	if(t38 == 1)
		goto LAB3;

LAB2:
	t39            = (t7 + 16U);
	*((char**)t39) = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_integer(t1, t42, t3, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_zeroext(t1, t46, t4, t5, t49);
	t50            = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t37) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2783623868_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t7 + 12U);
	*((char**)t18) = t4;
	t19            = (t7 + 20U);
	*((int*)t19)   = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_integer(t1, t25, t5, t28);
	t29            = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_3401730016_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	*((int*)t16)          = t3;
	t17                   = (t7 + 8U);
	t18                   = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 16U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_integer(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1960687613_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	unsigned char t37;
	char*         t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = (t1 + 2616);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	t37                   = (t3 != 0);
	if(t37 == 1)
		goto LAB3;

LAB2:
	t38                    = (t7 + 12U);
	*((char**)t38)         = t4;
	t39                    = (t7 + 20U);
	*((unsigned char*)t39) = t5;
	t43                    = (t11 + 56U);
	t44                    = *((char**)t43);
	t45                    = *((int*)t44);
	t43 = ieee_std_logic_arith_conv_signed_zeroext(t1, t42, t3, t4, t45);
	t47 = (t11 + 56U);
	t48 = *((char**)t47);
	t49 = *((int*)t48);
	t47 = ieee_p_3499444699_sub_17676902_3536714472(t1, t46, t5, t49);
	t50 = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51 = (t11 + 56U);
	t52 = *((char**)t51);
	t53 = *((int*)t52);
	t54 = (t53 - 1);
	t51 = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55 = (t27 + 56U);
	t56 = *((char**)t55);
	t55 = (t56 + 0);
	t57 = (t40 + 12U);
	t29 = *((unsigned int*)t57);
	t29 = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t36) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1413961257_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = (t1 + 2616);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                    = (t27 + 64U);
	*((char**)t34)         = t23;
	t35                    = (t27 + 80U);
	*((unsigned int*)t35)  = t22;
	t36                    = (t7 + 4U);
	*((unsigned char*)t36) = t3;
	t37                    = (t7 + 5U);
	t38                    = (t4 != 0);
	if(t38 == 1)
		goto LAB3;

LAB2:
	t39            = (t7 + 13U);
	*((char**)t39) = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_p_3499444699_sub_17676902_3536714472(t1, t42, t3, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_zeroext(t1, t46, t4, t5, t49);
	t50            = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t37) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_3645436282_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18                    = (t7 + 12U);
	*((char**)t18)         = t4;
	t19                    = (t7 + 20U);
	*((unsigned char*)t19) = t5;
	t22                    = (t10 + 56U);
	t23                    = *((char**)t22);
	t24                    = *((int*)t23);
	t22 = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26 = (t10 + 56U);
	t27 = *((char**)t26);
	t28 = *((int*)t27);
	t26 = ieee_p_3499444699_sub_17676902_3536714472(t1, t25, t5, t28);
	t29 = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30 = (t20 + 12U);
	t31 = *((unsigned int*)t30);
	t31 = (t31 * 1U);
	t0  = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2850510694_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                     = (t5 + 12U);
	t9                     = *((unsigned int*)t8);
	t10                    = (t6 + 4U);
	t11                    = ((STD_STANDARD) + 384);
	t12                    = (t10 + 88U);
	*((char**)t12)         = t11;
	t14                    = (t10 + 56U);
	*((char**)t14)         = t13;
	*((unsigned int*)t13)  = t9;
	t15                    = (t10 + 80U);
	*((unsigned int*)t15)  = 4U;
	t16                    = (t7 + 4U);
	*((unsigned char*)t16) = t3;
	t17                    = (t7 + 5U);
	t18                    = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 13U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_p_3499444699_sub_17676902_3536714472(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_723948540_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_minus_unsigned(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_278427631_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t17[8];
	char          t26[16];
	char          t27[16];
	char          t31[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t28;
	char*         t29;
	int           t30;
	char*         t32;
	char*         t33;
	int           t34;
	char*         t35;
	char*         t36;
	unsigned int  t37;
	char*         t38;
	int           t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	char*         t44;
	char*         t45;
	int           t46;
	unsigned int  t47;

LAB0:
	t9             = (t4 + 12U);
	t10            = *((unsigned int*)t9);
	t11            = (t6 + 12U);
	t12            = *((unsigned int*)t11);
	t13            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), ((t12)));
	t14            = (t7 + 4U);
	t15            = ((STD_STANDARD) + 384);
	t16            = (t14 + 88U);
	*((char**)t16) = t15;
	t18            = (t14 + 56U);
	*((char**)t18) = t17;
	*((int*)t17)   = t13;
	t19            = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t8 + 4U);
	t21                   = (t3 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t8 + 12U);
	*((char**)t22) = t4;
	t23            = (t8 + 20U);
	t24            = (t5 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t8 + 28U);
	*((char**)t25) = t6;
	t28            = (t14 + 56U);
	t29            = *((char**)t28);
	t30            = *((int*)t29);
	t28            = ieee_std_logic_arith_conv_signed_signext(t1, t27, t3, t4, t30);
	t32            = (t14 + 56U);
	t33            = *((char**)t32);
	t34            = *((int*)t33);
	t32            = ieee_std_logic_arith_conv_signed_signext(t1, t31, t5, t6, t34);
	t35            = ieee_std_logic_arith_minus_signed(t1, t26, t28, t27, t32, t31);
	t36            = (t26 + 12U);
	t37            = *((unsigned int*)t36);
	t37            = (t37 * 1U);
	t0             = xsi_get_transient_memory(t37);
	memcpy(t0, t35, t37);
	t38                   = (t26 + 0U);
	t39                   = *((int*)t38);
	t40                   = (t26 + 4U);
	t41                   = *((int*)t40);
	t42                   = (t26 + 8U);
	t43                   = *((int*)t42);
	t44                   = (t2 + 0U);
	t45                   = (t44 + 0U);
	*((int*)t45)          = t39;
	t45                   = (t44 + 4U);
	*((int*)t45)          = t41;
	t45                   = (t44 + 8U);
	*((int*)t45)          = t43;
	t46                   = (t41 - t39);
	t47                   = (t46 * t43);
	t47                   = (t47 + 1);
	t45                   = (t44 + 12U);
	*((unsigned int*)t45) = t47;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t3;
	goto LAB2;

LAB5:
	*((char**)t23) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_4097868825_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	unsigned int  t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 + 1);
	t12                   = (t6 + 12U);
	t13                   = *((unsigned int*)t12);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t11, ((t13)));
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_zeroext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_signext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_minus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_125732817_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[128];
	char          t8[40];
	char          t18[8];
	char          t27[16];
	char          t28[16];
	char          t32[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	int           t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;
	char*         t23;
	char*         t24;
	unsigned char t25;
	char*         t26;
	char*         t29;
	char*         t30;
	int           t31;
	char*         t33;
	char*         t34;
	int           t35;
	char*         t36;
	char*         t37;
	unsigned int  t38;
	char*         t39;
	int           t40;
	char*         t41;
	int           t42;
	char*         t43;
	int           t44;
	char*         t45;
	char*         t46;
	int           t47;
	unsigned int  t48;

LAB0:
	t9                    = (t4 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t6 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = (t12 + 1);
	t14                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t10)), t13);
	t15                   = (t7 + 4U);
	t16                   = ((STD_STANDARD) + 384);
	t17                   = (t15 + 88U);
	*((char**)t17)        = t16;
	t19                   = (t15 + 56U);
	*((char**)t19)        = t18;
	*((int*)t18)          = t14;
	t20                   = (t15 + 80U);
	*((unsigned int*)t20) = 4U;
	t21                   = (t8 + 4U);
	t22                   = (t3 != 0);
	if(t22 == 1)
		goto LAB3;

LAB2:
	t23            = (t8 + 12U);
	*((char**)t23) = t4;
	t24            = (t8 + 20U);
	t25            = (t5 != 0);
	if(t25 == 1)
		goto LAB5;

LAB4:
	t26            = (t8 + 28U);
	*((char**)t26) = t6;
	t29            = (t15 + 56U);
	t30            = *((char**)t29);
	t31            = *((int*)t30);
	t29            = ieee_std_logic_arith_conv_signed_signext(t1, t28, t3, t4, t31);
	t33            = (t15 + 56U);
	t34            = *((char**)t33);
	t35            = *((int*)t34);
	t33            = ieee_std_logic_arith_conv_signed_zeroext(t1, t32, t5, t6, t35);
	t36            = ieee_std_logic_arith_minus_signed(t1, t27, t29, t28, t33, t32);
	t37            = (t27 + 12U);
	t38            = *((unsigned int*)t37);
	t38            = (t38 * 1U);
	t0             = xsi_get_transient_memory(t38);
	memcpy(t0, t36, t38);
	t39                   = (t27 + 0U);
	t40                   = *((int*)t39);
	t41                   = (t27 + 4U);
	t42                   = *((int*)t41);
	t43                   = (t27 + 8U);
	t44                   = *((int*)t43);
	t45                   = (t2 + 0U);
	t46                   = (t45 + 0U);
	*((int*)t46)          = t40;
	t46                   = (t45 + 4U);
	*((int*)t46)          = t42;
	t46                   = (t45 + 8U);
	*((int*)t46)          = t44;
	t47                   = (t42 - t40);
	t48                   = (t47 * t44);
	t48                   = (t48 + 1);
	t46                   = (t45 + 12U);
	*((unsigned int*)t46) = t48;

LAB1:
	return t0;
LAB3:
	*((char**)t21) = t3;
	goto LAB2;

LAB5:
	*((char**)t24) = t5;
	goto LAB4;

LAB6:;
}

char* ieee_p_3499444699_sub_4232537207_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	unsigned char t37;
	char*         t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = ((IEEE_P_2592010699) + 4024);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	t37                   = (t3 != 0);
	if(t37 == 1)
		goto LAB3;

LAB2:
	t38            = (t7 + 12U);
	*((char**)t38) = t4;
	t39            = (t7 + 20U);
	*((int*)t39)   = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_zeroext(t1, t42, t3, t4, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_integer(t1, t46, t5, t49);
	t50            = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t36) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4144959699_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = ((IEEE_P_2592010699) + 4024);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	*((int*)t36)          = t3;
	t37                   = (t7 + 8U);
	t38                   = (t4 != 0);
	if(t38 == 1)
		goto LAB3;

LAB2:
	t39            = (t7 + 16U);
	*((char**)t39) = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_std_logic_arith_conv_signed_integer(t1, t42, t3, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_zeroext(t1, t46, t4, t5, t49);
	t50            = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t37) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4198186476_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t7 + 12U);
	*((char**)t18) = t4;
	t19            = (t7 + 20U);
	*((int*)t19)   = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_integer(t1, t25, t5, t28);
	t29            = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_521325328_3536714472(
    char* t1, char* t2, int t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	*((int*)t16)          = t3;
	t17                   = (t7 + 8U);
	t18                   = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 16U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_std_logic_arith_conv_signed_integer(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_460092141_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	unsigned char t37;
	char*         t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = ((IEEE_P_2592010699) + 4024);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                   = (t27 + 64U);
	*((char**)t34)        = t23;
	t35                   = (t27 + 80U);
	*((unsigned int*)t35) = t22;
	t36                   = (t7 + 4U);
	t37                   = (t3 != 0);
	if(t37 == 1)
		goto LAB3;

LAB2:
	t38                    = (t7 + 12U);
	*((char**)t38)         = t4;
	t39                    = (t7 + 20U);
	*((unsigned char*)t39) = t5;
	t43                    = (t11 + 56U);
	t44                    = *((char**)t43);
	t45                    = *((int*)t44);
	t43 = ieee_std_logic_arith_conv_signed_zeroext(t1, t42, t3, t4, t45);
	t47 = (t11 + 56U);
	t48 = *((char**)t47);
	t49 = *((int*)t48);
	t47 = ieee_p_3499444699_sub_17676902_3536714472(t1, t46, t5, t49);
	t50 = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51 = (t11 + 56U);
	t52 = *((char**)t51);
	t53 = *((int*)t52);
	t54 = (t53 - 1);
	t51 = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55 = (t27 + 56U);
	t56 = *((char**)t55);
	t55 = (t56 + 0);
	t57 = (t40 + 12U);
	t29 = *((unsigned int*)t57);
	t29 = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t36) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4208333081_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[248];
	char          t7[24];
	char          t14[8];
	char          t23[16];
	char          t40[16];
	char          t41[16];
	char          t42[16];
	char          t46[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	int           t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
	int           t26;
	char*         t27;
	int           t28;
	unsigned int  t29;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t43;
	char*         t44;
	int           t45;
	char*         t47;
	char*         t48;
	int           t49;
	char*         t50;
	char*         t51;
	char*         t52;
	int           t53;
	int           t54;
	char*         t55;
	char*         t56;
	char*         t57;

LAB0:
	t8                    = (t5 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t6 + 4U);
	t12                   = ((STD_STANDARD) + 384);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	*((int*)t14)          = t10;
	t16                   = (t11 + 80U);
	*((unsigned int*)t16) = 4U;
	t17                   = (t11 + 56U);
	t18                   = *((char**)t17);
	t19                   = *((int*)t18);
	t20                   = (t19 - 2);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t17                   = (t11 + 56U);
	t24                   = *((char**)t17);
	t25                   = *((int*)t24);
	t26                   = (t25 - 2);
	t17                   = (t23 + 0U);
	t27                   = (t17 + 0U);
	*((int*)t27)          = t26;
	t27                   = (t17 + 4U);
	*((int*)t27)          = 0;
	t27                   = (t17 + 8U);
	*((int*)t27)          = -1;
	t28                   = (0 - t26);
	t29                   = (t28 * -1);
	t29                   = (t29 + 1);
	t27                   = (t17 + 12U);
	*((unsigned int*)t27) = t29;
	t27                   = (t6 + 124U);
	t30                   = ((IEEE_P_2592010699) + 4024);
	t31                   = (t27 + 88U);
	*((char**)t31)        = t30;
	t32                   = (char*)alloca(t22);
	t33                   = (t27 + 56U);
	*((char**)t33)        = t32;
	xsi_type_set_default_value(t30, t32, t23);
	t34                    = (t27 + 64U);
	*((char**)t34)         = t23;
	t35                    = (t27 + 80U);
	*((unsigned int*)t35)  = t22;
	t36                    = (t7 + 4U);
	*((unsigned char*)t36) = t3;
	t37                    = (t7 + 5U);
	t38                    = (t4 != 0);
	if(t38 == 1)
		goto LAB3;

LAB2:
	t39            = (t7 + 13U);
	*((char**)t39) = t5;
	t43            = (t11 + 56U);
	t44            = *((char**)t43);
	t45            = *((int*)t44);
	t43            = ieee_p_3499444699_sub_17676902_3536714472(t1, t42, t3, t45);
	t47            = (t11 + 56U);
	t48            = *((char**)t47);
	t49            = *((int*)t48);
	t47            = ieee_std_logic_arith_conv_signed_zeroext(t1, t46, t4, t5, t49);
	t50            = ieee_std_logic_arith_minus_signed(t1, t41, t43, t42, t47, t46);
	t51            = (t11 + 56U);
	t52            = *((char**)t51);
	t53            = *((int*)t52);
	t54            = (t53 - 1);
	t51            = ieee_std_logic_arith_conv_unsigned_signext(t1, t40, t50, t41, t54);
	t55            = (t27 + 56U);
	t56            = *((char**)t55);
	t55            = (t56 + 0);
	t57            = (t40 + 12U);
	t29            = *((unsigned int*)t57);
	t29            = (t29 * 1U);
	memcpy(t55, t51, t29);
	t8  = (t27 + 56U);
	t12 = *((char**)t8);
	t8  = (t23 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t12, t9);
	t13                   = (t23 + 0U);
	t10                   = *((int*)t13);
	t15                   = (t23 + 4U);
	t19                   = *((int*)t15);
	t16                   = (t23 + 8U);
	t20                   = *((int*)t16);
	t17                   = (t2 + 0U);
	t18                   = (t17 + 0U);
	*((int*)t18)          = t10;
	t18                   = (t17 + 4U);
	*((int*)t18)          = t19;
	t18                   = (t17 + 8U);
	*((int*)t18)          = t20;
	t21                   = (t19 - t10);
	t22                   = (t21 * t20);
	t22                   = (t22 + 1);
	t18                   = (t17 + 12U);
	*((unsigned int*)t18) = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t37) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_765031594_3536714472(
    char* t1, char* t2, char* t3, char* t4, unsigned char t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((unsigned int*)t13) = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t7 + 4U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18                    = (t7 + 12U);
	*((char**)t18)         = t4;
	t19                    = (t7 + 20U);
	*((unsigned char*)t19) = t5;
	t22                    = (t10 + 56U);
	t23                    = *((char**)t22);
	t24                    = *((int*)t23);
	t22 = ieee_std_logic_arith_conv_signed_signext(t1, t21, t3, t4, t24);
	t26 = (t10 + 56U);
	t27 = *((char**)t26);
	t28 = *((int*)t27);
	t26 = ieee_p_3499444699_sub_17676902_3536714472(t1, t25, t5, t28);
	t29 = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30 = (t20 + 12U);
	t31 = *((unsigned int*)t30);
	t31 = (t31 * 1U);
	t0  = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4265073302_3536714472(
    char* t1, char* t2, unsigned char t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[24];
	char          t13[8];
	char          t20[16];
	char          t21[16];
	char          t25[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t22;
	char*         t23;
	int           t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	unsigned int  t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	char*         t36;
	int           t37;
	char*         t38;
	char*         t39;
	int           t40;
	unsigned int  t41;

LAB0:
	t8                     = (t5 + 12U);
	t9                     = *((unsigned int*)t8);
	t10                    = (t6 + 4U);
	t11                    = ((STD_STANDARD) + 384);
	t12                    = (t10 + 88U);
	*((char**)t12)         = t11;
	t14                    = (t10 + 56U);
	*((char**)t14)         = t13;
	*((unsigned int*)t13)  = t9;
	t15                    = (t10 + 80U);
	*((unsigned int*)t15)  = 4U;
	t16                    = (t7 + 4U);
	*((unsigned char*)t16) = t3;
	t17                    = (t7 + 5U);
	t18                    = (t4 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t7 + 13U);
	*((char**)t19) = t5;
	t22            = (t10 + 56U);
	t23            = *((char**)t22);
	t24            = *((int*)t23);
	t22            = ieee_p_3499444699_sub_17676902_3536714472(t1, t21, t3, t24);
	t26            = (t10 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t29            = ieee_std_logic_arith_minus_signed(t1, t20, t22, t21, t26, t25);
	t30            = (t20 + 12U);
	t31            = *((unsigned int*)t30);
	t31            = (t31 * 1U);
	t0             = xsi_get_transient_memory(t31);
	memcpy(t0, t29, t31);
	t32                   = (t20 + 0U);
	t33                   = *((int*)t32);
	t34                   = (t20 + 4U);
	t35                   = *((int*)t34);
	t36                   = (t20 + 8U);
	t37                   = *((int*)t36);
	t38                   = (t2 + 0U);
	t39                   = (t38 + 0U);
	*((int*)t39)          = t33;
	t39                   = (t38 + 4U);
	*((int*)t39)          = t35;
	t39                   = (t38 + 8U);
	*((int*)t39)          = t37;
	t40                   = (t35 - t33);
	t41                   = (t40 * t37);
	t41                   = (t41 + 1);
	t39                   = (t38 + 12U);
	*((unsigned int*)t39) = t41;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t4;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1427366415_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t6[24];
	char*         t0;
	char*         t7;
	unsigned char t8;
	char*         t9;
	char*         t10;
	unsigned int  t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	int           t17;
	char*         t18;
	char*         t19;
	int           t20;
	unsigned int  t21;

LAB0:
	t7 = (t6 + 4U);
	t8 = (t3 != 0);
	if(t8 == 1)
		goto LAB3;

LAB2:
	t9            = (t6 + 12U);
	*((char**)t9) = t4;
	t10           = (t4 + 12U);
	t11           = *((unsigned int*)t10);
	t11           = (t11 * 1U);
	t0            = xsi_get_transient_memory(t11);
	memcpy(t0, t3, t11);
	t12                   = (t4 + 0U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 4U);
	t15                   = *((int*)t14);
	t16                   = (t4 + 8U);
	t17                   = *((int*)t16);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t13;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t15;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t17;
	t20                   = (t15 - t13);
	t21                   = (t20 * t17);
	t21                   = (t21 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t21;

LAB1:
	return t0;
LAB3:
	*((char**)t7) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2708953618_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t6[24];
	char*         t0;
	char*         t7;
	unsigned char t8;
	char*         t9;
	char*         t10;
	unsigned int  t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	int           t17;
	char*         t18;
	char*         t19;
	int           t20;
	unsigned int  t21;

LAB0:
	t7 = (t6 + 4U);
	t8 = (t3 != 0);
	if(t8 == 1)
		goto LAB3;

LAB2:
	t9            = (t6 + 12U);
	*((char**)t9) = t4;
	t10           = (t4 + 12U);
	t11           = *((unsigned int*)t10);
	t11           = (t11 * 1U);
	t0            = xsi_get_transient_memory(t11);
	memcpy(t0, t3, t11);
	t12                   = (t4 + 0U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 4U);
	t15                   = *((int*)t14);
	t16                   = (t4 + 8U);
	t17                   = *((int*)t16);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t13;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t15;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t17;
	t20                   = (t15 - t13);
	t21                   = (t20 * t17);
	t21                   = (t21 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t21;

LAB1:
	return t0;
LAB3:
	*((char**)t7) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_2998320402_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char          t29[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	char*         t30;
	char*         t31;
	char*         t32;
	char*         t33;
	unsigned int  t34;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2728);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t30            = ieee_p_3499444699_sub_3401730016_3536714472(t1, t29, 0, t3, t4);
	t31            = (t17 + 56U);
	t32            = *((char**)t31);
	t31            = (t32 + 0);
	t33            = (t29 + 12U);
	t19            = *((unsigned int*)t33);
	t34            = (1U * t19);
	memcpy(t31, t30, t34);
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_3466875835_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t9[16];
	char          t59[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	char*         t10;
	int           t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	unsigned char t27;
	char*         t28;
	unsigned char t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	int           t35;
	int           t36;
	unsigned int  t37;
	unsigned int  t38;
	char*         t39;
	unsigned char t40;
	unsigned char t41;
	char*         t42;
	int           t43;
	char*         t44;
	int           t45;
	char*         t46;
	int           t47;
	int           t48;
	unsigned int  t49;
	unsigned int  t50;
	unsigned int  t51;
	char*         t52;
	unsigned char t53;
	unsigned char t54;
	char*         t55;
	char*         t56;
	char*         t57;
	unsigned int  t58;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t8                    = (t8 * 1U);
	t10                   = (t4 + 0U);
	t11                   = *((int*)t10);
	t12                   = (t4 + 4U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 8U);
	t15                   = *((int*)t14);
	t16                   = (t9 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t13;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2728);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t8);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t9);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t9;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t8;
	t26                   = (t6 + 4U);
	t27                   = (t3 != 0);
	if(t27 == 1)
		goto LAB3;

LAB2:
	t28            = (t6 + 12U);
	*((char**)t28) = t4;
	t30            = (t4 + 0U);
	t31            = *((int*)t30);
	t32            = (t4 + 0U);
	t33            = *((int*)t32);
	t34            = (t4 + 8U);
	t35            = *((int*)t34);
	t36            = (t31 - t33);
	t19            = (t36 * t35);
	t37            = (1U * t19);
	t38            = (0 + t37);
	t39            = (t3 + t38);
	t40            = *((unsigned char*)t39);
	t41            = (t40 == (unsigned char)2);
	if(t41 == 1)
		goto LAB7;

LAB8:
	t42 = (t4 + 0U);
	t43 = *((int*)t42);
	t44 = (t4 + 0U);
	t45 = *((int*)t44);
	t46 = (t4 + 8U);
	t47 = *((int*)t46);
	t48 = (t43 - t45);
	t49 = (t48 * t47);
	t50 = (1U * t49);
	t51 = (0 + t50);
	t52 = (t3 + t51);
	t53 = *((unsigned char*)t52);
	t54 = (t53 == (unsigned char)6);
	t29 = t54;

LAB9:
	if(t29 != 0)
		goto LAB4;

LAB6:
	t7  = ieee_p_3499444699_sub_3401730016_3536714472(t1, t59, 0, t3, t4);
	t10 = (t17 + 56U);
	t12 = *((char**)t10);
	t10 = (t12 + 0);
	t14 = (t59 + 12U);
	t8  = *((unsigned int*)t14);
	t19 = (1U * t8);
	memcpy(t10, t7, t19);

LAB5:
	t7  = (t17 + 56U);
	t10 = *((char**)t7);
	t7  = (t9 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t10, t8);
	t12                   = (t9 + 0U);
	t11                   = *((int*)t12);
	t14                   = (t9 + 4U);
	t13                   = *((int*)t14);
	t16                   = (t9 + 8U);
	t15                   = *((int*)t16);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t13;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t15;
	t18                   = (t13 - t11);
	t19                   = (t18 * t15);
	t19                   = (t19 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t19;

LAB1:
	return t0;
LAB3:
	*((char**)t26) = t3;
	goto LAB2;

LAB4:
	t55 = (t17 + 56U);
	t56 = *((char**)t55);
	t55 = (t56 + 0);
	t57 = (t4 + 12U);
	t58 = *((unsigned int*)t57);
	t58 = (t58 * 1U);
	memcpy(t55, t3, t58);
	goto LAB5;

LAB7:
	t29 = (unsigned char)1;
	goto LAB9;

LAB10:;
}

char* ieee_p_3499444699_sub_4192098780_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t6[24];
	char*         t0;
	char*         t7;
	unsigned char t8;
	char*         t9;
	char*         t10;
	unsigned int  t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	int           t17;
	char*         t18;
	char*         t19;
	int           t20;
	unsigned int  t21;

LAB0:
	t7 = (t6 + 4U);
	t8 = (t3 != 0);
	if(t8 == 1)
		goto LAB3;

LAB2:
	t9            = (t6 + 12U);
	*((char**)t9) = t4;
	t10           = (t4 + 12U);
	t11           = *((unsigned int*)t10);
	t11           = (t11 * 1U);
	t0            = xsi_get_transient_memory(t11);
	memcpy(t0, t3, t11);
	t12                   = (t4 + 0U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 4U);
	t15                   = *((int*)t14);
	t16                   = (t4 + 8U);
	t17                   = *((int*)t16);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t13;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t15;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t17;
	t20                   = (t15 - t13);
	t21                   = (t20 * t17);
	t21                   = (t21 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t21;

LAB1:
	return t0;
LAB3:
	*((char**)t7) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_4123516226_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t6[24];
	char*         t0;
	char*         t7;
	unsigned char t8;
	char*         t9;
	char*         t10;
	unsigned int  t11;
	char*         t12;
	int           t13;
	char*         t14;
	int           t15;
	char*         t16;
	int           t17;
	char*         t18;
	char*         t19;
	int           t20;
	unsigned int  t21;

LAB0:
	t7 = (t6 + 4U);
	t8 = (t3 != 0);
	if(t8 == 1)
		goto LAB3;

LAB2:
	t9            = (t6 + 12U);
	*((char**)t9) = t4;
	t10           = (t4 + 12U);
	t11           = *((unsigned int*)t10);
	t11           = (t11 * 1U);
	t0            = xsi_get_transient_memory(t11);
	memcpy(t0, t3, t11);
	t12                   = (t4 + 0U);
	t13                   = *((int*)t12);
	t14                   = (t4 + 4U);
	t15                   = *((int*)t14);
	t16                   = (t4 + 8U);
	t17                   = *((int*)t16);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t13;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t15;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t17;
	t20                   = (t15 - t13);
	t21                   = (t20 * t17);
	t21                   = (t21 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t21;

LAB1:
	return t0;
LAB3:
	*((char**)t7) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_145293660_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[248];
	char          t6[24];
	char          t12[16];
	char          t27[16];
	char          t47[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	int           t10;
	unsigned int  t11;
	char*         t13;
	unsigned int  t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	unsigned char t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	unsigned int  t52;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 - 1);
	t10                   = (0 - t9);
	t11                   = (t10 * -1);
	t11                   = (t11 + 1);
	t11                   = (t11 * 1U);
	t13                   = (t4 + 12U);
	t14                   = *((unsigned int*)t13);
	t15                   = (t14 - 1);
	t16                   = (t12 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t15;
	t17                   = (t16 + 4U);
	*((int*)t17)          = 0;
	t17                   = (t16 + 8U);
	*((int*)t17)          = -1;
	t18                   = (0 - t15);
	t19                   = (t18 * -1);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2728);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t11);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t12);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t12;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t11;
	t26                   = (t12 + 12U);
	t19                   = *((unsigned int*)t26);
	t19                   = (t19 * 1U);
	t28                   = (t12 + 0U);
	t29                   = *((int*)t28);
	t30                   = (t12 + 4U);
	t31                   = *((int*)t30);
	t32                   = (t12 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t27 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t29;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t31;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t31 - t29);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t5 + 124U);
	t38                   = ((IEEE_P_2592010699) + 4024);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t19);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	xsi_type_set_default_value(t38, t40, t27);
	t42                   = (t35 + 64U);
	*((char**)t42)        = t27;
	t43                   = (t35 + 80U);
	*((unsigned int*)t43) = t19;
	t44                   = (t6 + 4U);
	t45                   = (t3 != 0);
	if(t45 == 1)
		goto LAB3;

LAB2:
	t46            = (t6 + 12U);
	*((char**)t46) = t4;
	t48            = ieee_p_3499444699_sub_3401730016_3536714472(t1, t47, 0, t3, t4);
	t49            = (t17 + 56U);
	t50            = *((char**)t49);
	t49            = (t50 + 0);
	t51            = (t47 + 12U);
	t37            = *((unsigned int*)t51);
	t52            = (1U * t37);
	memcpy(t49, t48, t52);
	t7  = (t17 + 56U);
	t13 = *((char**)t7);
	t7  = (t35 + 56U);
	t16 = *((char**)t7);
	t7  = (t16 + 0);
	t20 = (t12 + 12U);
	t8  = *((unsigned int*)t20);
	t8  = (t8 * 1U);
	memcpy(t7, t13, t8);
	t7  = (t35 + 56U);
	t13 = *((char**)t7);
	t7  = (t27 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t13, t8);
	t16                   = (t27 + 0U);
	t9                    = *((int*)t16);
	t20                   = (t27 + 4U);
	t10                   = *((int*)t20);
	t21                   = (t27 + 8U);
	t15                   = *((int*)t21);
	t23                   = (t2 + 0U);
	t24                   = (t23 + 0U);
	*((int*)t24)          = t9;
	t24                   = (t23 + 4U);
	*((int*)t24)          = t10;
	t24                   = (t23 + 8U);
	*((int*)t24)          = t15;
	t18                   = (t10 - t9);
	t11                   = (t18 * t15);
	t11                   = (t11 + 1);
	t24                   = (t23 + 12U);
	*((unsigned int*)t24) = t11;

LAB1:
	return t0;
LAB3:
	*((char**)t44) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_613849093_3536714472(char* t1, char* t2, char* t3, char* t4)
{
	char          t5[248];
	char          t6[24];
	char          t12[16];
	char          t27[16];
	char          t77[16];
	char*         t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	int           t10;
	unsigned int  t11;
	char*         t13;
	unsigned int  t14;
	int           t15;
	char*         t16;
	char*         t17;
	int           t18;
	unsigned int  t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	unsigned char t45;
	char*         t46;
	unsigned char t47;
	char*         t48;
	int           t49;
	char*         t50;
	int           t51;
	char*         t52;
	int           t53;
	int           t54;
	unsigned int  t55;
	unsigned int  t56;
	char*         t57;
	unsigned char t58;
	unsigned char t59;
	char*         t60;
	int           t61;
	char*         t62;
	int           t63;
	char*         t64;
	int           t65;
	int           t66;
	unsigned int  t67;
	unsigned int  t68;
	unsigned int  t69;
	char*         t70;
	unsigned char t71;
	unsigned char t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned int  t76;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 - 1);
	t10                   = (0 - t9);
	t11                   = (t10 * -1);
	t11                   = (t11 + 1);
	t11                   = (t11 * 1U);
	t13                   = (t4 + 12U);
	t14                   = *((unsigned int*)t13);
	t15                   = (t14 - 1);
	t16                   = (t12 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t15;
	t17                   = (t16 + 4U);
	*((int*)t17)          = 0;
	t17                   = (t16 + 8U);
	*((int*)t17)          = -1;
	t18                   = (0 - t15);
	t19                   = (t18 * -1);
	t19                   = (t19 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t19;
	t17                   = (t5 + 4U);
	t20                   = (t1 + 2728);
	t21                   = (t17 + 88U);
	*((char**)t21)        = t20;
	t22                   = (char*)alloca(t11);
	t23                   = (t17 + 56U);
	*((char**)t23)        = t22;
	xsi_type_set_default_value(t20, t22, t12);
	t24                   = (t17 + 64U);
	*((char**)t24)        = t12;
	t25                   = (t17 + 80U);
	*((unsigned int*)t25) = t11;
	t26                   = (t12 + 12U);
	t19                   = *((unsigned int*)t26);
	t19                   = (t19 * 1U);
	t28                   = (t12 + 0U);
	t29                   = *((int*)t28);
	t30                   = (t12 + 4U);
	t31                   = *((int*)t30);
	t32                   = (t12 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t27 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t29;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t31;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t31 - t29);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t5 + 124U);
	t38                   = ((IEEE_P_2592010699) + 4024);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t19);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	xsi_type_set_default_value(t38, t40, t27);
	t42                   = (t35 + 64U);
	*((char**)t42)        = t27;
	t43                   = (t35 + 80U);
	*((unsigned int*)t43) = t19;
	t44                   = (t6 + 4U);
	t45                   = (t3 != 0);
	if(t45 == 1)
		goto LAB3;

LAB2:
	t46            = (t6 + 12U);
	*((char**)t46) = t4;
	t48            = (t4 + 0U);
	t49            = *((int*)t48);
	t50            = (t4 + 0U);
	t51            = *((int*)t50);
	t52            = (t4 + 8U);
	t53            = *((int*)t52);
	t54            = (t49 - t51);
	t37            = (t54 * t53);
	t55            = (1U * t37);
	t56            = (0 + t55);
	t57            = (t3 + t56);
	t58            = *((unsigned char*)t57);
	t59            = (t58 == (unsigned char)2);
	if(t59 == 1)
		goto LAB7;

LAB8:
	t60 = (t4 + 0U);
	t61 = *((int*)t60);
	t62 = (t4 + 0U);
	t63 = *((int*)t62);
	t64 = (t4 + 8U);
	t65 = *((int*)t64);
	t66 = (t61 - t63);
	t67 = (t66 * t65);
	t68 = (1U * t67);
	t69 = (0 + t68);
	t70 = (t3 + t69);
	t71 = *((unsigned char*)t70);
	t72 = (t71 == (unsigned char)6);
	t47 = t72;

LAB9:
	if(t47 != 0)
		goto LAB4;

LAB6:
	t7  = ieee_p_3499444699_sub_3401730016_3536714472(t1, t77, 0, t3, t4);
	t13 = (t17 + 56U);
	t16 = *((char**)t13);
	t13 = (t16 + 0);
	t20 = (t77 + 12U);
	t8  = *((unsigned int*)t20);
	t11 = (1U * t8);
	memcpy(t13, t7, t11);
	t7  = (t17 + 56U);
	t13 = *((char**)t7);
	t7  = (t35 + 56U);
	t16 = *((char**)t7);
	t7  = (t16 + 0);
	t20 = (t12 + 12U);
	t8  = *((unsigned int*)t20);
	t8  = (t8 * 1U);
	memcpy(t7, t13, t8);

LAB5:
	t7  = (t35 + 56U);
	t13 = *((char**)t7);
	t7  = (t27 + 12U);
	t8  = *((unsigned int*)t7);
	t8  = (t8 * 1U);
	t0  = xsi_get_transient_memory(t8);
	memcpy(t0, t13, t8);
	t16                   = (t27 + 0U);
	t9                    = *((int*)t16);
	t20                   = (t27 + 4U);
	t10                   = *((int*)t20);
	t21                   = (t27 + 8U);
	t15                   = *((int*)t21);
	t23                   = (t2 + 0U);
	t24                   = (t23 + 0U);
	*((int*)t24)          = t9;
	t24                   = (t23 + 4U);
	*((int*)t24)          = t10;
	t24                   = (t23 + 8U);
	*((int*)t24)          = t15;
	t18                   = (t10 - t9);
	t11                   = (t18 * t15);
	t11                   = (t11 + 1);
	t24                   = (t23 + 12U);
	*((unsigned int*)t24) = t11;

LAB1:
	return t0;
LAB3:
	*((char**)t44) = t3;
	goto LAB2;

LAB4:
	t73 = (t35 + 56U);
	t74 = *((char**)t73);
	t73 = (t74 + 0);
	t75 = (t4 + 12U);
	t76 = *((unsigned int*)t75);
	t76 = (t76 * 1U);
	memcpy(t73, t3, t76);
	goto LAB5;

LAB7:
	t47 = (unsigned char)1;
	goto LAB9;

LAB10:;
}

unsigned char ieee_p_3499444699_sub_1577414374_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t11[8];
	unsigned char t0;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t12;
	char*         t13;
	char*         t14;
	unsigned char t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;

LAB0:
	t8                     = (t6 + 4U);
	t9                     = ((STD_STANDARD) + 0);
	t10                    = (t8 + 88U);
	*((char**)t10)         = t9;
	t12                    = (t8 + 56U);
	*((char**)t12)         = t11;
	*((unsigned char*)t11) = (unsigned char)0;
	t13                    = (t8 + 80U);
	*((unsigned int*)t13)  = 1U;
	t14                    = (t7 + 4U);
	t15                    = (t2 != 0);
	if(t15 == 1)
		goto LAB3;

LAB2:
	t16            = (t7 + 12U);
	*((char**)t16) = t3;
	t17            = (t7 + 20U);
	t18            = (t4 != 0);
	if(t18 == 1)
		goto LAB5;

LAB4:
	t19            = (t7 + 28U);
	*((char**)t19) = t5;
	t20            = (t8 + 56U);
	t21            = *((char**)t20);
	t22            = *((unsigned char*)t21);
	t0             = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t14) = t2;
	goto LAB2;

LAB5:
	*((char**)t17) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1358488199_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t11[8];
	unsigned char t0;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t12;
	char*         t13;
	char*         t14;
	unsigned char t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t20;
	char*         t21;
	unsigned char t22;

LAB0:
	t8                     = (t6 + 4U);
	t9                     = ((STD_STANDARD) + 0);
	t10                    = (t8 + 88U);
	*((char**)t10)         = t9;
	t12                    = (t8 + 56U);
	*((char**)t12)         = t11;
	*((unsigned char*)t11) = (unsigned char)0;
	t13                    = (t8 + 80U);
	*((unsigned int*)t13)  = 1U;
	t14                    = (t7 + 4U);
	t15                    = (t2 != 0);
	if(t15 == 1)
		goto LAB3;

LAB2:
	t16            = (t7 + 12U);
	*((char**)t16) = t3;
	t17            = (t7 + 20U);
	t18            = (t4 != 0);
	if(t18 == 1)
		goto LAB5;

LAB4:
	t19            = (t7 + 28U);
	*((char**)t19) = t5;
	t20            = (t8 + 56U);
	t21            = *((char**)t20);
	t22            = *((unsigned char*)t21);
	t0             = t22;

LAB1:
	return t0;
LAB3:
	*((char**)t14) = t2;
	goto LAB2;

LAB5:
	*((char**)t17) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3678644199_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[488];
	char          t7[40];
	char          t13[8];
	char          t19[8];
	char          t25[8];
	char          t31[8];
	unsigned char t0;
	char*         t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t32;
	char*         t33;
	char*         t34;
	unsigned char t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	int           t43;
	char*         t44;
	int           t45;
	int           t46;
	unsigned int  t47;
	char*         t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	char*         t52;
	unsigned char t53;
	char*         t54;
	char*         t55;
	int           t56;
	int           t57;
	char*         t58;
	int           t59;
	int           t60;
	unsigned int  t61;
	char*         t62;
	int           t63;
	unsigned int  t64;
	unsigned int  t65;
	char*         t66;
	unsigned char t67;
	unsigned char t68;
	char*         t69;
	char*         t70;
	int           t71;
	int           t72;
	char*         t73;
	int           t74;
	int           t75;
	unsigned int  t76;
	char*         t77;
	int           t78;
	unsigned int  t79;
	unsigned int  t80;
	char*         t81;
	unsigned char t82;
	unsigned char t83;
	char*         t84;
	char*         t85;
	unsigned char t86;
	unsigned char t87;
	unsigned char t88;
	unsigned char t89;

LAB0:
	t8                    = (t3 + 0U);
	t9                    = *((int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 124U);
	t17                   = ((STD_STANDARD) + 0);
	t18                   = (t16 + 88U);
	*((char**)t18)        = t17;
	t20                   = (t16 + 56U);
	*((char**)t20)        = t19;
	xsi_type_set_default_value(t17, t19, 0);
	t21                   = (t16 + 80U);
	*((unsigned int*)t21) = 1U;
	t22                   = (t6 + 244U);
	t23                   = ((STD_STANDARD) + 0);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 1U;
	t28                   = (t6 + 364U);
	t29                   = ((STD_STANDARD) + 0);
	t30                   = (t28 + 88U);
	*((char**)t30)        = t29;
	t32                   = (t28 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, 0);
	t33                   = (t28 + 80U);
	*((unsigned int*)t33) = 1U;
	t34                   = (t7 + 4U);
	t35                   = (t2 != 0);
	if(t35 == 1)
		goto LAB3;

LAB2:
	t36            = (t7 + 12U);
	*((char**)t36) = t3;
	t37            = (t7 + 20U);
	t38            = (t4 != 0);
	if(t38 == 1)
		goto LAB5;

LAB4:
	t39            = (t7 + 28U);
	*((char**)t39) = t5;
	t40            = (t10 + 56U);
	t41            = *((char**)t40);
	t42            = *((int*)t41);
	t40            = (t3 + 0U);
	t43            = *((int*)t40);
	t44            = (t3 + 8U);
	t45            = *((int*)t44);
	t46            = (t42 - t43);
	t47            = (t46 * t45);
	t48            = (t3 + 4U);
	t49            = *((int*)t48);
	xsi_vhdl_check_range_of_index(t43, t49, t45, t42);
	t50 = (1U * t47);
	t51 = (0 + t50);
	t52 = (t2 + t51);
	t53 = *((unsigned char*)t52);
	t54 = (t10 + 56U);
	t55 = *((char**)t54);
	t56 = *((int*)t55);
	t54 = (t5 + 0U);
	t57 = *((int*)t54);
	t58 = (t5 + 8U);
	t59 = *((int*)t58);
	t60 = (t56 - t57);
	t61 = (t60 * t59);
	t62 = (t5 + 4U);
	t63 = *((int*)t62);
	xsi_vhdl_check_range_of_index(t57, t63, t59, t56);
	t64 = (1U * t61);
	t65 = (0 + t64);
	t66 = (t4 + t65);
	t67 = *((unsigned char*)t66);
	t68 = (t53 != t67);
	if(t68 != 0)
		goto LAB6;

LAB8:
	t8                    = (t28 + 56U);
	t11                   = *((char**)t8);
	t8                    = (t11 + 0);
	*((unsigned char*)t8) = (unsigned char)0;
	t8                    = (t10 + 56U);
	t11                   = *((char**)t8);
	t9                    = *((int*)t11);
	t42                   = (t9 - 1);
	t43                   = 0;
	t45                   = t42;

LAB9:
	if(t43 <= t45)
		goto LAB10;

LAB12:
LAB7:
	t8  = (t28 + 56U);
	t11 = *((char**)t8);
	t35 = *((unsigned char*)t11);
	t0  = t35;

LAB1:
	return t0;
LAB3:
	*((char**)t34) = t2;
	goto LAB2;

LAB5:
	*((char**)t37) = t4;
	goto LAB4;

LAB6:
	t69 = (t10 + 56U);
	t70 = *((char**)t69);
	t71 = *((int*)t70);
	t69 = (t3 + 0U);
	t72 = *((int*)t69);
	t73 = (t3 + 8U);
	t74 = *((int*)t73);
	t75 = (t71 - t72);
	t76 = (t75 * t74);
	t77 = (t3 + 4U);
	t78 = *((int*)t77);
	xsi_vhdl_check_range_of_index(t72, t78, t74, t71);
	t79                    = (1U * t76);
	t80                    = (0 + t79);
	t81                    = (t2 + t80);
	t82                    = *((unsigned char*)t81);
	t83                    = (t82 == (unsigned char)3);
	t84                    = (t28 + 56U);
	t85                    = *((char**)t84);
	t84                    = (t85 + 0);
	*((unsigned char*)t84) = t83;
	goto LAB7;

LAB10:
	t8  = (t3 + 0U);
	t46 = *((int*)t8);
	t12 = (t3 + 8U);
	t49 = *((int*)t12);
	t56 = (t43 - t46);
	t47 = (t56 * t49);
	t14 = (t3 + 4U);
	t57 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t46, t57, t49, t43);
	t50                    = (1U * t47);
	t51                    = (0 + t50);
	t15                    = (t2 + t51);
	t35                    = *((unsigned char*)t15);
	t38                    = (t35 == (unsigned char)2);
	t17                    = (t16 + 56U);
	t18                    = *((char**)t17);
	t17                    = (t18 + 0);
	*((unsigned char*)t17) = t38;
	t8                     = (t5 + 0U);
	t9                     = *((int*)t8);
	t11                    = (t5 + 8U);
	t42                    = *((int*)t11);
	t46                    = (t43 - t9);
	t47                    = (t46 * t42);
	t12                    = (t5 + 4U);
	t49                    = *((int*)t12);
	xsi_vhdl_check_range_of_index(t9, t49, t42, t43);
	t50                    = (1U * t47);
	t51                    = (0 + t50);
	t14                    = (t4 + t51);
	t35                    = *((unsigned char*)t14);
	t38                    = (t35 == (unsigned char)3);
	t15                    = (t22 + 56U);
	t17                    = *((char**)t15);
	t15                    = (t17 + 0);
	*((unsigned char*)t15) = t38;
	t8                     = (t16 + 56U);
	t11                    = *((char**)t8);
	t67                    = *((unsigned char*)t11);
	if(t67 == 1)
		goto LAB19;

LAB20:
	t53 = (unsigned char)0;

LAB21:
	if(t53 == 1)
		goto LAB16;

LAB17:
	t8  = (t16 + 56U);
	t14 = *((char**)t8);
	t83 = *((unsigned char*)t14);
	if(t83 == 1)
		goto LAB22;

LAB23:
	t82 = (unsigned char)0;

LAB24:
	t38 = t82;

LAB18:
	if(t38 == 1)
		goto LAB13;

LAB14:
	t8  = (t22 + 56U);
	t17 = *((char**)t8);
	t88 = *((unsigned char*)t17);
	if(t88 == 1)
		goto LAB25;

LAB26:
	t87 = (unsigned char)0;

LAB27:
	t35 = t87;

LAB15:
	t8                    = (t28 + 56U);
	t20                   = *((char**)t8);
	t8                    = (t20 + 0);
	*((unsigned char*)t8) = t35;

LAB11:
	if(t43 == t45)
		goto LAB12;

LAB28:
	t9  = (t43 + 1);
	t43 = t9;
	goto LAB9;

LAB13:
	t35 = (unsigned char)1;
	goto LAB15;

LAB16:
	t38 = (unsigned char)1;
	goto LAB18;

LAB19:
	t8  = (t22 + 56U);
	t12 = *((char**)t8);
	t68 = *((unsigned char*)t12);
	t53 = t68;
	goto LAB21;

LAB22:
	t8  = (t28 + 56U);
	t15 = *((char**)t8);
	t86 = *((unsigned char*)t15);
	t82 = t86;
	goto LAB24;

LAB25:
	t8  = (t28 + 56U);
	t18 = *((char**)t8);
	t89 = *((unsigned char*)t18);
	t87 = t89;
	goto LAB27;

LAB29:;
}

unsigned char ieee_p_3499444699_sub_298816126_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[488];
	char          t7[40];
	char          t13[8];
	char          t19[8];
	char          t25[8];
	char          t31[8];
	unsigned char t0;
	char*         t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t32;
	char*         t33;
	char*         t34;
	unsigned char t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	int           t43;
	char*         t44;
	int           t45;
	int           t46;
	unsigned int  t47;
	char*         t48;
	int           t49;
	unsigned int  t50;
	unsigned int  t51;
	char*         t52;
	unsigned char t53;
	char*         t54;
	char*         t55;
	int           t56;
	int           t57;
	char*         t58;
	int           t59;
	int           t60;
	unsigned int  t61;
	char*         t62;
	int           t63;
	unsigned int  t64;
	unsigned int  t65;
	char*         t66;
	unsigned char t67;
	unsigned char t68;
	char*         t69;
	char*         t70;
	int           t71;
	int           t72;
	char*         t73;
	int           t74;
	int           t75;
	unsigned int  t76;
	char*         t77;
	int           t78;
	unsigned int  t79;
	unsigned int  t80;
	char*         t81;
	unsigned char t82;
	unsigned char t83;
	char*         t84;
	char*         t85;
	unsigned char t86;
	unsigned char t87;
	unsigned char t88;
	unsigned char t89;

LAB0:
	t8                    = (t3 + 0U);
	t9                    = *((int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 124U);
	t17                   = ((STD_STANDARD) + 0);
	t18                   = (t16 + 88U);
	*((char**)t18)        = t17;
	t20                   = (t16 + 56U);
	*((char**)t20)        = t19;
	xsi_type_set_default_value(t17, t19, 0);
	t21                   = (t16 + 80U);
	*((unsigned int*)t21) = 1U;
	t22                   = (t6 + 244U);
	t23                   = ((STD_STANDARD) + 0);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 1U;
	t28                   = (t6 + 364U);
	t29                   = ((STD_STANDARD) + 0);
	t30                   = (t28 + 88U);
	*((char**)t30)        = t29;
	t32                   = (t28 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, 0);
	t33                   = (t28 + 80U);
	*((unsigned int*)t33) = 1U;
	t34                   = (t7 + 4U);
	t35                   = (t2 != 0);
	if(t35 == 1)
		goto LAB3;

LAB2:
	t36            = (t7 + 12U);
	*((char**)t36) = t3;
	t37            = (t7 + 20U);
	t38            = (t4 != 0);
	if(t38 == 1)
		goto LAB5;

LAB4:
	t39            = (t7 + 28U);
	*((char**)t39) = t5;
	t40            = (t10 + 56U);
	t41            = *((char**)t40);
	t42            = *((int*)t41);
	t40            = (t3 + 0U);
	t43            = *((int*)t40);
	t44            = (t3 + 8U);
	t45            = *((int*)t44);
	t46            = (t42 - t43);
	t47            = (t46 * t45);
	t48            = (t3 + 4U);
	t49            = *((int*)t48);
	xsi_vhdl_check_range_of_index(t43, t49, t45, t42);
	t50 = (1U * t47);
	t51 = (0 + t50);
	t52 = (t2 + t51);
	t53 = *((unsigned char*)t52);
	t54 = (t10 + 56U);
	t55 = *((char**)t54);
	t56 = *((int*)t55);
	t54 = (t5 + 0U);
	t57 = *((int*)t54);
	t58 = (t5 + 8U);
	t59 = *((int*)t58);
	t60 = (t56 - t57);
	t61 = (t60 * t59);
	t62 = (t5 + 4U);
	t63 = *((int*)t62);
	xsi_vhdl_check_range_of_index(t57, t63, t59, t56);
	t64 = (1U * t61);
	t65 = (0 + t64);
	t66 = (t4 + t65);
	t67 = *((unsigned char*)t66);
	t68 = (t53 != t67);
	if(t68 != 0)
		goto LAB6;

LAB8:
	t8                    = (t28 + 56U);
	t11                   = *((char**)t8);
	t8                    = (t11 + 0);
	*((unsigned char*)t8) = (unsigned char)1;
	t8                    = (t10 + 56U);
	t11                   = *((char**)t8);
	t9                    = *((int*)t11);
	t42                   = (t9 - 1);
	t43                   = 0;
	t45                   = t42;

LAB9:
	if(t43 <= t45)
		goto LAB10;

LAB12:
LAB7:
	t8  = (t28 + 56U);
	t11 = *((char**)t8);
	t35 = *((unsigned char*)t11);
	t0  = t35;

LAB1:
	return t0;
LAB3:
	*((char**)t34) = t2;
	goto LAB2;

LAB5:
	*((char**)t37) = t4;
	goto LAB4;

LAB6:
	t69 = (t10 + 56U);
	t70 = *((char**)t69);
	t71 = *((int*)t70);
	t69 = (t3 + 0U);
	t72 = *((int*)t69);
	t73 = (t3 + 8U);
	t74 = *((int*)t73);
	t75 = (t71 - t72);
	t76 = (t75 * t74);
	t77 = (t3 + 4U);
	t78 = *((int*)t77);
	xsi_vhdl_check_range_of_index(t72, t78, t74, t71);
	t79                    = (1U * t76);
	t80                    = (0 + t79);
	t81                    = (t2 + t80);
	t82                    = *((unsigned char*)t81);
	t83                    = (t82 == (unsigned char)3);
	t84                    = (t28 + 56U);
	t85                    = *((char**)t84);
	t84                    = (t85 + 0);
	*((unsigned char*)t84) = t83;
	goto LAB7;

LAB10:
	t8  = (t3 + 0U);
	t46 = *((int*)t8);
	t12 = (t3 + 8U);
	t49 = *((int*)t12);
	t56 = (t43 - t46);
	t47 = (t56 * t49);
	t14 = (t3 + 4U);
	t57 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t46, t57, t49, t43);
	t50                    = (1U * t47);
	t51                    = (0 + t50);
	t15                    = (t2 + t51);
	t35                    = *((unsigned char*)t15);
	t38                    = (t35 == (unsigned char)2);
	t17                    = (t16 + 56U);
	t18                    = *((char**)t17);
	t17                    = (t18 + 0);
	*((unsigned char*)t17) = t38;
	t8                     = (t5 + 0U);
	t9                     = *((int*)t8);
	t11                    = (t5 + 8U);
	t42                    = *((int*)t11);
	t46                    = (t43 - t9);
	t47                    = (t46 * t42);
	t12                    = (t5 + 4U);
	t49                    = *((int*)t12);
	xsi_vhdl_check_range_of_index(t9, t49, t42, t43);
	t50                    = (1U * t47);
	t51                    = (0 + t50);
	t14                    = (t4 + t51);
	t35                    = *((unsigned char*)t14);
	t38                    = (t35 == (unsigned char)3);
	t15                    = (t22 + 56U);
	t17                    = *((char**)t15);
	t15                    = (t17 + 0);
	*((unsigned char*)t15) = t38;
	t8                     = (t16 + 56U);
	t11                    = *((char**)t8);
	t67                    = *((unsigned char*)t11);
	if(t67 == 1)
		goto LAB19;

LAB20:
	t53 = (unsigned char)0;

LAB21:
	if(t53 == 1)
		goto LAB16;

LAB17:
	t8  = (t16 + 56U);
	t14 = *((char**)t8);
	t83 = *((unsigned char*)t14);
	if(t83 == 1)
		goto LAB22;

LAB23:
	t82 = (unsigned char)0;

LAB24:
	t38 = t82;

LAB18:
	if(t38 == 1)
		goto LAB13;

LAB14:
	t8  = (t22 + 56U);
	t17 = *((char**)t8);
	t88 = *((unsigned char*)t17);
	if(t88 == 1)
		goto LAB25;

LAB26:
	t87 = (unsigned char)0;

LAB27:
	t35 = t87;

LAB15:
	t8                    = (t28 + 56U);
	t20                   = *((char**)t8);
	t8                    = (t20 + 0);
	*((unsigned char*)t8) = t35;

LAB11:
	if(t43 == t45)
		goto LAB12;

LAB28:
	t9  = (t43 + 1);
	t43 = t9;
	goto LAB9;

LAB13:
	t35 = (unsigned char)1;
	goto LAB15;

LAB16:
	t38 = (unsigned char)1;
	goto LAB18;

LAB19:
	t8  = (t22 + 56U);
	t12 = *((char**)t8);
	t68 = *((unsigned char*)t12);
	t53 = t68;
	goto LAB21;

LAB22:
	t8  = (t28 + 56U);
	t15 = *((char**)t8);
	t86 = *((unsigned char*)t15);
	t82 = t86;
	goto LAB24;

LAB25:
	t8  = (t28 + 56U);
	t18 = *((char**)t8);
	t89 = *((unsigned char*)t18);
	t87 = t89;
	goto LAB27;

LAB29:;
}

unsigned char ieee_p_3499444699_sub_2519015672_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[488];
	char          t7[40];
	char          t13[8];
	char          t19[8];
	char          t25[8];
	char          t31[8];
	unsigned char t0;
	char*         t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t32;
	char*         t33;
	char*         t34;
	unsigned char t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	int           t43;
	int           t44;
	int           t45;
	int           t46;
	unsigned int  t47;
	int           t48;
	unsigned int  t49;
	unsigned int  t50;
	unsigned char t51;
	unsigned char t52;
	unsigned char t53;
	unsigned char t54;
	unsigned char t55;
	unsigned char t56;
	unsigned char t57;
	unsigned char t58;
	unsigned char t59;

LAB0:
	t8                    = (t3 + 0U);
	t9                    = *((int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 124U);
	t17                   = ((STD_STANDARD) + 0);
	t18                   = (t16 + 88U);
	*((char**)t18)        = t17;
	t20                   = (t16 + 56U);
	*((char**)t20)        = t19;
	xsi_type_set_default_value(t17, t19, 0);
	t21                   = (t16 + 80U);
	*((unsigned int*)t21) = 1U;
	t22                   = (t6 + 244U);
	t23                   = ((STD_STANDARD) + 0);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 1U;
	t28                   = (t6 + 364U);
	t29                   = ((STD_STANDARD) + 0);
	t30                   = (t28 + 88U);
	*((char**)t30)        = t29;
	t32                   = (t28 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, 0);
	t33                   = (t28 + 80U);
	*((unsigned int*)t33) = 1U;
	t34                   = (t7 + 4U);
	t35                   = (t2 != 0);
	if(t35 == 1)
		goto LAB3;

LAB2:
	t36            = (t7 + 12U);
	*((char**)t36) = t3;
	t37            = (t7 + 20U);
	t38            = (t4 != 0);
	if(t38 == 1)
		goto LAB5;

LAB4:
	t39                    = (t7 + 28U);
	*((char**)t39)         = t5;
	t40                    = (t28 + 56U);
	t41                    = *((char**)t40);
	t40                    = (t41 + 0);
	*((unsigned char*)t40) = (unsigned char)0;
	t8                     = (t10 + 56U);
	t11                    = *((char**)t8);
	t9                     = *((int*)t11);
	t42                    = 0;
	t43                    = t9;

LAB6:
	if(t42 <= t43)
		goto LAB7;

LAB9:
	t8  = (t28 + 56U);
	t11 = *((char**)t8);
	t35 = *((unsigned char*)t11);
	t0  = t35;

LAB1:
	return t0;
LAB3:
	*((char**)t34) = t2;
	goto LAB2;

LAB5:
	*((char**)t37) = t4;
	goto LAB4;

LAB7:
	t8  = (t3 + 0U);
	t44 = *((int*)t8);
	t12 = (t3 + 8U);
	t45 = *((int*)t12);
	t46 = (t42 - t44);
	t47 = (t46 * t45);
	t14 = (t3 + 4U);
	t48 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t44, t48, t45, t42);
	t49                    = (1U * t47);
	t50                    = (0 + t49);
	t15                    = (t2 + t50);
	t35                    = *((unsigned char*)t15);
	t38                    = (t35 == (unsigned char)2);
	t17                    = (t16 + 56U);
	t18                    = *((char**)t17);
	t17                    = (t18 + 0);
	*((unsigned char*)t17) = t38;
	t8                     = (t5 + 0U);
	t9                     = *((int*)t8);
	t11                    = (t5 + 8U);
	t44                    = *((int*)t11);
	t45                    = (t42 - t9);
	t47                    = (t45 * t44);
	t12                    = (t5 + 4U);
	t46                    = *((int*)t12);
	xsi_vhdl_check_range_of_index(t9, t46, t44, t42);
	t49                    = (1U * t47);
	t50                    = (0 + t49);
	t14                    = (t4 + t50);
	t35                    = *((unsigned char*)t14);
	t38                    = (t35 == (unsigned char)3);
	t15                    = (t22 + 56U);
	t17                    = *((char**)t15);
	t15                    = (t17 + 0);
	*((unsigned char*)t15) = t38;
	t8                     = (t16 + 56U);
	t11                    = *((char**)t8);
	t52                    = *((unsigned char*)t11);
	if(t52 == 1)
		goto LAB16;

LAB17:
	t51 = (unsigned char)0;

LAB18:
	if(t51 == 1)
		goto LAB13;

LAB14:
	t8  = (t16 + 56U);
	t14 = *((char**)t8);
	t55 = *((unsigned char*)t14);
	if(t55 == 1)
		goto LAB19;

LAB20:
	t54 = (unsigned char)0;

LAB21:
	t38 = t54;

LAB15:
	if(t38 == 1)
		goto LAB10;

LAB11:
	t8  = (t22 + 56U);
	t17 = *((char**)t8);
	t58 = *((unsigned char*)t17);
	if(t58 == 1)
		goto LAB22;

LAB23:
	t57 = (unsigned char)0;

LAB24:
	t35 = t57;

LAB12:
	t8                    = (t28 + 56U);
	t20                   = *((char**)t8);
	t8                    = (t20 + 0);
	*((unsigned char*)t8) = t35;

LAB8:
	if(t42 == t43)
		goto LAB9;

LAB25:
	t9  = (t42 + 1);
	t42 = t9;
	goto LAB6;

LAB10:
	t35 = (unsigned char)1;
	goto LAB12;

LAB13:
	t38 = (unsigned char)1;
	goto LAB15;

LAB16:
	t8  = (t22 + 56U);
	t12 = *((char**)t8);
	t53 = *((unsigned char*)t12);
	t51 = t53;
	goto LAB18;

LAB19:
	t8  = (t28 + 56U);
	t15 = *((char**)t8);
	t56 = *((unsigned char*)t15);
	t54 = t56;
	goto LAB21;

LAB22:
	t8  = (t28 + 56U);
	t18 = *((char**)t8);
	t59 = *((unsigned char*)t18);
	t57 = t59;
	goto LAB24;

LAB26:;
}

unsigned char ieee_p_3499444699_sub_2764363535_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[488];
	char          t7[40];
	char          t13[8];
	char          t19[8];
	char          t25[8];
	char          t31[8];
	unsigned char t0;
	char*         t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t32;
	char*         t33;
	char*         t34;
	unsigned char t35;
	char*         t36;
	char*         t37;
	unsigned char t38;
	char*         t39;
	char*         t40;
	char*         t41;
	int           t42;
	int           t43;
	int           t44;
	int           t45;
	int           t46;
	unsigned int  t47;
	int           t48;
	unsigned int  t49;
	unsigned int  t50;
	unsigned char t51;
	unsigned char t52;
	unsigned char t53;
	unsigned char t54;
	unsigned char t55;
	unsigned char t56;
	unsigned char t57;
	unsigned char t58;
	unsigned char t59;

LAB0:
	t8                    = (t3 + 0U);
	t9                    = *((int*)t8);
	t10                   = (t6 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 124U);
	t17                   = ((STD_STANDARD) + 0);
	t18                   = (t16 + 88U);
	*((char**)t18)        = t17;
	t20                   = (t16 + 56U);
	*((char**)t20)        = t19;
	xsi_type_set_default_value(t17, t19, 0);
	t21                   = (t16 + 80U);
	*((unsigned int*)t21) = 1U;
	t22                   = (t6 + 244U);
	t23                   = ((STD_STANDARD) + 0);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 1U;
	t28                   = (t6 + 364U);
	t29                   = ((STD_STANDARD) + 0);
	t30                   = (t28 + 88U);
	*((char**)t30)        = t29;
	t32                   = (t28 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, 0);
	t33                   = (t28 + 80U);
	*((unsigned int*)t33) = 1U;
	t34                   = (t7 + 4U);
	t35                   = (t2 != 0);
	if(t35 == 1)
		goto LAB3;

LAB2:
	t36            = (t7 + 12U);
	*((char**)t36) = t3;
	t37            = (t7 + 20U);
	t38            = (t4 != 0);
	if(t38 == 1)
		goto LAB5;

LAB4:
	t39                    = (t7 + 28U);
	*((char**)t39)         = t5;
	t40                    = (t28 + 56U);
	t41                    = *((char**)t40);
	t40                    = (t41 + 0);
	*((unsigned char*)t40) = (unsigned char)1;
	t8                     = (t10 + 56U);
	t11                    = *((char**)t8);
	t9                     = *((int*)t11);
	t42                    = 0;
	t43                    = t9;

LAB6:
	if(t42 <= t43)
		goto LAB7;

LAB9:
	t8  = (t28 + 56U);
	t11 = *((char**)t8);
	t35 = *((unsigned char*)t11);
	t0  = t35;

LAB1:
	return t0;
LAB3:
	*((char**)t34) = t2;
	goto LAB2;

LAB5:
	*((char**)t37) = t4;
	goto LAB4;

LAB7:
	t8  = (t3 + 0U);
	t44 = *((int*)t8);
	t12 = (t3 + 8U);
	t45 = *((int*)t12);
	t46 = (t42 - t44);
	t47 = (t46 * t45);
	t14 = (t3 + 4U);
	t48 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t44, t48, t45, t42);
	t49                    = (1U * t47);
	t50                    = (0 + t49);
	t15                    = (t2 + t50);
	t35                    = *((unsigned char*)t15);
	t38                    = (t35 == (unsigned char)2);
	t17                    = (t16 + 56U);
	t18                    = *((char**)t17);
	t17                    = (t18 + 0);
	*((unsigned char*)t17) = t38;
	t8                     = (t5 + 0U);
	t9                     = *((int*)t8);
	t11                    = (t5 + 8U);
	t44                    = *((int*)t11);
	t45                    = (t42 - t9);
	t47                    = (t45 * t44);
	t12                    = (t5 + 4U);
	t46                    = *((int*)t12);
	xsi_vhdl_check_range_of_index(t9, t46, t44, t42);
	t49                    = (1U * t47);
	t50                    = (0 + t49);
	t14                    = (t4 + t50);
	t35                    = *((unsigned char*)t14);
	t38                    = (t35 == (unsigned char)3);
	t15                    = (t22 + 56U);
	t17                    = *((char**)t15);
	t15                    = (t17 + 0);
	*((unsigned char*)t15) = t38;
	t8                     = (t16 + 56U);
	t11                    = *((char**)t8);
	t52                    = *((unsigned char*)t11);
	if(t52 == 1)
		goto LAB16;

LAB17:
	t51 = (unsigned char)0;

LAB18:
	if(t51 == 1)
		goto LAB13;

LAB14:
	t8  = (t16 + 56U);
	t14 = *((char**)t8);
	t55 = *((unsigned char*)t14);
	if(t55 == 1)
		goto LAB19;

LAB20:
	t54 = (unsigned char)0;

LAB21:
	t38 = t54;

LAB15:
	if(t38 == 1)
		goto LAB10;

LAB11:
	t8  = (t22 + 56U);
	t17 = *((char**)t8);
	t58 = *((unsigned char*)t17);
	if(t58 == 1)
		goto LAB22;

LAB23:
	t57 = (unsigned char)0;

LAB24:
	t35 = t57;

LAB12:
	t8                    = (t28 + 56U);
	t20                   = *((char**)t8);
	t8                    = (t20 + 0);
	*((unsigned char*)t8) = t35;

LAB8:
	if(t42 == t43)
		goto LAB9;

LAB25:
	t9  = (t42 + 1);
	t42 = t9;
	goto LAB6;

LAB10:
	t35 = (unsigned char)1;
	goto LAB12;

LAB13:
	t38 = (unsigned char)1;
	goto LAB15;

LAB16:
	t8  = (t22 + 56U);
	t12 = *((char**)t8);
	t53 = *((unsigned char*)t12);
	t51 = t53;
	goto LAB18;

LAB19:
	t8  = (t28 + 56U);
	t15 = *((char**)t8);
	t56 = *((unsigned char*)t15);
	t54 = t56;
	goto LAB21;

LAB22:
	t8  = (t28 + 56U);
	t18 = *((char**)t8);
	t59 = *((unsigned char*)t18);
	t57 = t59;
	goto LAB24;

LAB26:;
}

unsigned char ieee_p_3499444699_sub_2591093089_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t29, t4, t5, t32);
	t33            = ieee_std_logic_arith_unsigned_is_less(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_2145572180_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_signed_signext(t1, t29, t4, t5, t32);
	t33            = ieee_std_logic_arith_signed_is_less(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1670046078_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t5 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t10, ((t12)));
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_zeroext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_signext(t1, t30, t4, t5, t33);
	t34            = ieee_std_logic_arith_signed_is_less(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1992877366_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t5 + 12U);
	t11                   = *((unsigned int*)t10);
	t12                   = (t11 + 1);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), t12);
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_signext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_zeroext(t1, t30, t4, t5, t33);
	t34            = ieee_std_logic_arith_signed_is_less(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_2368579451_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	t17                   = (t2 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 12U);
	*((char**)t18) = t3;
	t19            = (t6 + 20U);
	*((int*)t19)   = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t2, t3, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_integer(t1, t24, t4, t27);
	t28            = ieee_std_logic_arith_signed_is_less(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2235775063_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	*((int*)t16)          = t2;
	t17                   = (t6 + 8U);
	t18                   = (t3 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t6 + 16U);
	*((char**)t19) = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_integer(t1, t20, t2, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_zeroext(t1, t24, t3, t4, t27);
	t28            = ieee_std_logic_arith_signed_is_less(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_1770363729_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned char t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	t16                   = (t2 != 0);
	if(t16 == 1)
		goto LAB3;

LAB2:
	t17            = (t6 + 12U);
	*((char**)t17) = t3;
	t18            = (t6 + 20U);
	*((int*)t18)   = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_signext(t1, t19, t2, t3, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_integer(t1, t23, t4, t26);
	t27            = ieee_std_logic_arith_signed_is_less(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t15) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2388469877_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	*((int*)t15)          = t2;
	t16                   = (t6 + 8U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 16U);
	*((char**)t18) = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_integer(t1, t19, t2, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t23, t3, t4, t26);
	t27            = ieee_std_logic_arith_signed_is_less(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3950470366_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t29, t4, t5, t32);
	t33 = ieee_std_logic_arith_unsigned_is_less_or_equal(t1, t26, t25, t30, t29);
	t0  = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3504949457_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_signed_signext(t1, t29, t4, t5, t32);
	t33            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3029423355_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t5 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t10, ((t12)));
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_zeroext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_signext(t1, t30, t4, t5, t33);
	t34            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3352254643_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t5 + 12U);
	t11                   = *((unsigned int*)t10);
	t12                   = (t11 + 1);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), t12);
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_signext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_zeroext(t1, t30, t4, t5, t33);
	t34            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3727956728_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	t17                   = (t2 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 12U);
	*((char**)t18) = t3;
	t19            = (t6 + 20U);
	*((int*)t19)   = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t2, t3, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_integer(t1, t24, t4, t27);
	t28            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3595152340_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	*((int*)t16)          = t2;
	t17                   = (t6 + 8U);
	t18                   = (t3 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t6 + 16U);
	*((char**)t19) = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_integer(t1, t20, t2, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_zeroext(t1, t24, t3, t4, t27);
	t28            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3129741006_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned char t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	t16                   = (t2 != 0);
	if(t16 == 1)
		goto LAB3;

LAB2:
	t17            = (t6 + 12U);
	*((char**)t17) = t3;
	t18            = (t6 + 20U);
	*((int*)t18)   = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_signext(t1, t19, t2, t3, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_integer(t1, t23, t4, t26);
	t27            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t15) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3747847154_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	*((int*)t15)          = t2;
	t16                   = (t6 + 8U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 16U);
	*((char**)t18) = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_integer(t1, t19, t2, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t23, t3, t4, t26);
	t27            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2591164963_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t4, t5, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t29, t2, t3, t32);
	t33            = ieee_std_logic_arith_unsigned_is_less(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_2145644054_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_signed_signext(t1, t29, t2, t3, t32);
	t33            = ieee_std_logic_arith_signed_is_less(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1670117952_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t5 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t10, ((t12)));
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_signext(t1, t26, t4, t5, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_zeroext(t1, t30, t2, t3, t33);
	t34            = ieee_std_logic_arith_signed_is_less(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1992949240_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t5 + 12U);
	t11                   = *((unsigned int*)t10);
	t12                   = (t11 + 1);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), t12);
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_zeroext(t1, t26, t4, t5, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_signext(t1, t30, t2, t3, t33);
	t34            = ieee_std_logic_arith_signed_is_less(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_2368651325_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	t17                   = (t2 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 12U);
	*((char**)t18) = t3;
	t19            = (t6 + 20U);
	*((int*)t19)   = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_integer(t1, t20, t4, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_zeroext(t1, t24, t2, t3, t27);
	t28            = ieee_std_logic_arith_signed_is_less(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2235846937_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	*((int*)t16)          = t2;
	t17                   = (t6 + 8U);
	t18                   = (t3 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t6 + 16U);
	*((char**)t19) = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t3, t4, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_integer(t1, t24, t2, t27);
	t28            = ieee_std_logic_arith_signed_is_less(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_1770435603_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned char t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	t16                   = (t2 != 0);
	if(t16 == 1)
		goto LAB3;

LAB2:
	t17            = (t6 + 12U);
	*((char**)t17) = t3;
	t18            = (t6 + 20U);
	*((int*)t18)   = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_integer(t1, t19, t4, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t23, t2, t3, t26);
	t27            = ieee_std_logic_arith_signed_is_less(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t15) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2388541751_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	*((int*)t15)          = t2;
	t16                   = (t6 + 8U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 16U);
	*((char**)t18) = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_signext(t1, t19, t3, t4, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_integer(t1, t23, t2, t26);
	t27            = ieee_std_logic_arith_signed_is_less(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3952842208_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t4, t5, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t29, t2, t3, t32);
	t33 = ieee_std_logic_arith_unsigned_is_less_or_equal(t1, t26, t25, t30, t29);
	t0  = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3507321299_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t4, t5, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_signed_signext(t1, t29, t2, t3, t32);
	t33            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3031795197_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t5 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t10, ((t12)));
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_signext(t1, t26, t4, t5, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_zeroext(t1, t30, t2, t3, t33);
	t34            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3354626485_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t5 + 12U);
	t11                   = *((unsigned int*)t10);
	t12                   = (t11 + 1);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), t12);
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_zeroext(t1, t26, t4, t5, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_signext(t1, t30, t2, t3, t33);
	t34            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3730328570_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	t17                   = (t2 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 12U);
	*((char**)t18) = t3;
	t19            = (t6 + 20U);
	*((int*)t19)   = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_integer(t1, t20, t4, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_zeroext(t1, t24, t2, t3, t27);
	t28            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3597524182_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	*((int*)t16)          = t2;
	t17                   = (t6 + 8U);
	t18                   = (t3 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t6 + 16U);
	*((char**)t19) = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t3, t4, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_integer(t1, t24, t2, t27);
	t28            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3132112848_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned char t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	t16                   = (t2 != 0);
	if(t16 == 1)
		goto LAB3;

LAB2:
	t17            = (t6 + 12U);
	*((char**)t17) = t3;
	t18            = (t6 + 20U);
	*((int*)t18)   = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_integer(t1, t19, t4, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t23, t2, t3, t26);
	t27            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t15) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3750218996_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	*((int*)t15)          = t2;
	t16                   = (t6 + 8U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 16U);
	*((char**)t18) = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_signext(t1, t19, t3, t4, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_integer(t1, t23, t2, t26);
	t27            = ieee_std_logic_arith_signed_is_less_or_equal(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3375251984_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t11[8];
	unsigned char t0;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t12;
	char*         t13;
	char*         t14;
	unsigned char t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t20;
	int           t21;
	char*         t22;
	int           t23;
	char*         t24;
	int           t25;
	int           t26;
	int           t27;
	int           t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	int           t34;
	unsigned int  t35;
	unsigned int  t36;
	unsigned int  t37;
	char*         t38;
	unsigned char t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	char*         t46;
	int           t47;
	unsigned int  t48;
	unsigned int  t49;
	char*         t50;
	unsigned char t51;
	unsigned char t52;
	char*         t53;
	char*         t54;

LAB0:
	t8             = (t6 + 4U);
	t9             = ((STD_STANDARD) + 0);
	t10            = (t8 + 88U);
	*((char**)t10) = t9;
	t12            = (t8 + 56U);
	*((char**)t12) = t11;
	xsi_type_set_default_value(t9, t11, 0);
	t13                   = (t8 + 80U);
	*((unsigned int*)t13) = 1U;
	t14                   = (t7 + 4U);
	t15                   = (t2 != 0);
	if(t15 == 1)
		goto LAB3;

LAB2:
	t16            = (t7 + 12U);
	*((char**)t16) = t3;
	t17            = (t7 + 20U);
	t18            = (t4 != 0);
	if(t18 == 1)
		goto LAB5;

LAB4:
	t19            = (t7 + 28U);
	*((char**)t19) = t5;
	t20            = (t3 + 8U);
	t21            = *((int*)t20);
	t22            = (t3 + 4U);
	t23            = *((int*)t22);
	t24            = (t3 + 0U);
	t25            = *((int*)t24);
	t26            = t25;
	t27            = t23;

LAB6:
	t28 = (t27 * t21);
	t29 = (t26 * t21);
	if(t29 <= t28)
		goto LAB7;

LAB9:
	t9                    = (t8 + 56U);
	t10                   = *((char**)t9);
	t9                    = (t10 + 0);
	*((unsigned char*)t9) = (unsigned char)1;
	t9                    = (t8 + 56U);
	t10                   = *((char**)t9);
	t15                   = *((unsigned char*)t10);
	t0                    = t15;

LAB1:
	return t0;
LAB3:
	*((char**)t14) = t2;
	goto LAB2;

LAB5:
	*((char**)t17) = t4;
	goto LAB4;

LAB7:
	t30 = (t3 + 0U);
	t31 = *((int*)t30);
	t32 = (t3 + 8U);
	t33 = *((int*)t32);
	t34 = (t26 - t31);
	t35 = (t34 * t33);
	t36 = (1U * t35);
	t37 = (0 + t36);
	t38 = (t2 + t37);
	t39 = *((unsigned char*)t38);
	t40 = (t5 + 0U);
	t41 = *((int*)t40);
	t42 = (t5 + 8U);
	t43 = *((int*)t42);
	t44 = (t26 - t41);
	t45 = (t44 * t43);
	t46 = (t5 + 4U);
	t47 = *((int*)t46);
	xsi_vhdl_check_range_of_index(t41, t47, t43, t26);
	t48 = (1U * t45);
	t49 = (0 + t48);
	t50 = (t4 + t49);
	t51 = *((unsigned char*)t50);
	t52 = (t39 != t51);
	if(t52 != 0)
		goto LAB10;

LAB12:
LAB11:
LAB8:
	if(t26 == t27)
		goto LAB9;

LAB14:
	t23 = (t26 + t21);
	t26 = t23;
	goto LAB6;

LAB10:
	t53                    = (t8 + 56U);
	t54                    = *((char**)t53);
	t53                    = (t54 + 0);
	*((unsigned char*)t53) = (unsigned char)0;
	t9                     = (t8 + 56U);
	t10                    = *((char**)t9);
	t15                    = *((unsigned char*)t10);
	t0                     = t15;
	goto LAB1;

LAB13:
	goto LAB11;

LAB15:;
}

unsigned char ieee_p_3499444699_sub_3385499474_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t11[8];
	unsigned char t0;
	char*         t8;
	char*         t9;
	char*         t10;
	char*         t12;
	char*         t13;
	char*         t14;
	unsigned char t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t20;
	int           t21;
	char*         t22;
	int           t23;
	char*         t24;
	int           t25;
	int           t26;
	int           t27;
	int           t28;
	int           t29;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	int           t34;
	unsigned int  t35;
	unsigned int  t36;
	unsigned int  t37;
	char*         t38;
	unsigned char t39;
	char*         t40;
	int           t41;
	char*         t42;
	int           t43;
	int           t44;
	unsigned int  t45;
	char*         t46;
	int           t47;
	unsigned int  t48;
	unsigned int  t49;
	char*         t50;
	unsigned char t51;
	unsigned char t52;
	char*         t53;
	char*         t54;

LAB0:
	t8             = (t6 + 4U);
	t9             = ((STD_STANDARD) + 0);
	t10            = (t8 + 88U);
	*((char**)t10) = t9;
	t12            = (t8 + 56U);
	*((char**)t12) = t11;
	xsi_type_set_default_value(t9, t11, 0);
	t13                   = (t8 + 80U);
	*((unsigned int*)t13) = 1U;
	t14                   = (t7 + 4U);
	t15                   = (t2 != 0);
	if(t15 == 1)
		goto LAB3;

LAB2:
	t16            = (t7 + 12U);
	*((char**)t16) = t3;
	t17            = (t7 + 20U);
	t18            = (t4 != 0);
	if(t18 == 1)
		goto LAB5;

LAB4:
	t19            = (t7 + 28U);
	*((char**)t19) = t5;
	t20            = (t3 + 8U);
	t21            = *((int*)t20);
	t22            = (t3 + 4U);
	t23            = *((int*)t22);
	t24            = (t3 + 0U);
	t25            = *((int*)t24);
	t26            = t25;
	t27            = t23;

LAB6:
	t28 = (t27 * t21);
	t29 = (t26 * t21);
	if(t29 <= t28)
		goto LAB7;

LAB9:
	t9                    = (t8 + 56U);
	t10                   = *((char**)t9);
	t9                    = (t10 + 0);
	*((unsigned char*)t9) = (unsigned char)0;
	t9                    = (t8 + 56U);
	t10                   = *((char**)t9);
	t15                   = *((unsigned char*)t10);
	t0                    = t15;

LAB1:
	return t0;
LAB3:
	*((char**)t14) = t2;
	goto LAB2;

LAB5:
	*((char**)t17) = t4;
	goto LAB4;

LAB7:
	t30 = (t3 + 0U);
	t31 = *((int*)t30);
	t32 = (t3 + 8U);
	t33 = *((int*)t32);
	t34 = (t26 - t31);
	t35 = (t34 * t33);
	t36 = (1U * t35);
	t37 = (0 + t36);
	t38 = (t2 + t37);
	t39 = *((unsigned char*)t38);
	t40 = (t5 + 0U);
	t41 = *((int*)t40);
	t42 = (t5 + 8U);
	t43 = *((int*)t42);
	t44 = (t26 - t41);
	t45 = (t44 * t43);
	t46 = (t5 + 4U);
	t47 = *((int*)t46);
	xsi_vhdl_check_range_of_index(t41, t47, t43, t26);
	t48 = (1U * t45);
	t49 = (0 + t48);
	t50 = (t4 + t49);
	t51 = *((unsigned char*)t50);
	t52 = (t39 != t51);
	if(t52 != 0)
		goto LAB10;

LAB12:
LAB11:
LAB8:
	if(t26 == t27)
		goto LAB9;

LAB14:
	t23 = (t26 + t21);
	t26 = t23;
	goto LAB6;

LAB10:
	t53                    = (t8 + 56U);
	t54                    = *((char**)t53);
	t53                    = (t54 + 0);
	*((unsigned char*)t53) = (unsigned char)1;
	t9                     = (t8 + 56U);
	t10                    = *((char**)t9);
	t15                    = *((unsigned char*)t10);
	t0                     = t15;
	goto LAB1;

LAB13:
	goto LAB11;

LAB15:;
}

unsigned char ieee_p_3499444699_sub_2591129026_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t29, t4, t5, t32);
	t33            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_2145608117_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_signed_signext(t1, t29, t4, t5, t32);
	t33            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1670082015_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t5 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t10, ((t12)));
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_zeroext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_signext(t1, t30, t4, t5, t33);
	t34            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_1992913303_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t5 + 12U);
	t11                   = *((unsigned int*)t10);
	t12                   = (t11 + 1);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), t12);
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_signext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_zeroext(t1, t30, t4, t5, t33);
	t34            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	t17                   = (t2 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 12U);
	*((char**)t18) = t3;
	t19            = (t6 + 20U);
	*((int*)t19)   = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t2, t3, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_integer(t1, t24, t4, t27);
	t28            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2235811000_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	*((int*)t16)          = t2;
	t17                   = (t6 + 8U);
	t18                   = (t3 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t6 + 16U);
	*((char**)t19) = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_integer(t1, t20, t2, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_zeroext(t1, t24, t3, t4, t27);
	t28            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_1770399666_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned char t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	t16                   = (t2 != 0);
	if(t16 == 1)
		goto LAB3;

LAB2:
	t17            = (t6 + 12U);
	*((char**)t17) = t3;
	t18            = (t6 + 20U);
	*((int*)t18)   = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_signext(t1, t19, t2, t3, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_integer(t1, t23, t4, t26);
	t27            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t15) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_2388505814_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	*((int*)t15)          = t2;
	t16                   = (t6 + 8U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 16U);
	*((char**)t18) = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_integer(t1, t19, t2, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t23, t3, t4, t26);
	t27            = ieee_p_3499444699_sub_3375251984_3536714472(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3935053393_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_unsigned_zeroext(t1, t29, t4, t5, t32);
	t33            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3489532484_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t16[8];
	char          t25[16];
	char          t29[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t17;
	char*         t18;
	char*         t19;
	unsigned char t20;
	char*         t21;
	char*         t22;
	unsigned char t23;
	char*         t24;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;

LAB0:
	t8             = (t3 + 12U);
	t9             = *((unsigned int*)t8);
	t10            = (t5 + 12U);
	t11            = *((unsigned int*)t10);
	t12            = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), ((t11)));
	t13            = (t6 + 4U);
	t14            = ((STD_STANDARD) + 384);
	t15            = (t13 + 88U);
	*((char**)t15) = t14;
	t17            = (t13 + 56U);
	*((char**)t17) = t16;
	*((int*)t16)   = t12;
	t18            = (t13 + 80U);
	*((unsigned int*)t18) = 4U;
	t19                   = (t7 + 4U);
	t20                   = (t2 != 0);
	if(t20 == 1)
		goto LAB3;

LAB2:
	t21            = (t7 + 12U);
	*((char**)t21) = t3;
	t22            = (t7 + 20U);
	t23            = (t4 != 0);
	if(t23 == 1)
		goto LAB5;

LAB4:
	t24            = (t7 + 28U);
	*((char**)t24) = t5;
	t26            = (t13 + 56U);
	t27            = *((char**)t26);
	t28            = *((int*)t27);
	t26            = ieee_std_logic_arith_conv_signed_signext(t1, t25, t2, t3, t28);
	t30            = (t13 + 56U);
	t31            = *((char**)t30);
	t32            = *((int*)t31);
	t30            = ieee_std_logic_arith_conv_signed_signext(t1, t29, t4, t5, t32);
	t33            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t26, t25, t30, t29);
	t0             = t33;

LAB1:
	return t0;
LAB3:
	*((char**)t19) = t2;
	goto LAB2;

LAB5:
	*((char**)t22) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3014006382_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	char*         t11;
	unsigned int  t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t9 + 1);
	t11                   = (t5 + 12U);
	t12                   = *((unsigned int*)t11);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, t10, ((t12)));
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_zeroext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_signext(t1, t30, t4, t5, t33);
	t34            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3336837670_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5)
{
	char          t6[128];
	char          t7[40];
	char          t17[8];
	char          t26[16];
	char          t30[16];
	unsigned char t0;
	char*         t8;
	unsigned int  t9;
	char*         t10;
	unsigned int  t11;
	int           t12;
	int           t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t18;
	char*         t19;
	char*         t20;
	unsigned char t21;
	char*         t22;
	char*         t23;
	unsigned char t24;
	char*         t25;
	char*         t27;
	char*         t28;
	int           t29;
	char*         t31;
	char*         t32;
	int           t33;
	unsigned char t34;

LAB0:
	t8                    = (t3 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = (t5 + 12U);
	t11                   = *((unsigned int*)t10);
	t12                   = (t11 + 1);
	t13                   = ieee_p_3499444699_sub_3409386410_3536714472(t1, ((t9)), t12);
	t14                   = (t6 + 4U);
	t15                   = ((STD_STANDARD) + 384);
	t16                   = (t14 + 88U);
	*((char**)t16)        = t15;
	t18                   = (t14 + 56U);
	*((char**)t18)        = t17;
	*((int*)t17)          = t13;
	t19                   = (t14 + 80U);
	*((unsigned int*)t19) = 4U;
	t20                   = (t7 + 4U);
	t21                   = (t2 != 0);
	if(t21 == 1)
		goto LAB3;

LAB2:
	t22            = (t7 + 12U);
	*((char**)t22) = t3;
	t23            = (t7 + 20U);
	t24            = (t4 != 0);
	if(t24 == 1)
		goto LAB5;

LAB4:
	t25            = (t7 + 28U);
	*((char**)t25) = t5;
	t27            = (t14 + 56U);
	t28            = *((char**)t27);
	t29            = *((int*)t28);
	t27            = ieee_std_logic_arith_conv_signed_signext(t1, t26, t2, t3, t29);
	t31            = (t14 + 56U);
	t32            = *((char**)t31);
	t33            = *((int*)t32);
	t31            = ieee_std_logic_arith_conv_signed_zeroext(t1, t30, t4, t5, t33);
	t34            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t27, t26, t31, t30);
	t0             = t34;

LAB1:
	return t0;
LAB3:
	*((char**)t20) = t2;
	goto LAB2;

LAB5:
	*((char**)t23) = t4;
	goto LAB4;

LAB6:;
}

unsigned char ieee_p_3499444699_sub_3712539755_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	t17                   = (t2 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 12U);
	*((char**)t18) = t3;
	t19            = (t6 + 20U);
	*((int*)t19)   = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_zeroext(t1, t20, t2, t3, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_integer(t1, t24, t4, t27);
	t28            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3579735367_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t13[8];
	char          t20[16];
	char          t24[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	int           t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	unsigned char t18;
	char*         t19;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t25;
	char*         t26;
	int           t27;
	unsigned char t28;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t8 + 1);
	t10                   = (t5 + 4U);
	t11                   = ((STD_STANDARD) + 384);
	t12                   = (t10 + 88U);
	*((char**)t12)        = t11;
	t14                   = (t10 + 56U);
	*((char**)t14)        = t13;
	*((int*)t13)          = t9;
	t15                   = (t10 + 80U);
	*((unsigned int*)t15) = 4U;
	t16                   = (t6 + 4U);
	*((int*)t16)          = t2;
	t17                   = (t6 + 8U);
	t18                   = (t3 != 0);
	if(t18 == 1)
		goto LAB3;

LAB2:
	t19            = (t6 + 16U);
	*((char**)t19) = t4;
	t21            = (t10 + 56U);
	t22            = *((char**)t21);
	t23            = *((int*)t22);
	t21            = ieee_std_logic_arith_conv_signed_integer(t1, t20, t2, t23);
	t25            = (t10 + 56U);
	t26            = *((char**)t25);
	t27            = *((int*)t26);
	t25            = ieee_std_logic_arith_conv_signed_zeroext(t1, t24, t3, t4, t27);
	t28            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t21, t20, t25, t24);
	t0             = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t17) = t3;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3114324033_3536714472(char* t1,
                                                          char* t2,
                                                          char* t3,
                                                          int   t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned char t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t3 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	t16                   = (t2 != 0);
	if(t16 == 1)
		goto LAB3;

LAB2:
	t17            = (t6 + 12U);
	*((char**)t17) = t3;
	t18            = (t6 + 20U);
	*((int*)t18)   = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_signext(t1, t19, t2, t3, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_integer(t1, t23, t4, t26);
	t27            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t15) = t2;
	goto LAB2;

LAB4:;
}

unsigned char ieee_p_3499444699_sub_3732430181_3536714472(char* t1,
                                                          int   t2,
                                                          char* t3,
                                                          char* t4)
{
	char          t5[128];
	char          t6[24];
	char          t12[8];
	char          t19[16];
	char          t23[16];
	unsigned char t0;
	char*         t7;
	unsigned int  t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	unsigned char t17;
	char*         t18;
	char*         t20;
	char*         t21;
	int           t22;
	char*         t24;
	char*         t25;
	int           t26;
	unsigned char t27;

LAB0:
	t7                    = (t4 + 12U);
	t8                    = *((unsigned int*)t7);
	t9                    = (t5 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((unsigned int*)t12) = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t6 + 4U);
	*((int*)t15)          = t2;
	t16                   = (t6 + 8U);
	t17                   = (t3 != 0);
	if(t17 == 1)
		goto LAB3;

LAB2:
	t18            = (t6 + 16U);
	*((char**)t18) = t4;
	t20            = (t9 + 56U);
	t21            = *((char**)t20);
	t22            = *((int*)t21);
	t20            = ieee_std_logic_arith_conv_signed_integer(t1, t19, t2, t22);
	t24            = (t9 + 56U);
	t25            = *((char**)t24);
	t26            = *((int*)t25);
	t24            = ieee_std_logic_arith_conv_signed_signext(t1, t23, t3, t4, t26);
	t27            = ieee_p_3499444699_sub_3385499474_3536714472(t1, t20, t19, t24, t23);
	t0             = t27;

LAB1:
	return t0;
LAB3:
	*((char**)t16) = t3;
	goto LAB2;

LAB4:;
}

char* ieee_p_3499444699_sub_1904283970_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[368];
	char          t8[40];
	char          t12[8];
	char          t21[8];
	char          t29[16];
	char          t41[16];
	char*         t0;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	char*         t15;
	unsigned int  t16;
	int           t17;
	char*         t18;
	char*         t19;
	char*         t20;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	int           t31;
	char*         t32;
	int           t33;
	unsigned int  t34;
	char*         t35;
	char*         t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t42;
	char*         t43;
	int           t44;
	char*         t45;
	int           t46;
	unsigned char t47;
	char*         t48;
	char*         t49;
	unsigned char t50;
	char*         t51;
	unsigned char t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	char*         t57;
	char*         t58;
	unsigned int  t59;
	int           t60;
	int           t61;
	int           t62;
	int           t63;
	int           t64;
	int           t65;
	unsigned int  t66;
	unsigned int  t67;
	int           t68;
	int           t69;
	int           t70;
	int           t71;
	unsigned int  t72;
	unsigned int  t73;

LAB0:
	t9             = (t7 + 4U);
	t10            = ((STD_STANDARD) + 384);
	t11            = (t9 + 88U);
	*((char**)t11) = t10;
	t13            = (t9 + 56U);
	*((char**)t13) = t12;
	xsi_type_set_default_value(t10, t12, 0);
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t4 + 12U);
	t16                   = *((unsigned int*)t15);
	t17                   = (t16 - 1);
	t18                   = (t7 + 124U);
	t19                   = ((STD_STANDARD) + 384);
	t20                   = (t18 + 88U);
	*((char**)t20)        = t19;
	t22                   = (t18 + 56U);
	*((char**)t22)        = t21;
	*((int*)t21)          = t17;
	t23                   = (t18 + 80U);
	*((unsigned int*)t23) = 4U;
	t24                   = (t18 + 56U);
	t25                   = *((char**)t24);
	t26                   = *((int*)t25);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t24                   = (t18 + 56U);
	t30                   = *((char**)t24);
	t31                   = *((int*)t30);
	t24                   = (t29 + 0U);
	t32                   = (t24 + 0U);
	*((int*)t32)          = t31;
	t32                   = (t24 + 4U);
	*((int*)t32)          = 0;
	t32                   = (t24 + 8U);
	*((int*)t32)          = -1;
	t33                   = (0 - t31);
	t34                   = (t33 * -1);
	t34                   = (t34 + 1);
	t32                   = (t24 + 12U);
	*((unsigned int*)t32) = t34;
	t32                   = (t7 + 244U);
	t35                   = (t1 + 2616);
	t36                   = (t32 + 88U);
	*((char**)t36)        = t35;
	t37                   = (char*)alloca(t28);
	t38                   = (t32 + 56U);
	*((char**)t38)        = t37;
	xsi_type_set_default_value(t35, t37, t29);
	t39                   = (t32 + 64U);
	*((char**)t39)        = t29;
	t40                   = (t32 + 80U);
	*((unsigned int*)t40) = t28;
	t42                   = (t18 + 56U);
	t43                   = *((char**)t42);
	t44                   = *((int*)t43);
	t42                   = (t41 + 0U);
	t45                   = (t42 + 0U);
	*((int*)t45)          = t44;
	t45                   = (t42 + 4U);
	*((int*)t45)          = 0;
	t45                   = (t42 + 8U);
	*((int*)t45)          = -1;
	t46                   = (0 - t44);
	t34                   = (t46 * -1);
	t34                   = (t34 + 1);
	t45                   = (t42 + 12U);
	*((unsigned int*)t45) = t34;
	t45                   = (t8 + 4U);
	t47                   = (t3 != 0);
	if(t47 == 1)
		goto LAB3;

LAB2:
	t48            = (t8 + 12U);
	*((char**)t48) = t4;
	t49            = (t8 + 20U);
	t50            = (t5 != 0);
	if(t50 == 1)
		goto LAB5;

LAB4:
	t51            = (t8 + 28U);
	*((char**)t51) = t6;
	t52            = ieee_p_3499444699_sub_3141295106_3536714472(t1, t5, t6);
	if(t52 != 0)
		goto LAB6;

LAB8:
LAB7:
	t17          = ieee_std_logic_arith_conv_integer_unsigned(t1, t5, t6);
	t10          = (t9 + 56U);
	t11          = *((char**)t10);
	t10          = (t11 + 0);
	*((int*)t10) = t17;
	t10          = (t29 + 12U);
	t16          = *((unsigned int*)t10);
	t16          = (t16 * 1U);
	t11          = xsi_get_transient_memory(t16);
	memset(t11, 0, t16);
	t13 = t11;
	memset(t13, (unsigned char)2, t16);
	t14 = (t32 + 56U);
	t15 = *((char**)t14);
	t14 = (t15 + 0);
	t19 = (t29 + 12U);
	t28 = *((unsigned int*)t19);
	t28 = (t28 * 1U);
	memcpy(t14, t11, t28);
	t10 = (t9 + 56U);
	t11 = *((char**)t10);
	t17 = *((int*)t11);
	t10 = (t18 + 56U);
	t13 = *((char**)t10);
	t26 = *((int*)t13);
	t47 = (t17 <= t26);
	if(t47 != 0)
		goto LAB10;

LAB12:
LAB11:
	t10 = (t32 + 56U);
	t11 = *((char**)t10);
	t10 = (t29 + 12U);
	t16 = *((unsigned int*)t10);
	t16 = (t16 * 1U);
	t0  = xsi_get_transient_memory(t16);
	memcpy(t0, t11, t16);
	t13                   = (t29 + 0U);
	t17                   = *((int*)t13);
	t14                   = (t29 + 4U);
	t26                   = *((int*)t14);
	t15                   = (t29 + 8U);
	t27                   = *((int*)t15);
	t19                   = (t2 + 0U);
	t20                   = (t19 + 0U);
	*((int*)t20)          = t17;
	t20                   = (t19 + 4U);
	*((int*)t20)          = t26;
	t20                   = (t19 + 8U);
	*((int*)t20)          = t27;
	t31                   = (t26 - t17);
	t28                   = (t31 * t27);
	t28                   = (t28 + 1);
	t20                   = (t19 + 12U);
	*((unsigned int*)t20) = t28;

LAB1:
	return t0;
LAB3:
	*((char**)t45) = t3;
	goto LAB2;

LAB5:
	*((char**)t49) = t5;
	goto LAB4;

LAB6:
	t53 = (t29 + 12U);
	t34 = *((unsigned int*)t53);
	t34 = (t34 * 1U);
	t54 = xsi_get_transient_memory(t34);
	memset(t54, 0, t34);
	t55 = t54;
	memset(t55, (unsigned char)1, t34);
	t56 = (t32 + 56U);
	t57 = *((char**)t56);
	t56 = (t57 + 0);
	t58 = (t29 + 12U);
	t59 = *((unsigned int*)t58);
	t59 = (t59 * 1U);
	memcpy(t56, t54, t59);
	t10 = (t32 + 56U);
	t11 = *((char**)t10);
	t10 = (t29 + 12U);
	t16 = *((unsigned int*)t10);
	t16 = (t16 * 1U);
	t0  = xsi_get_transient_memory(t16);
	memcpy(t0, t11, t16);
	t13                   = (t29 + 0U);
	t17                   = *((int*)t13);
	t14                   = (t29 + 4U);
	t26                   = *((int*)t14);
	t15                   = (t29 + 8U);
	t27                   = *((int*)t15);
	t19                   = (t2 + 0U);
	t20                   = (t19 + 0U);
	*((int*)t20)          = t17;
	t20                   = (t19 + 4U);
	*((int*)t20)          = t26;
	t20                   = (t19 + 8U);
	*((int*)t20)          = t27;
	t31                   = (t26 - t17);
	t28                   = (t31 * t27);
	t28                   = (t28 + 1);
	t20                   = (t19 + 12U);
	*((unsigned int*)t20) = t28;
	goto LAB1;

LAB9:
	goto LAB7;

LAB10:
	t10 = (t3 + 0);
	t14 = (t41 + 0U);
	t27 = *((int*)t14);
	t15 = (t18 + 56U);
	t19 = *((char**)t15);
	t31 = *((int*)t19);
	t15 = (t9 + 56U);
	t20 = *((char**)t15);
	t33 = *((int*)t20);
	t44 = (t31 - t33);
	t16 = (t27 - t44);
	t15 = (t41 + 4U);
	t46 = *((int*)t15);
	t22 = (t41 + 8U);
	t60 = *((int*)t22);
	xsi_vhdl_check_range_of_slice(t27, t46, t60, t44, 0, -1);
	t28 = (t16 * 1U);
	t34 = (0 + t28);
	t23 = (t10 + t34);
	t24 = (t32 + 56U);
	t25 = *((char**)t24);
	t24 = (t29 + 0U);
	t61 = *((int*)t24);
	t30 = (t18 + 56U);
	t35 = *((char**)t30);
	t62 = *((int*)t35);
	t59 = (t61 - t62);
	t30 = (t9 + 56U);
	t36 = *((char**)t30);
	t63 = *((int*)t36);
	t30 = (t29 + 4U);
	t64 = *((int*)t30);
	t38 = (t29 + 8U);
	t65 = *((int*)t38);
	xsi_vhdl_check_range_of_slice(t61, t64, t65, t62, t63, -1);
	t66 = (t59 * 1U);
	t67 = (0 + t66);
	t39 = (t25 + t67);
	t40 = (t18 + 56U);
	t42 = *((char**)t40);
	t68 = *((int*)t42);
	t40 = (t9 + 56U);
	t43 = *((char**)t40);
	t69 = *((int*)t43);
	t70 = (t68 - t69);
	t71 = (0 - t70);
	t72 = (t71 * -1);
	t72 = (t72 + 1);
	t73 = (1U * t72);
	memcpy(t39, t23, t73);
	goto LAB11;

LAB13:;
}

char* ieee_p_3499444699_sub_3265085561_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[720];
	char          t8[40];
	char          t15[8];
	char          t23[16];
	char          t40[8];
	char          t43[16];
	char          t55[16];
	char          t98[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
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
	int           t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t41;
	char*         t42;
	char*         t44;
	char*         t45;
	int           t46;
	char*         t47;
	int           t48;
	unsigned int  t49;
	char*         t50;
	char*         t51;
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	int           t60;
	char*         t61;
	char*         t62;
	char*         t63;
	char*         t64;
	int           t65;
	char*         t66;
	char*         t67;
	char*         t68;
	char*         t69;
	int           t70;
	char*         t71;
	char*         t72;
	int           t73;
	unsigned int  t74;
	char*         t75;
	char*         t76;
	char*         t77;
	char*         t78;
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
	char*         t89;
	char*         t90;
	char*         t91;
	char*         t92;
	unsigned char t93;
	char*         t94;
	char*         t95;
	unsigned char t96;
	char*         t97;
	char*         t99;
	char*         t100;
	char*         t101;
	char*         t102;
	int           t103;
	int           t104;
	int           t105;
	unsigned int  t106;
	int           t107;
	int           t108;
	int           t109;
	int           t110;
	unsigned int  t111;
	unsigned int  t112;

LAB0:
	t9                    = (t6 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 - 1);
	t12                   = (t7 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t18                   = (t12 + 56U);
	t19                   = *((char**)t18);
	t20                   = *((int*)t19);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t18                   = (t12 + 56U);
	t24                   = *((char**)t18);
	t25                   = *((int*)t24);
	t18                   = (t23 + 0U);
	t26                   = (t18 + 0U);
	*((int*)t26)          = t25;
	t26                   = (t18 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t18 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t25);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t18 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t7 + 124U);
	t29                   = (t1 + 2616);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t22);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t23);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t23;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t22;
	t35                   = (t4 + 12U);
	t28                   = *((unsigned int*)t35);
	t36                   = (t28 - 1);
	t37                   = (t7 + 244U);
	t38                   = ((STD_STANDARD) + 384);
	t39                   = (t37 + 88U);
	*((char**)t39)        = t38;
	t41                   = (t37 + 56U);
	*((char**)t41)        = t40;
	*((int*)t40)          = t36;
	t42                   = (t37 + 80U);
	*((unsigned int*)t42) = 4U;
	t44                   = (t37 + 56U);
	t45                   = *((char**)t44);
	t46                   = *((int*)t45);
	t44                   = (t43 + 0U);
	t47                   = (t44 + 0U);
	*((int*)t47)          = t46;
	t47                   = (t44 + 4U);
	*((int*)t47)          = 0;
	t47                   = (t44 + 8U);
	*((int*)t47)          = -1;
	t48                   = (0 - t46);
	t49                   = (t48 * -1);
	t49                   = (t49 + 1);
	t47                   = (t44 + 12U);
	*((unsigned int*)t47) = t49;
	t47                   = (t1 + 2728);
	t50                   = (t7 + 364U);
	xsi_create_subtype(t50, ng5, t47, t43, 2);
	t51                   = (t7 + 364U);
	t52                   = (t51 + 80U);
	t53                   = *((char**)t52);
	t54                   = (t53 + 12U);
	t49                   = *((unsigned int*)t54);
	t49                   = (t49 * 1U);
	t56                   = (t7 + 364U);
	t57                   = (t56 + 80U);
	t58                   = *((char**)t57);
	t59                   = (t58 + 0U);
	t60                   = *((int*)t59);
	t61                   = (t7 + 364U);
	t62                   = (t61 + 80U);
	t63                   = *((char**)t62);
	t64                   = (t63 + 4U);
	t65                   = *((int*)t64);
	t66                   = (t7 + 364U);
	t67                   = (t66 + 80U);
	t68                   = *((char**)t67);
	t69                   = (t68 + 8U);
	t70                   = *((int*)t69);
	t71                   = (t55 + 0U);
	t72                   = (t71 + 0U);
	*((int*)t72)          = t60;
	t72                   = (t71 + 4U);
	*((int*)t72)          = t65;
	t72                   = (t71 + 8U);
	*((int*)t72)          = t70;
	t73                   = (t65 - t60);
	t74                   = (t73 * t70);
	t74                   = (t74 + 1);
	t72                   = (t71 + 12U);
	*((unsigned int*)t72) = t74;
	t72                   = (t7 + 476U);
	t75                   = (t7 + 364U);
	t76                   = (t72 + 88U);
	*((char**)t76)        = t75;
	t77                   = (char*)alloca(t49);
	t78                   = (t72 + 56U);
	*((char**)t78)        = t77;
	xsi_type_set_default_value(t75, t77, 0);
	t79                   = (t72 + 64U);
	t80                   = (t75 + 80U);
	t81                   = *((char**)t80);
	*((char**)t79)        = t81;
	t82                   = (t72 + 80U);
	*((unsigned int*)t82) = t49;
	t83                   = (t7 + 596U);
	t84                   = (t7 + 364U);
	t85                   = (t83 + 88U);
	*((char**)t85)        = t84;
	t86                   = (char*)alloca(t49);
	t87                   = (t83 + 56U);
	*((char**)t87)        = t86;
	xsi_type_set_default_value(t84, t86, 0);
	t88                   = (t83 + 64U);
	t89                   = (t84 + 80U);
	t90                   = *((char**)t89);
	*((char**)t88)        = t90;
	t91                   = (t83 + 80U);
	*((unsigned int*)t91) = t49;
	t92                   = (t8 + 4U);
	t93                   = (t3 != 0);
	if(t93 == 1)
		goto LAB3;

LAB2:
	t94            = (t8 + 12U);
	*((char**)t94) = t4;
	t95            = (t8 + 20U);
	t96            = (t5 != 0);
	if(t96 == 1)
		goto LAB5;

LAB4:
	t97            = (t8 + 28U);
	*((char**)t97) = t6;
	t99            = ieee_p_3499444699_sub_3292431343_3536714472(t1, t98, t5, t6);
	t100           = (t26 + 56U);
	t101           = *((char**)t100);
	t100           = (t101 + 0);
	t102           = (t98 + 12U);
	t74            = *((unsigned int*)t102);
	t74            = (t74 * 1U);
	memcpy(t100, t99, t74);
	t9  = (t26 + 56U);
	t13 = *((char**)t9);
	t9  = (t23 + 0U);
	t11 = *((int*)t9);
	t14 = (t23 + 8U);
	t20 = *((int*)t14);
	t21 = (0 - t11);
	t10 = (t21 * t20);
	t22 = (1U * t10);
	t28 = (0 + t22);
	t16 = (t13 + t28);
	t93 = *((unsigned char*)t16);
	t96 = (t93 == (unsigned char)1);
	if(t96 != 0)
		goto LAB6;

LAB8:
LAB7:
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t13 + 0);
	t14 = (t4 + 12U);
	t10 = *((unsigned int*)t14);
	t10 = (t10 * 1U);
	memcpy(t9, t3, t10);
	t9  = (t12 + 56U);
	t13 = *((char**)t9);
	t11 = *((int*)t13);
	t20 = 0;
	t21 = t11;

LAB10:
	if(t20 <= t21)
		goto LAB11;

LAB13:
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t55 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t13, t10);
	t14                   = (t55 + 0U);
	t11                   = *((int*)t14);
	t16                   = (t55 + 4U);
	t20                   = *((int*)t16);
	t17                   = (t55 + 8U);
	t21                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t11;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t20;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t21;
	t25                   = (t20 - t11);
	t22                   = (t25 * t21);
	t22                   = (t22 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t22;

LAB1:
	t9 = (t7 + 364U);
	xsi_delete_type(t9, 2);
	return t0;
LAB3:
	*((char**)t92) = t3;
	goto LAB2;

LAB5:
	*((char**)t95) = t5;
	goto LAB4;

LAB6:
	t17 = (t7 + 364U);
	t18 = (t17 + 80U);
	t19 = *((char**)t18);
	t24 = (t19 + 12U);
	t49 = *((unsigned int*)t24);
	t49 = (t49 * 1U);
	t29 = xsi_get_transient_memory(t49);
	memset(t29, 0, t49);
	t30 = t29;
	memset(t30, (unsigned char)1, t49);
	t32 = (t72 + 56U);
	t33 = *((char**)t32);
	t32 = (t33 + 0);
	t34 = (t7 + 364U);
	t35 = (t34 + 80U);
	t38 = *((char**)t35);
	t39 = (t38 + 12U);
	t74 = *((unsigned int*)t39);
	t74 = (t74 * 1U);
	memcpy(t32, t29, t74);
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t55 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t13, t10);
	t14                   = (t55 + 0U);
	t11                   = *((int*)t14);
	t16                   = (t55 + 4U);
	t20                   = *((int*)t16);
	t17                   = (t55 + 8U);
	t21                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t11;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t20;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t21;
	t25                   = (t20 - t11);
	t22                   = (t25 * t21);
	t22                   = (t22 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t22;
	goto LAB1;

LAB9:
	goto LAB7;

LAB11:
	t9  = (t26 + 56U);
	t14 = *((char**)t9);
	t9  = (t23 + 0U);
	t25 = *((int*)t9);
	t16 = (t23 + 8U);
	t27 = *((int*)t16);
	t36 = (t20 - t25);
	t10 = (t36 * t27);
	t17 = (t23 + 4U);
	t46 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t25, t46, t27, t20);
	t22 = (1U * t10);
	t28 = (0 + t22);
	t18 = (t14 + t28);
	t93 = *((unsigned char*)t18);
	t96 = (t93 == (unsigned char)3);
	if(t96 != 0)
		goto LAB14;

LAB16:
LAB15:
LAB12:
	if(t20 == t21)
		goto LAB13;

LAB20:
	t11 = (t20 + 1);
	t20 = t11;
	goto LAB10;

LAB14:
	t19 = (t7 + 364U);
	t24 = (t19 + 80U);
	t29 = *((char**)t24);
	t30 = (t29 + 12U);
	t49 = *((unsigned int*)t30);
	t49 = (t49 * 1U);
	t32 = xsi_get_transient_memory(t49);
	memset(t32, 0, t49);
	t33 = t32;
	memset(t33, (unsigned char)2, t49);
	t34 = (t83 + 56U);
	t35 = *((char**)t34);
	t34 = (t35 + 0);
	t38 = (t7 + 364U);
	t39 = (t38 + 80U);
	t41 = *((char**)t39);
	t42 = (t41 + 12U);
	t74 = *((unsigned int*)t42);
	t74 = (t74 * 1U);
	memcpy(t34, t32, t74);
	t11 = xsi_vhdl_pow(2, t20);
	t9  = (t37 + 56U);
	t13 = *((char**)t9);
	t25 = *((int*)t13);
	t93 = (t11 <= t25);
	if(t93 != 0)
		goto LAB17;

LAB19:
LAB18:
	t9  = (t83 + 56U);
	t13 = *((char**)t9);
	t9  = (t72 + 56U);
	t14 = *((char**)t9);
	t9  = (t14 + 0);
	t16 = (t55 + 12U);
	t10 = *((unsigned int*)t16);
	t10 = (t10 * 1U);
	memcpy(t9, t13, t10);
	goto LAB15;

LAB17:
	t9  = (t72 + 56U);
	t14 = *((char**)t9);
	t9  = (t55 + 0U);
	t27 = *((int*)t9);
	t16 = (t37 + 56U);
	t17 = *((char**)t16);
	t36 = *((int*)t17);
	t46 = xsi_vhdl_pow(2, t20);
	t48 = (t36 - t46);
	t10 = (t27 - t48);
	t16 = (t55 + 4U);
	t60 = *((int*)t16);
	t18 = (t55 + 8U);
	t65 = *((int*)t18);
	xsi_vhdl_check_range_of_slice(t27, t60, t65, t48, 0, -1);
	t22  = (t10 * 1U);
	t28  = (0 + t22);
	t19  = (t14 + t28);
	t24  = (t83 + 56U);
	t29  = *((char**)t24);
	t24  = (t55 + 0U);
	t70  = *((int*)t24);
	t30  = (t37 + 56U);
	t32  = *((char**)t30);
	t73  = *((int*)t32);
	t49  = (t70 - t73);
	t103 = xsi_vhdl_pow(2, t20);
	t30  = (t55 + 4U);
	t104 = *((int*)t30);
	t33  = (t55 + 8U);
	t105 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t70, t104, t105, t73, t103, -1);
	t74  = (t49 * 1U);
	t106 = (0 + t74);
	t34  = (t29 + t106);
	t35  = (t37 + 56U);
	t38  = *((char**)t35);
	t107 = *((int*)t38);
	t108 = xsi_vhdl_pow(2, t20);
	t109 = (t107 - t108);
	t110 = (0 - t109);
	t111 = (t110 * -1);
	t111 = (t111 + 1);
	t112 = (1U * t111);
	memcpy(t34, t19, t112);
	goto LAB18;

LAB21:;
}

char* ieee_p_3499444699_sub_1775521082_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[720];
	char          t8[40];
	char          t15[8];
	char          t23[16];
	char          t40[8];
	char          t43[16];
	char          t55[16];
	char          t98[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
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
	int           t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t41;
	char*         t42;
	char*         t44;
	char*         t45;
	int           t46;
	char*         t47;
	int           t48;
	unsigned int  t49;
	char*         t50;
	char*         t51;
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	int           t60;
	char*         t61;
	char*         t62;
	char*         t63;
	char*         t64;
	int           t65;
	char*         t66;
	char*         t67;
	char*         t68;
	char*         t69;
	int           t70;
	char*         t71;
	char*         t72;
	int           t73;
	unsigned int  t74;
	char*         t75;
	char*         t76;
	char*         t77;
	char*         t78;
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
	char*         t89;
	char*         t90;
	char*         t91;
	char*         t92;
	unsigned char t93;
	char*         t94;
	char*         t95;
	unsigned char t96;
	char*         t97;
	char*         t99;
	char*         t100;
	char*         t101;
	char*         t102;
	int           t103;
	int           t104;
	int           t105;
	unsigned int  t106;
	int           t107;
	int           t108;
	int           t109;
	unsigned int  t110;
	unsigned int  t111;

LAB0:
	t9                    = (t6 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 - 1);
	t12                   = (t7 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t18                   = (t12 + 56U);
	t19                   = *((char**)t18);
	t20                   = *((int*)t19);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t18                   = (t12 + 56U);
	t24                   = *((char**)t18);
	t25                   = *((int*)t24);
	t18                   = (t23 + 0U);
	t26                   = (t18 + 0U);
	*((int*)t26)          = t25;
	t26                   = (t18 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t18 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t25);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t18 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t7 + 124U);
	t29                   = (t1 + 2616);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t22);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t23);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t23;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t22;
	t35                   = (t4 + 12U);
	t28                   = *((unsigned int*)t35);
	t36                   = (t28 - 1);
	t37                   = (t7 + 244U);
	t38                   = ((STD_STANDARD) + 384);
	t39                   = (t37 + 88U);
	*((char**)t39)        = t38;
	t41                   = (t37 + 56U);
	*((char**)t41)        = t40;
	*((int*)t40)          = t36;
	t42                   = (t37 + 80U);
	*((unsigned int*)t42) = 4U;
	t44                   = (t37 + 56U);
	t45                   = *((char**)t44);
	t46                   = *((int*)t45);
	t44                   = (t43 + 0U);
	t47                   = (t44 + 0U);
	*((int*)t47)          = t46;
	t47                   = (t44 + 4U);
	*((int*)t47)          = 0;
	t47                   = (t44 + 8U);
	*((int*)t47)          = -1;
	t48                   = (0 - t46);
	t49                   = (t48 * -1);
	t49                   = (t49 + 1);
	t47                   = (t44 + 12U);
	*((unsigned int*)t47) = t49;
	t47                   = (t1 + 2616);
	t50                   = (t7 + 364U);
	xsi_create_subtype(t50, ng5, t47, t43, 2);
	t51                   = (t7 + 364U);
	t52                   = (t51 + 80U);
	t53                   = *((char**)t52);
	t54                   = (t53 + 12U);
	t49                   = *((unsigned int*)t54);
	t49                   = (t49 * 1U);
	t56                   = (t7 + 364U);
	t57                   = (t56 + 80U);
	t58                   = *((char**)t57);
	t59                   = (t58 + 0U);
	t60                   = *((int*)t59);
	t61                   = (t7 + 364U);
	t62                   = (t61 + 80U);
	t63                   = *((char**)t62);
	t64                   = (t63 + 4U);
	t65                   = *((int*)t64);
	t66                   = (t7 + 364U);
	t67                   = (t66 + 80U);
	t68                   = *((char**)t67);
	t69                   = (t68 + 8U);
	t70                   = *((int*)t69);
	t71                   = (t55 + 0U);
	t72                   = (t71 + 0U);
	*((int*)t72)          = t60;
	t72                   = (t71 + 4U);
	*((int*)t72)          = t65;
	t72                   = (t71 + 8U);
	*((int*)t72)          = t70;
	t73                   = (t65 - t60);
	t74                   = (t73 * t70);
	t74                   = (t74 + 1);
	t72                   = (t71 + 12U);
	*((unsigned int*)t72) = t74;
	t72                   = (t7 + 476U);
	t75                   = (t7 + 364U);
	t76                   = (t72 + 88U);
	*((char**)t76)        = t75;
	t77                   = (char*)alloca(t49);
	t78                   = (t72 + 56U);
	*((char**)t78)        = t77;
	xsi_type_set_default_value(t75, t77, 0);
	t79                   = (t72 + 64U);
	t80                   = (t75 + 80U);
	t81                   = *((char**)t80);
	*((char**)t79)        = t81;
	t82                   = (t72 + 80U);
	*((unsigned int*)t82) = t49;
	t83                   = (t7 + 596U);
	t84                   = (t7 + 364U);
	t85                   = (t83 + 88U);
	*((char**)t85)        = t84;
	t86                   = (char*)alloca(t49);
	t87                   = (t83 + 56U);
	*((char**)t87)        = t86;
	xsi_type_set_default_value(t84, t86, 0);
	t88                   = (t83 + 64U);
	t89                   = (t84 + 80U);
	t90                   = *((char**)t89);
	*((char**)t88)        = t90;
	t91                   = (t83 + 80U);
	*((unsigned int*)t91) = t49;
	t92                   = (t8 + 4U);
	t93                   = (t3 != 0);
	if(t93 == 1)
		goto LAB3;

LAB2:
	t94            = (t8 + 12U);
	*((char**)t94) = t4;
	t95            = (t8 + 20U);
	t96            = (t5 != 0);
	if(t96 == 1)
		goto LAB5;

LAB4:
	t97            = (t8 + 28U);
	*((char**)t97) = t6;
	t99            = ieee_p_3499444699_sub_3292431343_3536714472(t1, t98, t5, t6);
	t100           = (t26 + 56U);
	t101           = *((char**)t100);
	t100           = (t101 + 0);
	t102           = (t98 + 12U);
	t74            = *((unsigned int*)t102);
	t74            = (t74 * 1U);
	memcpy(t100, t99, t74);
	t9  = (t26 + 56U);
	t13 = *((char**)t9);
	t9  = (t23 + 0U);
	t11 = *((int*)t9);
	t14 = (t23 + 8U);
	t20 = *((int*)t14);
	t21 = (0 - t11);
	t10 = (t21 * t20);
	t22 = (1U * t10);
	t28 = (0 + t22);
	t16 = (t13 + t28);
	t93 = *((unsigned char*)t16);
	t96 = (t93 == (unsigned char)1);
	if(t96 != 0)
		goto LAB6;

LAB8:
LAB7:
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t13 + 0);
	t14 = (t4 + 12U);
	t10 = *((unsigned int*)t14);
	t10 = (t10 * 1U);
	memcpy(t9, t3, t10);
	t9  = (t12 + 56U);
	t13 = *((char**)t9);
	t11 = *((int*)t13);
	t20 = 0;
	t21 = t11;

LAB10:
	if(t20 <= t21)
		goto LAB11;

LAB13:
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t55 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t13, t10);
	t14                   = (t55 + 0U);
	t11                   = *((int*)t14);
	t16                   = (t55 + 4U);
	t20                   = *((int*)t16);
	t17                   = (t55 + 8U);
	t21                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t11;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t20;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t21;
	t25                   = (t20 - t11);
	t22                   = (t25 * t21);
	t22                   = (t22 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t22;

LAB1:
	t9 = (t7 + 364U);
	xsi_delete_type(t9, 2);
	return t0;
LAB3:
	*((char**)t92) = t3;
	goto LAB2;

LAB5:
	*((char**)t95) = t5;
	goto LAB4;

LAB6:
	t17 = (t7 + 364U);
	t18 = (t17 + 80U);
	t19 = *((char**)t18);
	t24 = (t19 + 12U);
	t49 = *((unsigned int*)t24);
	t49 = (t49 * 1U);
	t29 = xsi_get_transient_memory(t49);
	memset(t29, 0, t49);
	t30 = t29;
	memset(t30, (unsigned char)1, t49);
	t32 = (t72 + 56U);
	t33 = *((char**)t32);
	t32 = (t33 + 0);
	t34 = (t7 + 364U);
	t35 = (t34 + 80U);
	t38 = *((char**)t35);
	t39 = (t38 + 12U);
	t74 = *((unsigned int*)t39);
	t74 = (t74 * 1U);
	memcpy(t32, t29, t74);
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t55 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t13, t10);
	t14                   = (t55 + 0U);
	t11                   = *((int*)t14);
	t16                   = (t55 + 4U);
	t20                   = *((int*)t16);
	t17                   = (t55 + 8U);
	t21                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t11;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t20;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t21;
	t25                   = (t20 - t11);
	t22                   = (t25 * t21);
	t22                   = (t22 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t22;
	goto LAB1;

LAB9:
	goto LAB7;

LAB11:
	t9  = (t26 + 56U);
	t14 = *((char**)t9);
	t9  = (t23 + 0U);
	t25 = *((int*)t9);
	t16 = (t23 + 8U);
	t27 = *((int*)t16);
	t36 = (t20 - t25);
	t10 = (t36 * t27);
	t17 = (t23 + 4U);
	t46 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t25, t46, t27, t20);
	t22 = (1U * t10);
	t28 = (0 + t22);
	t18 = (t14 + t28);
	t93 = *((unsigned char*)t18);
	t96 = (t93 == (unsigned char)3);
	if(t96 != 0)
		goto LAB14;

LAB16:
LAB15:
LAB12:
	if(t20 == t21)
		goto LAB13;

LAB20:
	t11 = (t20 + 1);
	t20 = t11;
	goto LAB10;

LAB14:
	t19 = (t7 + 364U);
	t24 = (t19 + 80U);
	t29 = *((char**)t24);
	t30 = (t29 + 12U);
	t49 = *((unsigned int*)t30);
	t49 = (t49 * 1U);
	t32 = xsi_get_transient_memory(t49);
	memset(t32, 0, t49);
	t33 = t32;
	memset(t33, (unsigned char)2, t49);
	t34 = (t83 + 56U);
	t35 = *((char**)t34);
	t34 = (t35 + 0);
	t38 = (t7 + 364U);
	t39 = (t38 + 80U);
	t41 = *((char**)t39);
	t42 = (t41 + 12U);
	t74 = *((unsigned int*)t42);
	t74 = (t74 * 1U);
	memcpy(t34, t32, t74);
	t11 = xsi_vhdl_pow(2, t20);
	t9  = (t37 + 56U);
	t13 = *((char**)t9);
	t25 = *((int*)t13);
	t93 = (t11 <= t25);
	if(t93 != 0)
		goto LAB17;

LAB19:
LAB18:
	t9  = (t83 + 56U);
	t13 = *((char**)t9);
	t9  = (t72 + 56U);
	t14 = *((char**)t9);
	t9  = (t14 + 0);
	t16 = (t55 + 12U);
	t10 = *((unsigned int*)t16);
	t10 = (t10 * 1U);
	memcpy(t9, t13, t10);
	goto LAB15;

LAB17:
	t9  = (t72 + 56U);
	t14 = *((char**)t9);
	t9  = (t55 + 0U);
	t27 = *((int*)t9);
	t16 = (t37 + 56U);
	t17 = *((char**)t16);
	t36 = *((int*)t17);
	t10 = (t27 - t36);
	t46 = xsi_vhdl_pow(2, t20);
	t16 = (t55 + 4U);
	t48 = *((int*)t16);
	t18 = (t55 + 8U);
	t60 = *((int*)t18);
	xsi_vhdl_check_range_of_slice(t27, t48, t60, t36, t46, -1);
	t22  = (t10 * 1U);
	t28  = (0 + t22);
	t19  = (t14 + t28);
	t24  = (t83 + 56U);
	t29  = *((char**)t24);
	t24  = (t55 + 0U);
	t65  = *((int*)t24);
	t30  = (t37 + 56U);
	t32  = *((char**)t30);
	t70  = *((int*)t32);
	t73  = xsi_vhdl_pow(2, t20);
	t103 = (t70 - t73);
	t49  = (t65 - t103);
	t30  = (t55 + 4U);
	t104 = *((int*)t30);
	t33  = (t55 + 8U);
	t105 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t65, t104, t105, t103, 0, -1);
	t74  = (t49 * 1U);
	t106 = (0 + t74);
	t34  = (t29 + t106);
	t35  = (t37 + 56U);
	t38  = *((char**)t35);
	t107 = *((int*)t38);
	t108 = xsi_vhdl_pow(2, t20);
	t109 = (t108 - t107);
	t110 = (t109 * -1);
	t110 = (t110 + 1);
	t111 = (1U * t110);
	memcpy(t34, t19, t111);
	goto LAB18;

LAB21:;
}

char* ieee_p_3499444699_sub_3327266423_3536714472(
    char* t1, char* t2, char* t3, char* t4, char* t5, char* t6)
{
	char          t7[840];
	char          t8[40];
	char          t15[8];
	char          t23[16];
	char          t40[8];
	char          t43[16];
	char          t55[16];
	char          t95[8];
	char          t104[16];
	char*         t0;
	char*         t9;
	unsigned int  t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	int           t20;
	int           t21;
	unsigned int  t22;
	char*         t24;
	int           t25;
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
	int           t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t41;
	char*         t42;
	char*         t44;
	char*         t45;
	int           t46;
	char*         t47;
	int           t48;
	unsigned int  t49;
	char*         t50;
	char*         t51;
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	int           t60;
	char*         t61;
	char*         t62;
	char*         t63;
	char*         t64;
	int           t65;
	char*         t66;
	char*         t67;
	char*         t68;
	char*         t69;
	int           t70;
	char*         t71;
	char*         t72;
	int           t73;
	unsigned int  t74;
	char*         t75;
	char*         t76;
	char*         t77;
	char*         t78;
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
	char*         t89;
	char*         t90;
	char*         t91;
	char*         t92;
	char*         t93;
	char*         t94;
	char*         t96;
	char*         t97;
	char*         t98;
	unsigned char t99;
	char*         t100;
	char*         t101;
	unsigned char t102;
	char*         t103;
	char*         t105;
	char*         t106;
	char*         t107;
	char*         t108;
	unsigned char t109;
	int           t110;
	int           t111;
	int           t112;
	unsigned int  t113;
	int           t114;
	int           t115;
	int           t116;
	unsigned int  t117;
	unsigned int  t118;

LAB0:
	t9                    = (t6 + 12U);
	t10                   = *((unsigned int*)t9);
	t11                   = (t10 - 1);
	t12                   = (t7 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t18                   = (t12 + 56U);
	t19                   = *((char**)t18);
	t20                   = *((int*)t19);
	t21                   = (0 - t20);
	t22                   = (t21 * -1);
	t22                   = (t22 + 1);
	t22                   = (t22 * 1U);
	t18                   = (t12 + 56U);
	t24                   = *((char**)t18);
	t25                   = *((int*)t24);
	t18                   = (t23 + 0U);
	t26                   = (t18 + 0U);
	*((int*)t26)          = t25;
	t26                   = (t18 + 4U);
	*((int*)t26)          = 0;
	t26                   = (t18 + 8U);
	*((int*)t26)          = -1;
	t27                   = (0 - t25);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t26                   = (t18 + 12U);
	*((unsigned int*)t26) = t28;
	t26                   = (t7 + 124U);
	t29                   = (t1 + 2616);
	t30                   = (t26 + 88U);
	*((char**)t30)        = t29;
	t31                   = (char*)alloca(t22);
	t32                   = (t26 + 56U);
	*((char**)t32)        = t31;
	xsi_type_set_default_value(t29, t31, t23);
	t33                   = (t26 + 64U);
	*((char**)t33)        = t23;
	t34                   = (t26 + 80U);
	*((unsigned int*)t34) = t22;
	t35                   = (t4 + 12U);
	t28                   = *((unsigned int*)t35);
	t36                   = (t28 - 1);
	t37                   = (t7 + 244U);
	t38                   = ((STD_STANDARD) + 384);
	t39                   = (t37 + 88U);
	*((char**)t39)        = t38;
	t41                   = (t37 + 56U);
	*((char**)t41)        = t40;
	*((int*)t40)          = t36;
	t42                   = (t37 + 80U);
	*((unsigned int*)t42) = 4U;
	t44                   = (t37 + 56U);
	t45                   = *((char**)t44);
	t46                   = *((int*)t45);
	t44                   = (t43 + 0U);
	t47                   = (t44 + 0U);
	*((int*)t47)          = t46;
	t47                   = (t44 + 4U);
	*((int*)t47)          = 0;
	t47                   = (t44 + 8U);
	*((int*)t47)          = -1;
	t48                   = (0 - t46);
	t49                   = (t48 * -1);
	t49                   = (t49 + 1);
	t47                   = (t44 + 12U);
	*((unsigned int*)t47) = t49;
	t47                   = (t1 + 2728);
	t50                   = (t7 + 364U);
	xsi_create_subtype(t50, ng5, t47, t43, 2);
	t51                   = (t7 + 364U);
	t52                   = (t51 + 80U);
	t53                   = *((char**)t52);
	t54                   = (t53 + 12U);
	t49                   = *((unsigned int*)t54);
	t49                   = (t49 * 1U);
	t56                   = (t7 + 364U);
	t57                   = (t56 + 80U);
	t58                   = *((char**)t57);
	t59                   = (t58 + 0U);
	t60                   = *((int*)t59);
	t61                   = (t7 + 364U);
	t62                   = (t61 + 80U);
	t63                   = *((char**)t62);
	t64                   = (t63 + 4U);
	t65                   = *((int*)t64);
	t66                   = (t7 + 364U);
	t67                   = (t66 + 80U);
	t68                   = *((char**)t67);
	t69                   = (t68 + 8U);
	t70                   = *((int*)t69);
	t71                   = (t55 + 0U);
	t72                   = (t71 + 0U);
	*((int*)t72)          = t60;
	t72                   = (t71 + 4U);
	*((int*)t72)          = t65;
	t72                   = (t71 + 8U);
	*((int*)t72)          = t70;
	t73                   = (t65 - t60);
	t74                   = (t73 * t70);
	t74                   = (t74 + 1);
	t72                   = (t71 + 12U);
	*((unsigned int*)t72) = t74;
	t72                   = (t7 + 476U);
	t75                   = (t7 + 364U);
	t76                   = (t72 + 88U);
	*((char**)t76)        = t75;
	t77                   = (char*)alloca(t49);
	t78                   = (t72 + 56U);
	*((char**)t78)        = t77;
	xsi_type_set_default_value(t75, t77, 0);
	t79                   = (t72 + 64U);
	t80                   = (t75 + 80U);
	t81                   = *((char**)t80);
	*((char**)t79)        = t81;
	t82                   = (t72 + 80U);
	*((unsigned int*)t82) = t49;
	t83                   = (t7 + 596U);
	t84                   = (t7 + 364U);
	t85                   = (t83 + 88U);
	*((char**)t85)        = t84;
	t86                   = (char*)alloca(t49);
	t87                   = (t83 + 56U);
	*((char**)t87)        = t86;
	xsi_type_set_default_value(t84, t86, 0);
	t88                   = (t83 + 64U);
	t89                   = (t84 + 80U);
	t90                   = *((char**)t89);
	*((char**)t88)        = t90;
	t91                   = (t83 + 80U);
	*((unsigned int*)t91) = t49;
	t92                   = (t7 + 716U);
	t93                   = ((IEEE_P_2592010699) + 3224);
	t94                   = (t92 + 88U);
	*((char**)t94)        = t93;
	t96                   = (t92 + 56U);
	*((char**)t96)        = t95;
	xsi_type_set_default_value(t93, t95, 0);
	t97                   = (t92 + 80U);
	*((unsigned int*)t97) = 1U;
	t98                   = (t8 + 4U);
	t99                   = (t3 != 0);
	if(t99 == 1)
		goto LAB3;

LAB2:
	t100            = (t8 + 12U);
	*((char**)t100) = t4;
	t101            = (t8 + 20U);
	t102            = (t5 != 0);
	if(t102 == 1)
		goto LAB5;

LAB4:
	t103            = (t8 + 28U);
	*((char**)t103) = t6;
	t105            = ieee_p_3499444699_sub_3292431343_3536714472(t1, t104, t5, t6);
	t106            = (t26 + 56U);
	t107            = *((char**)t106);
	t106            = (t107 + 0);
	t108            = (t104 + 12U);
	t74             = *((unsigned int*)t108);
	t74             = (t74 * 1U);
	memcpy(t106, t105, t74);
	t9   = (t26 + 56U);
	t13  = *((char**)t9);
	t9   = (t23 + 0U);
	t11  = *((int*)t9);
	t14  = (t23 + 8U);
	t20  = *((int*)t14);
	t21  = (0 - t11);
	t10  = (t21 * t20);
	t22  = (1U * t10);
	t28  = (0 + t22);
	t16  = (t13 + t28);
	t99  = *((unsigned char*)t16);
	t102 = (t99 == (unsigned char)1);
	if(t102 != 0)
		goto LAB6;

LAB8:
LAB7:
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t13 + 0);
	t14 = (t4 + 12U);
	t10 = *((unsigned int*)t14);
	t10 = (t10 * 1U);
	memcpy(t9, t3, t10);
	t9                     = (t4 + 0U);
	t11                    = *((int*)t9);
	t13                    = (t4 + 0U);
	t20                    = *((int*)t13);
	t14                    = (t4 + 8U);
	t21                    = *((int*)t14);
	t25                    = (t11 - t20);
	t10                    = (t25 * t21);
	t22                    = (1U * t10);
	t28                    = (0 + t22);
	t16                    = (t3 + t28);
	t99                    = *((unsigned char*)t16);
	t17                    = (t92 + 56U);
	t18                    = *((char**)t17);
	t17                    = (t18 + 0);
	*((unsigned char*)t17) = t99;
	t9                     = (t12 + 56U);
	t13                    = *((char**)t9);
	t11                    = *((int*)t13);
	t20                    = 0;
	t21                    = t11;

LAB10:
	if(t20 <= t21)
		goto LAB11;

LAB13:
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t55 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t13, t10);
	t14                   = (t55 + 0U);
	t11                   = *((int*)t14);
	t16                   = (t55 + 4U);
	t20                   = *((int*)t16);
	t17                   = (t55 + 8U);
	t21                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t11;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t20;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t21;
	t25                   = (t20 - t11);
	t22                   = (t25 * t21);
	t22                   = (t22 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t22;

LAB1:
	t9 = (t7 + 364U);
	xsi_delete_type(t9, 2);
	return t0;
LAB3:
	*((char**)t98) = t3;
	goto LAB2;

LAB5:
	*((char**)t101) = t5;
	goto LAB4;

LAB6:
	t17 = (t7 + 364U);
	t18 = (t17 + 80U);
	t19 = *((char**)t18);
	t24 = (t19 + 12U);
	t49 = *((unsigned int*)t24);
	t49 = (t49 * 1U);
	t29 = xsi_get_transient_memory(t49);
	memset(t29, 0, t49);
	t30 = t29;
	memset(t30, (unsigned char)1, t49);
	t32 = (t72 + 56U);
	t33 = *((char**)t32);
	t32 = (t33 + 0);
	t34 = (t7 + 364U);
	t35 = (t34 + 80U);
	t38 = *((char**)t35);
	t39 = (t38 + 12U);
	t74 = *((unsigned int*)t39);
	t74 = (t74 * 1U);
	memcpy(t32, t29, t74);
	t9  = (t72 + 56U);
	t13 = *((char**)t9);
	t9  = (t55 + 12U);
	t10 = *((unsigned int*)t9);
	t10 = (t10 * 1U);
	t0  = xsi_get_transient_memory(t10);
	memcpy(t0, t13, t10);
	t14                   = (t55 + 0U);
	t11                   = *((int*)t14);
	t16                   = (t55 + 4U);
	t20                   = *((int*)t16);
	t17                   = (t55 + 8U);
	t21                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t19                   = (t18 + 0U);
	*((int*)t19)          = t11;
	t19                   = (t18 + 4U);
	*((int*)t19)          = t20;
	t19                   = (t18 + 8U);
	*((int*)t19)          = t21;
	t25                   = (t20 - t11);
	t22                   = (t25 * t21);
	t22                   = (t22 + 1);
	t19                   = (t18 + 12U);
	*((unsigned int*)t19) = t22;
	goto LAB1;

LAB9:
	goto LAB7;

LAB11:
	t9  = (t26 + 56U);
	t14 = *((char**)t9);
	t9  = (t23 + 0U);
	t25 = *((int*)t9);
	t16 = (t23 + 8U);
	t27 = *((int*)t16);
	t36 = (t20 - t25);
	t10 = (t36 * t27);
	t17 = (t23 + 4U);
	t46 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t25, t46, t27, t20);
	t22  = (1U * t10);
	t28  = (0 + t22);
	t18  = (t14 + t28);
	t99  = *((unsigned char*)t18);
	t102 = (t99 == (unsigned char)3);
	if(t102 != 0)
		goto LAB14;

LAB16:
LAB15:
LAB12:
	if(t20 == t21)
		goto LAB13;

LAB20:
	t11 = (t20 + 1);
	t20 = t11;
	goto LAB10;

LAB14:
	t19 = (t7 + 364U);
	t24 = (t19 + 80U);
	t29 = *((char**)t24);
	t30 = (t29 + 12U);
	t49 = *((unsigned int*)t30);
	t49 = (t49 * 1U);
	t32 = xsi_get_transient_memory(t49);
	memset(t32, 0, t49);
	t33  = t32;
	t34  = (t92 + 56U);
	t35  = *((char**)t34);
	t109 = *((unsigned char*)t35);
	memset(t33, t109, t49);
	t34 = (t83 + 56U);
	t38 = *((char**)t34);
	t34 = (t38 + 0);
	t39 = (t7 + 364U);
	t41 = (t39 + 80U);
	t42 = *((char**)t41);
	t44 = (t42 + 12U);
	t74 = *((unsigned int*)t44);
	t74 = (t74 * 1U);
	memcpy(t34, t32, t74);
	t11 = xsi_vhdl_pow(2, t20);
	t9  = (t37 + 56U);
	t13 = *((char**)t9);
	t25 = *((int*)t13);
	t99 = (t11 <= t25);
	if(t99 != 0)
		goto LAB17;

LAB19:
LAB18:
	t9  = (t83 + 56U);
	t13 = *((char**)t9);
	t9  = (t72 + 56U);
	t14 = *((char**)t9);
	t9  = (t14 + 0);
	t16 = (t55 + 12U);
	t10 = *((unsigned int*)t16);
	t10 = (t10 * 1U);
	memcpy(t9, t13, t10);
	goto LAB15;

LAB17:
	t9  = (t72 + 56U);
	t14 = *((char**)t9);
	t9  = (t55 + 0U);
	t27 = *((int*)t9);
	t16 = (t37 + 56U);
	t17 = *((char**)t16);
	t36 = *((int*)t17);
	t10 = (t27 - t36);
	t46 = xsi_vhdl_pow(2, t20);
	t16 = (t55 + 4U);
	t48 = *((int*)t16);
	t18 = (t55 + 8U);
	t60 = *((int*)t18);
	xsi_vhdl_check_range_of_slice(t27, t48, t60, t36, t46, -1);
	t22  = (t10 * 1U);
	t28  = (0 + t22);
	t19  = (t14 + t28);
	t24  = (t83 + 56U);
	t29  = *((char**)t24);
	t24  = (t55 + 0U);
	t65  = *((int*)t24);
	t30  = (t37 + 56U);
	t32  = *((char**)t30);
	t70  = *((int*)t32);
	t73  = xsi_vhdl_pow(2, t20);
	t110 = (t70 - t73);
	t49  = (t65 - t110);
	t30  = (t55 + 4U);
	t111 = *((int*)t30);
	t33  = (t55 + 8U);
	t112 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t65, t111, t112, t110, 0, -1);
	t74  = (t49 * 1U);
	t113 = (0 + t74);
	t34  = (t29 + t113);
	t35  = (t37 + 56U);
	t38  = *((char**)t35);
	t114 = *((int*)t38);
	t115 = xsi_vhdl_pow(2, t20);
	t116 = (t115 - t114);
	t117 = (t116 * -1);
	t117 = (t117 + 1);
	t118 = (1U * t117);
	memcpy(t34, t19, t118);
	goto LAB18;

LAB21:;
}

int ieee_p_3499444699_sub_252593879_3536714472(char* t1, int t2)
{
	char  t4[8];
	int   t0;
	char* t5;

LAB0:
	t5          = (t4 + 4U);
	*((int*)t5) = t2;
	t0          = t2;

LAB1:
	return t0;
LAB2:;
}

int ieee_p_3499444699_sub_403572219_3536714472(char* t1, char* t2, char* t3)
{
	char          t4[248];
	char          t5[24];
	char          t9[8];
	char          t15[8];
	int           t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	char*         t18;
	unsigned char t19;
	char*         t20;
	char*         t21;
	unsigned int  t22;
	unsigned char t23;
	char*         t24;
	int           t26;
	int           t27;
	int           t28;
	int           t29;
	int           t30;
	int           t31;
	int           t32;
	int           t33;
	int           t34;
	unsigned int  t35;
	unsigned int  t36;
	unsigned int  t37;
	unsigned int  t38;
	unsigned int  t39;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((STD_STANDARD) + 384);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 4U;
	t12                   = (t4 + 124U);
	t13                   = ((IEEE_P_2592010699) + 3224);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	xsi_type_set_default_value(t13, t15, 0);
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 1U;
	t18                   = (t5 + 4U);
	t19                   = (t2 != 0);
	if(t19 == 1)
		goto LAB3;

LAB2:
	t20            = (t5 + 12U);
	*((char**)t20) = t3;
	t21            = (t3 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = (t22 <= 31);
	if(t23 == 0)
		goto LAB4;

LAB5:
	t7          = (t6 + 56U);
	t8          = *((char**)t7);
	t7          = (t8 + 0);
	*((int*)t7) = 0;
	t7          = (t3 + 8U);
	t26         = *((int*)t7);
	t8          = (t3 + 4U);
	t27         = *((int*)t8);
	t10         = (t3 + 0U);
	t28         = *((int*)t10);
	t29         = t28;
	t30         = t27;

LAB6:
	t31 = (t30 * t26);
	t32 = (t29 * t26);
	if(t32 <= t31)
		goto LAB7;

LAB9:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t26 = *((int*)t8);
	t0  = t26;

LAB1:
	return t0;
LAB3:
	*((char**)t18) = t2;
	goto LAB2;

LAB4:
	t24 = (t1 + 5464);
	xsi_report(t24, 32U, (unsigned char)3);
	goto LAB5;

LAB7:
	t11          = (t6 + 56U);
	t13          = *((char**)t11);
	t33          = *((int*)t13);
	t34          = (t33 * 2);
	t11          = (t6 + 56U);
	t14          = *((char**)t11);
	t11          = (t14 + 0);
	*((int*)t11) = t34;
	t7           = (t1 + 1168U);
	t8           = *((char**)t7);
	t7           = (t3 + 0U);
	t27          = *((int*)t7);
	t10          = (t3 + 8U);
	t28          = *((int*)t10);
	t31          = (t29 - t27);
	t22          = (t31 * t28);
	t35          = (1U * t22);
	t36          = (0 + t35);
	t11          = (t2 + t36);
	t19          = *((unsigned char*)t11);
	t32          = (t19 - 0);
	t37          = (t32 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t19);
	t38                    = (1U * t37);
	t39                    = (0 + t38);
	t13                    = (t8 + t39);
	t23                    = *((unsigned char*)t13);
	t14                    = (t12 + 56U);
	t16                    = *((char**)t14);
	t14                    = (t16 + 0);
	*((unsigned char*)t14) = t23;
	t7                     = (t12 + 56U);
	t8                     = *((char**)t7);
	t19                    = *((unsigned char*)t8);
	t23                    = (t19 == (unsigned char)3);
	if(t23 != 0)
		goto LAB10;

LAB12:
	t7  = (t12 + 56U);
	t8  = *((char**)t7);
	t19 = *((unsigned char*)t8);
	t23 = (t19 == (unsigned char)1);
	if(t23 != 0)
		goto LAB13;

LAB14:
LAB11:
LAB8:
	if(t29 == t30)
		goto LAB9;

LAB20:
	t27 = (t29 + t26);
	t29 = t27;
	goto LAB6;

LAB10:
	t7          = (t6 + 56U);
	t10         = *((char**)t7);
	t27         = *((int*)t10);
	t28         = (t27 + 1);
	t7          = (t6 + 56U);
	t11         = *((char**)t7);
	t7          = (t11 + 0);
	*((int*)t7) = t28;
	goto LAB11;

LAB13:
	if((unsigned char)0 == 0)
		goto LAB15;

LAB16:
	if((unsigned char)0 == 0)
		goto LAB17;

LAB18:
	t0 = 0;
	goto LAB1;

LAB15:
	t7 = (t1 + 5496);
	xsi_report(t7, 85U, (unsigned char)1);
	goto LAB16;

LAB17:
	t7 = (t1 + 5581);
	xsi_report(t7, 103U, (unsigned char)1);
	goto LAB18;

LAB19:
	goto LAB11;

LAB21:;
}

int ieee_p_3499444699_sub_879098320_3536714472(char* t1, char* t2, char* t3)
{
	char          t4[248];
	char          t5[24];
	char          t9[8];
	char          t15[8];
	int           t0;
	char*         t6;
	char*         t7;
	char*         t8;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	char*         t18;
	unsigned char t19;
	char*         t20;
	char*         t21;
	unsigned int  t22;
	unsigned char t23;
	char*         t24;
	int           t26;
	int           t27;
	int           t28;
	int           t29;
	int           t30;
	int           t31;
	int           t32;
	int           t33;
	int           t34;
	int           t35;
	unsigned int  t36;
	unsigned int  t37;
	unsigned int  t38;
	unsigned int  t39;
	unsigned int  t40;
	unsigned char t41;

LAB0:
	t6             = (t4 + 4U);
	t7             = ((STD_STANDARD) + 384);
	t8             = (t6 + 88U);
	*((char**)t8)  = t7;
	t10            = (t6 + 56U);
	*((char**)t10) = t9;
	xsi_type_set_default_value(t7, t9, 0);
	t11                   = (t6 + 80U);
	*((unsigned int*)t11) = 4U;
	t12                   = (t4 + 124U);
	t13                   = ((IEEE_P_2592010699) + 3224);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	xsi_type_set_default_value(t13, t15, 0);
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 1U;
	t18                   = (t5 + 4U);
	t19                   = (t2 != 0);
	if(t19 == 1)
		goto LAB3;

LAB2:
	t20            = (t5 + 12U);
	*((char**)t20) = t3;
	t21            = (t3 + 12U);
	t22            = *((unsigned int*)t21);
	t23            = (t22 <= 32);
	if(t23 == 0)
		goto LAB4;

LAB5:
	t7          = (t6 + 56U);
	t8          = *((char**)t7);
	t7          = (t8 + 0);
	*((int*)t7) = 0;
	t7          = (t3 + 8U);
	t26         = *((int*)t7);
	t8          = (t3 + 4U);
	t27         = *((int*)t8);
	t10         = (t3 + 0U);
	t28         = *((int*)t10);
	t29         = t28;
	t30         = t27;

LAB6:
	t31 = (t30 * t26);
	t32 = (t29 * t26);
	if(t32 <= t31)
		goto LAB7;

LAB9:
	t7                     = (t3 + 0U);
	t26                    = *((int*)t7);
	t8                     = (t3 + 0U);
	t27                    = *((int*)t8);
	t10                    = (t3 + 8U);
	t28                    = *((int*)t10);
	t29                    = (t26 - t27);
	t22                    = (t29 * t28);
	t36                    = (1U * t22);
	t37                    = (0 + t36);
	t11                    = (t2 + t37);
	t19                    = *((unsigned char*)t11);
	t23                    = ieee_p_3499444699_sub_2035181919_3536714472(t1, t19);
	t13                    = (t12 + 56U);
	t14                    = *((char**)t13);
	t13                    = (t14 + 0);
	*((unsigned char*)t13) = t23;
	t7                     = (t12 + 56U);
	t8                     = *((char**)t7);
	t19                    = *((unsigned char*)t8);
	t23                    = (t19 == (unsigned char)3);
	if(t23 != 0)
		goto LAB24;

LAB26:
LAB25:
	t7  = (t6 + 56U);
	t8  = *((char**)t7);
	t26 = *((int*)t8);
	t0  = t26;

LAB1:
	return t0;
LAB3:
	*((char**)t18) = t2;
	goto LAB2;

LAB4:
	t24 = (t1 + 5684);
	xsi_report(t24, 32U, (unsigned char)3);
	goto LAB5;

LAB7:
	t11 = (t3 + 0U);
	t33 = *((int*)t11);
	t19 = (t29 != t33);
	if(t19 != 0)
		goto LAB10;

LAB12:
LAB11:
LAB8:
	if(t29 == t30)
		goto LAB9;

LAB23:
	t27 = (t29 + t26);
	t29 = t27;
	goto LAB6;

LAB10:
	t13          = (t6 + 56U);
	t14          = *((char**)t13);
	t34          = *((int*)t14);
	t35          = (t34 * 2);
	t13          = (t6 + 56U);
	t16          = *((char**)t13);
	t13          = (t16 + 0);
	*((int*)t13) = t35;
	t7           = (t1 + 1168U);
	t8           = *((char**)t7);
	t7           = (t3 + 0U);
	t27          = *((int*)t7);
	t10          = (t3 + 8U);
	t28          = *((int*)t10);
	t31          = (t29 - t27);
	t22          = (t31 * t28);
	t36          = (1U * t22);
	t37          = (0 + t36);
	t11          = (t2 + t37);
	t19          = *((unsigned char*)t11);
	t32          = (t19 - 0);
	t38          = (t32 * 1);
	xsi_vhdl_check_range_of_index(0, 8, 1, t19);
	t39                    = (1U * t38);
	t40                    = (0 + t39);
	t13                    = (t8 + t40);
	t23                    = *((unsigned char*)t13);
	t14                    = (t12 + 56U);
	t16                    = *((char**)t14);
	t14                    = (t16 + 0);
	*((unsigned char*)t14) = t23;
	t7                     = (t12 + 56U);
	t8                     = *((char**)t7);
	t19                    = *((unsigned char*)t8);
	t23                    = (t19 == (unsigned char)3);
	if(t23 != 0)
		goto LAB13;

LAB15:
	t7  = (t12 + 56U);
	t8  = *((char**)t7);
	t19 = *((unsigned char*)t8);
	t23 = (t19 == (unsigned char)1);
	if(t23 != 0)
		goto LAB16;

LAB17:
LAB14:
	goto LAB11;

LAB13:
	t7          = (t6 + 56U);
	t10         = *((char**)t7);
	t27         = *((int*)t10);
	t28         = (t27 + 1);
	t7          = (t6 + 56U);
	t11         = *((char**)t7);
	t7          = (t11 + 0);
	*((int*)t7) = t28;
	goto LAB14;

LAB16:
	if((unsigned char)0 == 0)
		goto LAB18;

LAB19:
	if((unsigned char)0 == 0)
		goto LAB20;

LAB21:
	t0 = 0;
	goto LAB1;

LAB18:
	t7 = (t1 + 5716);
	xsi_report(t7, 85U, (unsigned char)1);
	goto LAB19;

LAB20:
	t7 = (t1 + 5801);
	xsi_report(t7, 103U, (unsigned char)1);
	goto LAB21;

LAB22:
	goto LAB14;

LAB24:
	t7  = (t3 + 12U);
	t22 = *((unsigned int*)t7);
	t41 = (t22 == 32);
	if(t41 != 0)
		goto LAB27;

LAB29:
	t7           = (t6 + 56U);
	t8           = *((char**)t7);
	t26          = *((int*)t8);
	t7           = (t3 + 12U);
	t22          = *((unsigned int*)t7);
	t27          = (t22 - 1);
	t28          = xsi_vhdl_pow(2, t27);
	t29          = (t26 - t28);
	t10          = (t6 + 56U);
	t11          = *((char**)t10);
	t10          = (t11 + 0);
	*((int*)t10) = t29;

LAB28:
	goto LAB25;

LAB27:
	t10          = (t6 + 56U);
	t11          = *((char**)t10);
	t26          = *((int*)t11);
	t27          = xsi_vhdl_pow(2, 30);
	t28          = (t26 - t27);
	t29          = xsi_vhdl_pow(2, 30);
	t30          = (t28 - t29);
	t10          = (t6 + 56U);
	t13          = *((char**)t10);
	t10          = (t13 + 0);
	*((int*)t10) = t30;
	goto LAB28;

LAB30:;
}

int ieee_p_3499444699_sub_829756913_3536714472(char* t1, unsigned char t2)
{
	char          t3[248];
	char          t4[8];
	char          t8[8];
	char          t14[8];
	int           t0;
	char*         t5;
	char*         t6;
	char*         t7;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t12;
	char*         t13;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	int           t20;
	unsigned int  t21;
	unsigned int  t22;
	unsigned int  t23;
	unsigned char t24;
	char*         t25;
	char*         t26;
	unsigned char t27;

LAB0:
	t5            = (t3 + 4U);
	t6            = ((IEEE_P_2592010699) + 3224);
	t7            = (t5 + 88U);
	*((char**)t7) = t6;
	t9            = (t5 + 56U);
	*((char**)t9) = t8;
	xsi_type_set_default_value(t6, t8, 0);
	t10                   = (t5 + 80U);
	*((unsigned int*)t10) = 1U;
	t11                   = (t3 + 124U);
	t12                   = (t1 + 3488);
	t13                   = (t11 + 88U);
	*((char**)t13)        = t12;
	t15                   = (t11 + 56U);
	*((char**)t15)        = t14;
	xsi_type_set_default_value(t12, t14, 0);
	t16                    = (t11 + 80U);
	*((unsigned int*)t16)  = 4U;
	t17                    = (t4 + 4U);
	*((unsigned char*)t17) = t2;
	t18                    = (t1 + 1168U);
	t19                    = *((char**)t18);
	t20                    = (t2 - 0);
	t21                    = (t20 * 1);
	t22                    = (1U * t21);
	t23                    = (0 + t22);
	t18                    = (t19 + t23);
	t24                    = *((unsigned char*)t18);
	t25                    = (t5 + 56U);
	t26                    = *((char**)t25);
	t25                    = (t26 + 0);
	*((unsigned char*)t25) = t24;
	t6                     = (t5 + 56U);
	t7                     = *((char**)t6);
	t24                    = *((unsigned char*)t7);
	t27                    = (t24 == (unsigned char)3);
	if(t27 != 0)
		goto LAB2;

LAB4:
	t6  = (t5 + 56U);
	t7  = *((char**)t6);
	t24 = *((unsigned char*)t7);
	t27 = (t24 == (unsigned char)1);
	if(t27 != 0)
		goto LAB5;

LAB6:
	t6          = (t11 + 56U);
	t7          = *((char**)t6);
	t6          = (t7 + 0);
	*((int*)t6) = 0;

LAB3:
	t6  = (t11 + 56U);
	t7  = *((char**)t6);
	t20 = *((int*)t7);
	t0  = t20;

LAB1:
	return t0;
LAB2:
	t6          = (t11 + 56U);
	t9          = *((char**)t6);
	t6          = (t9 + 0);
	*((int*)t6) = 1;
	goto LAB3;

LAB5:
	if((unsigned char)0 == 0)
		goto LAB7;

LAB8:
	t6          = (t11 + 56U);
	t7          = *((char**)t6);
	t6          = (t7 + 0);
	*((int*)t6) = 0;
	goto LAB3;

LAB7:
	t6 = (t1 + 5904);
	xsi_report(t6, 103U, (unsigned char)1);
	goto LAB8;

LAB9:;
}

char* ieee_p_3499444699_sub_2169654707_3536714472(char* t1, char* t2, int t3, int t4)
{
	char          t5[248];
	char          t6[16];
	char          t10[16];
	char          t25[8];
	char*         t0;
	int           t7;
	int           t8;
	unsigned int  t9;
	int           t11;
	char*         t12;
	char*         t13;
	int           t14;
	unsigned int  t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	unsigned int  t38;

LAB0:
	t7                    = (t4 - 1);
	t8                    = (0 - t7);
	t9                    = (t8 * -1);
	t9                    = (t9 + 1);
	t9                    = (t9 * 1U);
	t11                   = (t4 - 1);
	t12                   = (t10 + 0U);
	t13                   = (t12 + 0U);
	*((int*)t13)          = t11;
	t13                   = (t12 + 4U);
	*((int*)t13)          = 0;
	t13                   = (t12 + 8U);
	*((int*)t13)          = -1;
	t14                   = (0 - t11);
	t15                   = (t14 * -1);
	t15                   = (t15 + 1);
	t13                   = (t12 + 12U);
	*((unsigned int*)t13) = t15;
	t13                   = (t5 + 4U);
	t16                   = (t1 + 2616);
	t17                   = (t13 + 88U);
	*((char**)t17)        = t16;
	t18                   = (char*)alloca(t9);
	t19                   = (t13 + 56U);
	*((char**)t19)        = t18;
	xsi_type_set_default_value(t16, t18, t10);
	t20                   = (t13 + 64U);
	*((char**)t20)        = t10;
	t21                   = (t13 + 80U);
	*((unsigned int*)t21) = t9;
	t22                   = (t5 + 124U);
	t23                   = ((STD_STANDARD) + 384);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 4U;
	t28                   = (t6 + 4U);
	*((int*)t28)          = t3;
	t29                   = (t6 + 8U);
	*((int*)t29)          = t4;
	t30                   = (t22 + 56U);
	t31                   = *((char**)t30);
	t30                   = (t31 + 0);
	*((int*)t30)          = t3;
	t7                    = (t4 - 1);
	t8                    = 0;
	t11                   = t7;

LAB2:
	if(t8 <= t11)
		goto LAB3;

LAB5:
	t12 = (t13 + 56U);
	t16 = *((char**)t12);
	t12 = (t10 + 12U);
	t9  = *((unsigned int*)t12);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t16, t9);
	t17                   = (t10 + 0U);
	t7                    = *((int*)t17);
	t19                   = (t10 + 4U);
	t8                    = *((int*)t19);
	t20                   = (t10 + 8U);
	t11                   = *((int*)t20);
	t21                   = (t2 + 0U);
	t23                   = (t21 + 0U);
	*((int*)t23)          = t7;
	t23                   = (t21 + 4U);
	*((int*)t23)          = t8;
	t23                   = (t21 + 8U);
	*((int*)t23)          = t11;
	t14                   = (t8 - t7);
	t15                   = (t14 * t11);
	t15                   = (t15 + 1);
	t23                   = (t21 + 12U);
	*((unsigned int*)t23) = t15;

LAB1:
	return t0;
LAB3:
	t12 = (t22 + 56U);
	t16 = *((char**)t12);
	t14 = *((int*)t16);
	t32 = xsi_vhdl_mod(t14, 2);
	t33 = (t32 == 1);
	if(t33 != 0)
		goto LAB6;

LAB8:
	t12 = (t13 + 56U);
	t16 = *((char**)t12);
	t12 = (t10 + 0U);
	t7  = *((int*)t12);
	t17 = (t10 + 8U);
	t14 = *((int*)t17);
	t32 = (t8 - t7);
	t9  = (t32 * t14);
	t19 = (t10 + 4U);
	t34 = *((int*)t19);
	xsi_vhdl_check_range_of_index(t7, t34, t14, t8);
	t15                    = (1U * t9);
	t38                    = (0 + t15);
	t20                    = (t16 + t38);
	*((unsigned char*)t20) = (unsigned char)2;

LAB7:
	t12 = (t22 + 56U);
	t16 = *((char**)t12);
	t7  = *((int*)t16);
	t33 = (t7 > 0);
	if(t33 != 0)
		goto LAB9;

LAB11:
	t12          = (t22 + 56U);
	t16          = *((char**)t12);
	t7           = *((int*)t16);
	t14          = (t7 - 1);
	t32          = (t14 / 2);
	t12          = (t22 + 56U);
	t17          = *((char**)t12);
	t12          = (t17 + 0);
	*((int*)t12) = t32;

LAB10:
LAB4:
	if(t8 == t11)
		goto LAB5;

LAB12:
	t7 = (t8 + 1);
	t8 = t7;
	goto LAB2;

LAB6:
	t12 = (t13 + 56U);
	t17 = *((char**)t12);
	t12 = (t10 + 0U);
	t34 = *((int*)t12);
	t19 = (t10 + 8U);
	t35 = *((int*)t19);
	t36 = (t8 - t34);
	t9  = (t36 * t35);
	t20 = (t10 + 4U);
	t37 = *((int*)t20);
	xsi_vhdl_check_range_of_index(t34, t37, t35, t8);
	t15                    = (1U * t9);
	t38                    = (0 + t15);
	t21                    = (t17 + t38);
	*((unsigned char*)t21) = (unsigned char)3;
	goto LAB7;

LAB9:
	t12          = (t22 + 56U);
	t17          = *((char**)t12);
	t14          = *((int*)t17);
	t32          = (t14 / 2);
	t12          = (t22 + 56U);
	t19          = *((char**)t12);
	t12          = (t19 + 0);
	*((int*)t12) = t32;
	goto LAB10;

LAB13:;
}

char* ieee_p_3499444699_sub_2251616255_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[368];
	char          t7[24];
	char          t12[8];
	char          t19[8];
	char          t27[16];
	char          t39[16];
	char*         t0;
	int           t8;
	char*         t9;
	char*         t10;
	char*         t11;
	char*         t13;
	char*         t14;
	int           t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	int           t24;
	int           t25;
	unsigned int  t26;
	char*         t28;
	int           t29;
	char*         t30;
	int           t31;
	unsigned int  t32;
	char*         t33;
	char*         t34;
	char*         t35;
	char*         t36;
	char*         t37;
	char*         t38;
	char*         t40;
	int           t41;
	char*         t42;
	char*         t43;
	int           t44;
	unsigned int  t45;
	unsigned char t46;
	char*         t47;
	char*         t48;
	char*         t49;
	unsigned char t50;
	char*         t51;
	char*         t52;
	char*         t53;
	unsigned int  t54;
	unsigned int  t55;
	unsigned int  t56;
	unsigned int  t57;
	unsigned int  t58;
	unsigned int  t59;
	unsigned int  t60;
	static char*  nl0[] = {
        &&LAB14, &&LAB14, &&LAB17, &&LAB17, &&LAB14, &&LAB14, &&LAB15, &&LAB16, &&LAB14};

LAB0:
	t8                    = (t5 - 1);
	t9                    = (t6 + 4U);
	t10                   = ((STD_STANDARD) + 384);
	t11                   = (t9 + 88U);
	*((char**)t11)        = t10;
	t13                   = (t9 + 56U);
	*((char**)t13)        = t12;
	*((int*)t12)          = t8;
	t14                   = (t9 + 80U);
	*((unsigned int*)t14) = 4U;
	t15                   = (t5 - 1);
	t16                   = (t6 + 124U);
	t17                   = ((STD_STANDARD) + 384);
	t18                   = (t16 + 88U);
	*((char**)t18)        = t17;
	t20                   = (t16 + 56U);
	*((char**)t20)        = t19;
	*((int*)t19)          = t15;
	t21                   = (t16 + 80U);
	*((unsigned int*)t21) = 4U;
	t22                   = (t16 + 56U);
	t23                   = *((char**)t22);
	t24                   = *((int*)t23);
	t25                   = (0 - t24);
	t26                   = (t25 * -1);
	t26                   = (t26 + 1);
	t26                   = (t26 * 1U);
	t22                   = (t16 + 56U);
	t28                   = *((char**)t22);
	t29                   = *((int*)t28);
	t22                   = (t27 + 0U);
	t30                   = (t22 + 0U);
	*((int*)t30)          = t29;
	t30                   = (t22 + 4U);
	*((int*)t30)          = 0;
	t30                   = (t22 + 8U);
	*((int*)t30)          = -1;
	t31                   = (0 - t29);
	t32                   = (t31 * -1);
	t32                   = (t32 + 1);
	t30                   = (t22 + 12U);
	*((unsigned int*)t30) = t32;
	t30                   = (t6 + 244U);
	t33                   = (t1 + 2616);
	t34                   = (t30 + 88U);
	*((char**)t34)        = t33;
	t35                   = (char*)alloca(t26);
	t36                   = (t30 + 56U);
	*((char**)t36)        = t35;
	xsi_type_set_default_value(t33, t35, t27);
	t37                   = (t30 + 64U);
	*((char**)t37)        = t27;
	t38                   = (t30 + 80U);
	*((unsigned int*)t38) = t26;
	t40                   = (t4 + 12U);
	t32                   = *((unsigned int*)t40);
	t41                   = (t32 - 1);
	t42                   = (t39 + 0U);
	t43                   = (t42 + 0U);
	*((int*)t43)          = t41;
	t43                   = (t42 + 4U);
	*((int*)t43)          = 0;
	t43                   = (t42 + 8U);
	*((int*)t43)          = -1;
	t44                   = (0 - t41);
	t45                   = (t44 * -1);
	t45                   = (t45 + 1);
	t43                   = (t42 + 12U);
	*((unsigned int*)t43) = t45;
	t43                   = (t7 + 4U);
	t46                   = (t3 != 0);
	if(t46 == 1)
		goto LAB3;

LAB2:
	t47            = (t7 + 12U);
	*((char**)t47) = t4;
	t48            = (t7 + 20U);
	*((int*)t48)   = t5;
	t49            = (t4 + 12U);
	t45            = *((unsigned int*)t49);
	t50            = (t45 == t5);
	if(t50 != 0)
		goto LAB4;

LAB6:
	t10 = (t4 + 12U);
	t26 = *((unsigned int*)t10);
	t46 = (t26 > t5);
	if(t46 != 0)
		goto LAB7;

LAB8:
	t10 = (t30 + 56U);
	t11 = *((char**)t10);
	t10 = (t27 + 0U);
	t8  = *((int*)t10);
	t13 = (t4 + 12U);
	t26 = *((unsigned int*)t13);
	t15 = (t26 - 1);
	t32 = (t8 - t15);
	t14 = (t27 + 4U);
	t24 = *((int*)t14);
	t17 = (t27 + 8U);
	t25 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t8, t24, t25, t15, 0, -1);
	t45 = (t32 * 1U);
	t54 = (0 + t45);
	t18 = (t11 + t54);
	t20 = (t4 + 12U);
	t55 = *((unsigned int*)t20);
	t55 = (t55 * 1U);
	memcpy(t18, t3, t55);
	t8  = (t5 - 1);
	t10 = (t4 + 12U);
	t26 = *((unsigned int*)t10);
	t15 = (t26 - t8);
	t32 = (t15 * -1);
	t32 = (t32 + 1);
	t45 = (1U * t32);
	t11 = xsi_get_transient_memory(t45);
	memset(t11, 0, t45);
	t13 = t11;
	memset(t13, (unsigned char)2, t45);
	t14 = (t30 + 56U);
	t17 = *((char**)t14);
	t14 = (t27 + 0U);
	t24 = *((int*)t14);
	t25 = (t5 - 1);
	t54 = (t24 - t25);
	t18 = (t4 + 12U);
	t55 = *((unsigned int*)t18);
	t20 = (t27 + 4U);
	t29 = *((int*)t20);
	t21 = (t27 + 8U);
	t31 = *((int*)t21);
	xsi_vhdl_check_range_of_slice(t24, t29, t31, t25, t55, -1);
	t56 = (t54 * 1U);
	t57 = (0 + t56);
	t22 = (t17 + t57);
	t41 = (t5 - 1);
	t23 = (t4 + 12U);
	t58 = *((unsigned int*)t23);
	t44 = (t58 - t41);
	t59 = (t44 * -1);
	t59 = (t59 + 1);
	t60 = (1U * t59);
	memcpy(t22, t11, t60);
	t10          = (t4 + 12U);
	t26          = *((unsigned int*)t10);
	t8           = (t26 - 1);
	t11          = (t9 + 56U);
	t13          = *((char**)t11);
	t11          = (t13 + 0);
	*((int*)t11) = t8;

LAB5:
	t10 = (t9 + 56U);
	t11 = *((char**)t10);
	t8  = *((int*)t11);
	t15 = t8;
	t24 = 0;

LAB9:
	if(t15 >= t24)
		goto LAB10;

LAB12:
	t10 = (t30 + 56U);
	t11 = *((char**)t10);
	t10 = (t27 + 12U);
	t26 = *((unsigned int*)t10);
	t26 = (t26 * 1U);
	t0  = xsi_get_transient_memory(t26);
	memcpy(t0, t11, t26);
	t13                   = (t27 + 0U);
	t8                    = *((int*)t13);
	t14                   = (t27 + 4U);
	t15                   = *((int*)t14);
	t17                   = (t27 + 8U);
	t24                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t20                   = (t18 + 0U);
	*((int*)t20)          = t8;
	t20                   = (t18 + 4U);
	*((int*)t20)          = t15;
	t20                   = (t18 + 8U);
	*((int*)t20)          = t24;
	t25                   = (t15 - t8);
	t32                   = (t25 * t24);
	t32                   = (t32 + 1);
	t20                   = (t18 + 12U);
	*((unsigned int*)t20) = t32;

LAB1:
	return t0;
LAB3:
	*((char**)t43) = t3;
	goto LAB2;

LAB4:
	t51 = (t30 + 56U);
	t52 = *((char**)t51);
	t51 = (t52 + 0);
	t53 = (t4 + 12U);
	t54 = *((unsigned int*)t53);
	t54 = (t54 * 1U);
	memcpy(t51, t3, t54);
	goto LAB5;

LAB7:
	t11 = (t3 + 0);
	t13 = (t39 + 0U);
	t8  = *((int*)t13);
	t15 = (t5 - 1);
	t32 = (t8 - t15);
	t14 = (t39 + 4U);
	t24 = *((int*)t14);
	t17 = (t39 + 8U);
	t25 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t8, t24, t25, t15, 0, -1);
	t45 = (t32 * 1U);
	t54 = (0 + t45);
	t18 = (t11 + t54);
	t20 = (t30 + 56U);
	t21 = *((char**)t20);
	t20 = (t21 + 0);
	t29 = (t5 - 1);
	t31 = (0 - t29);
	t55 = (t31 * -1);
	t55 = (t55 + 1);
	t56 = (1U * t55);
	memcpy(t20, t18, t56);
	goto LAB5;

LAB10:
	t10 = (t30 + 56U);
	t13 = *((char**)t10);
	t10 = (t27 + 0U);
	t25 = *((int*)t10);
	t14 = (t27 + 8U);
	t29 = *((int*)t14);
	t31 = (t15 - t25);
	t26 = (t31 * t29);
	t17 = (t27 + 4U);
	t41 = *((int*)t17);
	xsi_vhdl_check_range_of_index(t25, t41, t29, t15);
	t32 = (1U * t26);
	t45 = (0 + t32);
	t18 = (t13 + t45);
	t46 = *((unsigned char*)t18);
	t20 = (char*)((nl0) + t46);
	goto**((char**)t20);

LAB11:
	if(t15 == t24)
		goto LAB12;

LAB21:
	t8  = (t15 + -1);
	t15 = t8;
	goto LAB9;

LAB13:
	goto LAB11;

LAB14:
	if((unsigned char)0 == 0)
		goto LAB18;

LAB19:
	t10 = (t27 + 12U);
	t26 = *((unsigned int*)t10);
	t26 = (t26 * 1U);
	t11 = xsi_get_transient_memory(t26);
	memset(t11, 0, t26);
	t13 = t11;
	memset(t13, (unsigned char)1, t26);
	t14 = (t30 + 56U);
	t17 = *((char**)t14);
	t14 = (t17 + 0);
	t18 = (t27 + 12U);
	t32 = *((unsigned int*)t18);
	t32 = (t32 * 1U);
	memcpy(t14, t11, t32);
	t10 = (t30 + 56U);
	t11 = *((char**)t10);
	t10 = (t27 + 12U);
	t26 = *((unsigned int*)t10);
	t26 = (t26 * 1U);
	t0  = xsi_get_transient_memory(t26);
	memcpy(t0, t11, t26);
	t13                   = (t27 + 0U);
	t8                    = *((int*)t13);
	t14                   = (t27 + 4U);
	t25                   = *((int*)t14);
	t17                   = (t27 + 8U);
	t29                   = *((int*)t17);
	t18                   = (t2 + 0U);
	t20                   = (t18 + 0U);
	*((int*)t20)          = t8;
	t20                   = (t18 + 4U);
	*((int*)t20)          = t25;
	t20                   = (t18 + 8U);
	*((int*)t20)          = t29;
	t31                   = (t25 - t8);
	t32                   = (t31 * t29);
	t32                   = (t32 + 1);
	t20                   = (t18 + 12U);
	*((unsigned int*)t20) = t32;
	goto LAB1;

LAB15:
	t10 = (t30 + 56U);
	t11 = *((char**)t10);
	t10 = (t27 + 0U);
	t8  = *((int*)t10);
	t13 = (t27 + 8U);
	t25 = *((int*)t13);
	t29 = (t15 - t8);
	t26 = (t29 * t25);
	t14 = (t27 + 4U);
	t31 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t8, t31, t25, t15);
	t32                    = (1U * t26);
	t45                    = (0 + t32);
	t17                    = (t11 + t45);
	*((unsigned char*)t17) = (unsigned char)2;
	goto LAB13;

LAB16:
	t10 = (t30 + 56U);
	t11 = *((char**)t10);
	t10 = (t27 + 0U);
	t8  = *((int*)t10);
	t13 = (t27 + 8U);
	t25 = *((int*)t13);
	t29 = (t15 - t8);
	t26 = (t29 * t25);
	t14 = (t27 + 4U);
	t31 = *((int*)t14);
	xsi_vhdl_check_range_of_index(t8, t31, t25, t15);
	t32                    = (1U * t26);
	t45                    = (0 + t32);
	t17                    = (t11 + t45);
	*((unsigned char*)t17) = (unsigned char)3;
	goto LAB13;

LAB17:
	goto LAB13;

LAB18:
	t21 = (t1 + 6007);
	xsi_report(t21, 85U, (unsigned char)1);
	goto LAB19;

LAB20:
	goto LAB13;

LAB22:;
}

char* ieee_p_3499444699_sub_2191728911_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = (t1 + 2616);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = (t1 + 2616);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_3176690709_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	t21 = (t34 + 56U);
	t24 = *((char**)t21);
	t21 = (t29 + 0U);
	t10 = *((int*)t21);
	t25 = (t29 + 0U);
	t11 = *((int*)t25);
	t30 = (t29 + 8U);
	t19 = *((int*)t30);
	t22 = (t10 - t11);
	t23 = (t22 * t19);
	t28 = (1U * t23);
	t31 = (0 + t28);
	t33 = (t24 + t31);
	t76 = *((unsigned char*)t33);
	memset(t20, t76, t9);
	t37 = (t64 + 56U);
	t38 = *((char**)t37);
	t37 = (t38 + 0);
	t40 = (t6 + 124U);
	t41 = (t40 + 80U);
	t42 = *((char**)t41);
	t43 = (t42 + 12U);
	t36 = *((unsigned int*)t43);
	t36 = (t36 * 1U);
	memcpy(t37, t17, t36);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

char* ieee_p_3499444699_sub_2596859466_3536714472(char*         t1,
                                                  char*         t2,
                                                  unsigned char t3,
                                                  int           t4)
{
	char          t5[240];
	char          t6[16];
	char          t7[16];
	char          t18[16];
	char*         t0;
	int           t8;
	char*         t9;
	char*         t10;
	int           t11;
	unsigned int  t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
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
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	unsigned int  t60;
	unsigned char t61;
	unsigned char t62;
	unsigned int  t63;
	unsigned int  t64;

LAB0:
	t8                    = (t4 - 1);
	t9                    = (t7 + 0U);
	t10                   = (t9 + 0U);
	*((int*)t10)          = t8;
	t10                   = (t9 + 4U);
	*((int*)t10)          = 0;
	t10                   = (t9 + 8U);
	*((int*)t10)          = -1;
	t11                   = (0 - t8);
	t12                   = (t11 * -1);
	t12                   = (t12 + 1);
	t10                   = (t9 + 12U);
	*((unsigned int*)t10) = t12;
	t10                   = (t1 + 2616);
	t13                   = (t5 + 4U);
	xsi_create_subtype(t13, ng5, t10, t7, 2);
	t14                   = (t5 + 4U);
	t15                   = (t14 + 80U);
	t16                   = *((char**)t15);
	t17                   = (t16 + 12U);
	t12                   = *((unsigned int*)t17);
	t12                   = (t12 * 1U);
	t19                   = (t5 + 4U);
	t20                   = (t19 + 80U);
	t21                   = *((char**)t20);
	t22                   = (t21 + 0U);
	t23                   = *((int*)t22);
	t24                   = (t5 + 4U);
	t25                   = (t24 + 80U);
	t26                   = *((char**)t25);
	t27                   = (t26 + 4U);
	t28                   = *((int*)t27);
	t29                   = (t5 + 4U);
	t30                   = (t29 + 80U);
	t31                   = *((char**)t30);
	t32                   = (t31 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t18 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t23;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t28;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t28 - t23);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t5 + 116U);
	t38                   = (t5 + 4U);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t12);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	xsi_type_set_default_value(t38, t40, 0);
	t42                    = (t35 + 64U);
	t43                    = (t38 + 80U);
	t44                    = *((char**)t43);
	*((char**)t42)         = t44;
	t45                    = (t35 + 80U);
	*((unsigned int*)t45)  = t12;
	t46                    = (t6 + 4U);
	*((unsigned char*)t46) = t3;
	t47                    = (t6 + 5U);
	*((int*)t47)           = t4;
	t48                    = (t5 + 4U);
	t49                    = (t48 + 80U);
	t50                    = *((char**)t49);
	t51                    = (t50 + 12U);
	t37                    = *((unsigned int*)t51);
	t37                    = (t37 * 1U);
	t52                    = xsi_get_transient_memory(t37);
	memset(t52, 0, t37);
	t53 = t52;
	memset(t53, (unsigned char)2, t37);
	t54 = (t35 + 56U);
	t55 = *((char**)t54);
	t54 = (t55 + 0);
	t56 = (t5 + 4U);
	t57 = (t56 + 80U);
	t58 = *((char**)t57);
	t59 = (t58 + 12U);
	t60 = *((unsigned int*)t59);
	t60 = (t60 * 1U);
	memcpy(t54, t52, t60);
	t61                    = ieee_p_3499444699_sub_2035181919_3536714472(t1, t3);
	t9                     = (t35 + 56U);
	t10                    = *((char**)t9);
	t9                     = (t18 + 0U);
	t8                     = *((int*)t9);
	t13                    = (t18 + 8U);
	t11                    = *((int*)t13);
	t23                    = (0 - t8);
	t12                    = (t23 * t11);
	t37                    = (1U * t12);
	t60                    = (0 + t37);
	t14                    = (t10 + t60);
	*((unsigned char*)t14) = t61;
	t9                     = (t35 + 56U);
	t10                    = *((char**)t9);
	t9                     = (t18 + 0U);
	t8                     = *((int*)t9);
	t13                    = (t18 + 8U);
	t11                    = *((int*)t13);
	t23                    = (0 - t8);
	t12                    = (t23 * t11);
	t37                    = (1U * t12);
	t60                    = (0 + t37);
	t14                    = (t10 + t60);
	t61                    = *((unsigned char*)t14);
	t62                    = (t61 == (unsigned char)1);
	if(t62 != 0)
		goto LAB2;

LAB4:
LAB3:
	t9  = (t35 + 56U);
	t10 = *((char**)t9);
	t9  = (t18 + 12U);
	t12 = *((unsigned int*)t9);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t10, t12);
	t13                   = (t18 + 0U);
	t8                    = *((int*)t13);
	t14                   = (t18 + 4U);
	t11                   = *((int*)t14);
	t15                   = (t18 + 8U);
	t23                   = *((int*)t15);
	t16                   = (t2 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t8;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t23;
	t28                   = (t11 - t8);
	t37                   = (t28 * t23);
	t37                   = (t37 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t37;

LAB1:
	t9 = (t5 + 4U);
	xsi_delete_type(t9, 2);
	return t0;
LAB2:
	t15 = (t5 + 4U);
	t16 = (t15 + 80U);
	t17 = *((char**)t16);
	t19 = (t17 + 12U);
	t63 = *((unsigned int*)t19);
	t63 = (t63 * 1U);
	t20 = xsi_get_transient_memory(t63);
	memset(t20, 0, t63);
	t21 = t20;
	memset(t21, (unsigned char)1, t63);
	t22 = (t35 + 56U);
	t24 = *((char**)t22);
	t22 = (t24 + 0);
	t25 = (t5 + 4U);
	t26 = (t25 + 80U);
	t27 = *((char**)t26);
	t29 = (t27 + 12U);
	t64 = *((unsigned int*)t29);
	t64 = (t64 * 1U);
	memcpy(t22, t20, t64);
	goto LAB3;

LAB5:;
}

char* ieee_p_3499444699_sub_111358101_3536714472(char* t1, char* t2, int t3, int t4)
{
	char          t5[248];
	char          t6[16];
	char          t10[16];
	char          t25[8];
	char*         t0;
	int           t7;
	int           t8;
	unsigned int  t9;
	int           t11;
	char*         t12;
	char*         t13;
	int           t14;
	unsigned int  t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	unsigned int  t38;

LAB0:
	t7                    = (t4 - 1);
	t8                    = (0 - t7);
	t9                    = (t8 * -1);
	t9                    = (t9 + 1);
	t9                    = (t9 * 1U);
	t11                   = (t4 - 1);
	t12                   = (t10 + 0U);
	t13                   = (t12 + 0U);
	*((int*)t13)          = t11;
	t13                   = (t12 + 4U);
	*((int*)t13)          = 0;
	t13                   = (t12 + 8U);
	*((int*)t13)          = -1;
	t14                   = (0 - t11);
	t15                   = (t14 * -1);
	t15                   = (t15 + 1);
	t13                   = (t12 + 12U);
	*((unsigned int*)t13) = t15;
	t13                   = (t5 + 4U);
	t16                   = (t1 + 2728);
	t17                   = (t13 + 88U);
	*((char**)t17)        = t16;
	t18                   = (char*)alloca(t9);
	t19                   = (t13 + 56U);
	*((char**)t19)        = t18;
	xsi_type_set_default_value(t16, t18, t10);
	t20                   = (t13 + 64U);
	*((char**)t20)        = t10;
	t21                   = (t13 + 80U);
	*((unsigned int*)t21) = t9;
	t22                   = (t5 + 124U);
	t23                   = ((STD_STANDARD) + 384);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 4U;
	t28                   = (t6 + 4U);
	*((int*)t28)          = t3;
	t29                   = (t6 + 8U);
	*((int*)t29)          = t4;
	t30                   = (t22 + 56U);
	t31                   = *((char**)t30);
	t30                   = (t31 + 0);
	*((int*)t30)          = t3;
	t7                    = (t4 - 1);
	t8                    = 0;
	t11                   = t7;

LAB2:
	if(t8 <= t11)
		goto LAB3;

LAB5:
	t12 = (t13 + 56U);
	t16 = *((char**)t12);
	t12 = (t10 + 12U);
	t9  = *((unsigned int*)t12);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t16, t9);
	t17                   = (t10 + 0U);
	t7                    = *((int*)t17);
	t19                   = (t10 + 4U);
	t8                    = *((int*)t19);
	t20                   = (t10 + 8U);
	t11                   = *((int*)t20);
	t21                   = (t2 + 0U);
	t23                   = (t21 + 0U);
	*((int*)t23)          = t7;
	t23                   = (t21 + 4U);
	*((int*)t23)          = t8;
	t23                   = (t21 + 8U);
	*((int*)t23)          = t11;
	t14                   = (t8 - t7);
	t15                   = (t14 * t11);
	t15                   = (t15 + 1);
	t23                   = (t21 + 12U);
	*((unsigned int*)t23) = t15;

LAB1:
	return t0;
LAB3:
	t12 = (t22 + 56U);
	t16 = *((char**)t12);
	t14 = *((int*)t16);
	t32 = xsi_vhdl_mod(t14, 2);
	t33 = (t32 == 1);
	if(t33 != 0)
		goto LAB6;

LAB8:
	t12 = (t13 + 56U);
	t16 = *((char**)t12);
	t12 = (t10 + 0U);
	t7  = *((int*)t12);
	t17 = (t10 + 8U);
	t14 = *((int*)t17);
	t32 = (t8 - t7);
	t9  = (t32 * t14);
	t19 = (t10 + 4U);
	t34 = *((int*)t19);
	xsi_vhdl_check_range_of_index(t7, t34, t14, t8);
	t15                    = (1U * t9);
	t38                    = (0 + t15);
	t20                    = (t16 + t38);
	*((unsigned char*)t20) = (unsigned char)2;

LAB7:
	t12 = (t22 + 56U);
	t16 = *((char**)t12);
	t7  = *((int*)t16);
	t33 = (t7 > 0);
	if(t33 != 0)
		goto LAB9;

LAB11:
	t12          = (t22 + 56U);
	t16          = *((char**)t12);
	t7           = *((int*)t16);
	t14          = (t7 - 1);
	t32          = (t14 / 2);
	t12          = (t22 + 56U);
	t17          = *((char**)t12);
	t12          = (t17 + 0);
	*((int*)t12) = t32;

LAB10:
LAB4:
	if(t8 == t11)
		goto LAB5;

LAB12:
	t7 = (t8 + 1);
	t8 = t7;
	goto LAB2;

LAB6:
	t12 = (t13 + 56U);
	t17 = *((char**)t12);
	t12 = (t10 + 0U);
	t34 = *((int*)t12);
	t19 = (t10 + 8U);
	t35 = *((int*)t19);
	t36 = (t8 - t34);
	t9  = (t36 * t35);
	t20 = (t10 + 4U);
	t37 = *((int*)t20);
	xsi_vhdl_check_range_of_index(t34, t37, t35, t8);
	t15                    = (1U * t9);
	t38                    = (0 + t15);
	t21                    = (t17 + t38);
	*((unsigned char*)t21) = (unsigned char)3;
	goto LAB7;

LAB9:
	t12          = (t22 + 56U);
	t17          = *((char**)t12);
	t14          = *((int*)t17);
	t32          = (t14 / 2);
	t12          = (t22 + 56U);
	t19          = *((char**)t12);
	t12          = (t19 + 0);
	*((int*)t12) = t32;
	goto LAB10;

LAB13:;
}

char* ieee_p_3499444699_sub_112481205_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = (t1 + 2728);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = (t1 + 2728);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_211906012_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	memset(t20, (unsigned char)2, t9);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t24 + 0);
	t25 = (t6 + 124U);
	t30 = (t25 + 80U);
	t33 = *((char**)t30);
	t37 = (t33 + 12U);
	t23 = *((unsigned int*)t37);
	t23 = (t23 * 1U);
	memcpy(t21, t17, t23);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

char* ieee_p_3499444699_sub_492870835_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = (t1 + 2728);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = (t1 + 2728);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_96165378_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	t21 = (t34 + 56U);
	t24 = *((char**)t21);
	t21 = (t29 + 0U);
	t10 = *((int*)t21);
	t25 = (t29 + 0U);
	t11 = *((int*)t25);
	t30 = (t29 + 8U);
	t19 = *((int*)t30);
	t22 = (t10 - t11);
	t23 = (t22 * t19);
	t28 = (1U * t23);
	t31 = (0 + t28);
	t33 = (t24 + t31);
	t76 = *((unsigned char*)t33);
	memset(t20, t76, t9);
	t37 = (t64 + 56U);
	t38 = *((char**)t37);
	t37 = (t38 + 0);
	t40 = (t6 + 124U);
	t41 = (t40 + 80U);
	t42 = *((char**)t41);
	t43 = (t42 + 12U);
	t36 = *((unsigned int*)t43);
	t36 = (t36 * 1U);
	memcpy(t37, t17, t36);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

char* ieee_p_3499444699_sub_17676902_3536714472(char*         t1,
                                                char*         t2,
                                                unsigned char t3,
                                                int           t4)
{
	char          t5[240];
	char          t6[16];
	char          t7[16];
	char          t18[16];
	char*         t0;
	int           t8;
	char*         t9;
	char*         t10;
	int           t11;
	unsigned int  t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
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
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	unsigned int  t60;
	unsigned char t61;
	unsigned char t62;
	unsigned int  t63;
	unsigned int  t64;

LAB0:
	t8                    = (t4 - 1);
	t9                    = (t7 + 0U);
	t10                   = (t9 + 0U);
	*((int*)t10)          = t8;
	t10                   = (t9 + 4U);
	*((int*)t10)          = 0;
	t10                   = (t9 + 8U);
	*((int*)t10)          = -1;
	t11                   = (0 - t8);
	t12                   = (t11 * -1);
	t12                   = (t12 + 1);
	t10                   = (t9 + 12U);
	*((unsigned int*)t10) = t12;
	t10                   = (t1 + 2728);
	t13                   = (t5 + 4U);
	xsi_create_subtype(t13, ng5, t10, t7, 2);
	t14                   = (t5 + 4U);
	t15                   = (t14 + 80U);
	t16                   = *((char**)t15);
	t17                   = (t16 + 12U);
	t12                   = *((unsigned int*)t17);
	t12                   = (t12 * 1U);
	t19                   = (t5 + 4U);
	t20                   = (t19 + 80U);
	t21                   = *((char**)t20);
	t22                   = (t21 + 0U);
	t23                   = *((int*)t22);
	t24                   = (t5 + 4U);
	t25                   = (t24 + 80U);
	t26                   = *((char**)t25);
	t27                   = (t26 + 4U);
	t28                   = *((int*)t27);
	t29                   = (t5 + 4U);
	t30                   = (t29 + 80U);
	t31                   = *((char**)t30);
	t32                   = (t31 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t18 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t23;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t28;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t28 - t23);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t5 + 116U);
	t38                   = (t5 + 4U);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t12);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	xsi_type_set_default_value(t38, t40, 0);
	t42                    = (t35 + 64U);
	t43                    = (t38 + 80U);
	t44                    = *((char**)t43);
	*((char**)t42)         = t44;
	t45                    = (t35 + 80U);
	*((unsigned int*)t45)  = t12;
	t46                    = (t6 + 4U);
	*((unsigned char*)t46) = t3;
	t47                    = (t6 + 5U);
	*((int*)t47)           = t4;
	t48                    = (t5 + 4U);
	t49                    = (t48 + 80U);
	t50                    = *((char**)t49);
	t51                    = (t50 + 12U);
	t37                    = *((unsigned int*)t51);
	t37                    = (t37 * 1U);
	t52                    = xsi_get_transient_memory(t37);
	memset(t52, 0, t37);
	t53 = t52;
	memset(t53, (unsigned char)2, t37);
	t54 = (t35 + 56U);
	t55 = *((char**)t54);
	t54 = (t55 + 0);
	t56 = (t5 + 4U);
	t57 = (t56 + 80U);
	t58 = *((char**)t57);
	t59 = (t58 + 12U);
	t60 = *((unsigned int*)t59);
	t60 = (t60 * 1U);
	memcpy(t54, t52, t60);
	t61                    = ieee_p_3499444699_sub_2035181919_3536714472(t1, t3);
	t9                     = (t35 + 56U);
	t10                    = *((char**)t9);
	t9                     = (t18 + 0U);
	t8                     = *((int*)t9);
	t13                    = (t18 + 8U);
	t11                    = *((int*)t13);
	t23                    = (0 - t8);
	t12                    = (t23 * t11);
	t37                    = (1U * t12);
	t60                    = (0 + t37);
	t14                    = (t10 + t60);
	*((unsigned char*)t14) = t61;
	t9                     = (t35 + 56U);
	t10                    = *((char**)t9);
	t9                     = (t18 + 0U);
	t8                     = *((int*)t9);
	t13                    = (t18 + 8U);
	t11                    = *((int*)t13);
	t23                    = (0 - t8);
	t12                    = (t23 * t11);
	t37                    = (1U * t12);
	t60                    = (0 + t37);
	t14                    = (t10 + t60);
	t61                    = *((unsigned char*)t14);
	t62                    = (t61 == (unsigned char)1);
	if(t62 != 0)
		goto LAB2;

LAB4:
LAB3:
	t9  = (t35 + 56U);
	t10 = *((char**)t9);
	t9  = (t18 + 12U);
	t12 = *((unsigned int*)t9);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t10, t12);
	t13                   = (t18 + 0U);
	t8                    = *((int*)t13);
	t14                   = (t18 + 4U);
	t11                   = *((int*)t14);
	t15                   = (t18 + 8U);
	t23                   = *((int*)t15);
	t16                   = (t2 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t8;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t23;
	t28                   = (t11 - t8);
	t37                   = (t28 * t23);
	t37                   = (t37 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t37;

LAB1:
	t9 = (t5 + 4U);
	xsi_delete_type(t9, 2);
	return t0;
LAB2:
	t15 = (t5 + 4U);
	t16 = (t15 + 80U);
	t17 = *((char**)t16);
	t19 = (t17 + 12U);
	t63 = *((unsigned int*)t19);
	t63 = (t63 * 1U);
	t20 = xsi_get_transient_memory(t63);
	memset(t20, 0, t63);
	t21 = t20;
	memset(t21, (unsigned char)1, t63);
	t22 = (t35 + 56U);
	t24 = *((char**)t22);
	t22 = (t24 + 0);
	t25 = (t5 + 4U);
	t26 = (t25 + 80U);
	t27 = *((char**)t26);
	t29 = (t27 + 12U);
	t64 = *((unsigned int*)t29);
	t64 = (t64 * 1U);
	memcpy(t22, t20, t64);
	goto LAB3;

LAB5:;
}

char* ieee_p_3499444699_sub_2213602152_3536714472(char* t1, char* t2, int t3, int t4)
{
	char          t5[248];
	char          t6[16];
	char          t10[16];
	char          t25[8];
	char*         t0;
	int           t7;
	int           t8;
	unsigned int  t9;
	int           t11;
	char*         t12;
	char*         t13;
	int           t14;
	unsigned int  t15;
	char*         t16;
	char*         t17;
	char*         t18;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	char*         t23;
	char*         t24;
	char*         t26;
	char*         t27;
	char*         t28;
	char*         t29;
	char*         t30;
	char*         t31;
	int           t32;
	unsigned char t33;
	int           t34;
	int           t35;
	int           t36;
	int           t37;
	unsigned int  t38;

LAB0:
	t7                    = (t4 - 1);
	t8                    = (0 - t7);
	t9                    = (t8 * -1);
	t9                    = (t9 + 1);
	t9                    = (t9 * 1U);
	t11                   = (t4 - 1);
	t12                   = (t10 + 0U);
	t13                   = (t12 + 0U);
	*((int*)t13)          = t11;
	t13                   = (t12 + 4U);
	*((int*)t13)          = 0;
	t13                   = (t12 + 8U);
	*((int*)t13)          = -1;
	t14                   = (0 - t11);
	t15                   = (t14 * -1);
	t15                   = (t15 + 1);
	t13                   = (t12 + 12U);
	*((unsigned int*)t13) = t15;
	t13                   = (t5 + 4U);
	t16                   = ((IEEE_P_2592010699) + 4024);
	t17                   = (t13 + 88U);
	*((char**)t17)        = t16;
	t18                   = (char*)alloca(t9);
	t19                   = (t13 + 56U);
	*((char**)t19)        = t18;
	xsi_type_set_default_value(t16, t18, t10);
	t20                   = (t13 + 64U);
	*((char**)t20)        = t10;
	t21                   = (t13 + 80U);
	*((unsigned int*)t21) = t9;
	t22                   = (t5 + 124U);
	t23                   = ((STD_STANDARD) + 384);
	t24                   = (t22 + 88U);
	*((char**)t24)        = t23;
	t26                   = (t22 + 56U);
	*((char**)t26)        = t25;
	xsi_type_set_default_value(t23, t25, 0);
	t27                   = (t22 + 80U);
	*((unsigned int*)t27) = 4U;
	t28                   = (t6 + 4U);
	*((int*)t28)          = t3;
	t29                   = (t6 + 8U);
	*((int*)t29)          = t4;
	t30                   = (t22 + 56U);
	t31                   = *((char**)t30);
	t30                   = (t31 + 0);
	*((int*)t30)          = t3;
	t7                    = (t4 - 1);
	t8                    = 0;
	t11                   = t7;

LAB2:
	if(t8 <= t11)
		goto LAB3;

LAB5:
	t12 = (t13 + 56U);
	t16 = *((char**)t12);
	t12 = (t10 + 12U);
	t9  = *((unsigned int*)t12);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t16, t9);
	t17                   = (t10 + 0U);
	t7                    = *((int*)t17);
	t19                   = (t10 + 4U);
	t8                    = *((int*)t19);
	t20                   = (t10 + 8U);
	t11                   = *((int*)t20);
	t21                   = (t2 + 0U);
	t23                   = (t21 + 0U);
	*((int*)t23)          = t7;
	t23                   = (t21 + 4U);
	*((int*)t23)          = t8;
	t23                   = (t21 + 8U);
	*((int*)t23)          = t11;
	t14                   = (t8 - t7);
	t15                   = (t14 * t11);
	t15                   = (t15 + 1);
	t23                   = (t21 + 12U);
	*((unsigned int*)t23) = t15;

LAB1:
	return t0;
LAB3:
	t12 = (t22 + 56U);
	t16 = *((char**)t12);
	t14 = *((int*)t16);
	t32 = xsi_vhdl_mod(t14, 2);
	t33 = (t32 == 1);
	if(t33 != 0)
		goto LAB6;

LAB8:
	t12 = (t13 + 56U);
	t16 = *((char**)t12);
	t12 = (t10 + 0U);
	t7  = *((int*)t12);
	t17 = (t10 + 8U);
	t14 = *((int*)t17);
	t32 = (t8 - t7);
	t9  = (t32 * t14);
	t19 = (t10 + 4U);
	t34 = *((int*)t19);
	xsi_vhdl_check_range_of_index(t7, t34, t14, t8);
	t15                    = (1U * t9);
	t38                    = (0 + t15);
	t20                    = (t16 + t38);
	*((unsigned char*)t20) = (unsigned char)2;

LAB7:
	t12 = (t22 + 56U);
	t16 = *((char**)t12);
	t7  = *((int*)t16);
	t33 = (t7 > 0);
	if(t33 != 0)
		goto LAB9;

LAB11:
	t12          = (t22 + 56U);
	t16          = *((char**)t12);
	t7           = *((int*)t16);
	t14          = (t7 - 1);
	t32          = (t14 / 2);
	t12          = (t22 + 56U);
	t17          = *((char**)t12);
	t12          = (t17 + 0);
	*((int*)t12) = t32;

LAB10:
LAB4:
	if(t8 == t11)
		goto LAB5;

LAB12:
	t7 = (t8 + 1);
	t8 = t7;
	goto LAB2;

LAB6:
	t12 = (t13 + 56U);
	t17 = *((char**)t12);
	t12 = (t10 + 0U);
	t34 = *((int*)t12);
	t19 = (t10 + 8U);
	t35 = *((int*)t19);
	t36 = (t8 - t34);
	t9  = (t36 * t35);
	t20 = (t10 + 4U);
	t37 = *((int*)t20);
	xsi_vhdl_check_range_of_index(t34, t37, t35, t8);
	t15                    = (1U * t9);
	t38                    = (0 + t15);
	t21                    = (t17 + t38);
	*((unsigned char*)t21) = (unsigned char)3;
	goto LAB7;

LAB9:
	t12          = (t22 + 56U);
	t17          = *((char**)t12);
	t14          = *((int*)t17);
	t32          = (t14 / 2);
	t12          = (t22 + 56U);
	t19          = *((char**)t12);
	t12          = (t19 + 0);
	*((int*)t12) = t32;
	goto LAB10;

LAB13:;
}

char* ieee_p_3499444699_sub_2930370427_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = ((IEEE_P_2592010699) + 4024);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = ((IEEE_P_2592010699) + 4024);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_1791835871_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	memset(t20, (unsigned char)2, t9);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t24 + 0);
	t25 = (t6 + 124U);
	t30 = (t25 + 80U);
	t33 = *((char**)t30);
	t37 = (t33 + 12U);
	t23 = *((unsigned int*)t37);
	t23 = (t23 * 1U);
	memcpy(t21, t17, t23);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

char* ieee_p_3499444699_sub_2237018233_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = ((IEEE_P_2592010699) + 4024);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = ((IEEE_P_2592010699) + 4024);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_1676095237_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	t21 = (t34 + 56U);
	t24 = *((char**)t21);
	t21 = (t29 + 0U);
	t10 = *((int*)t21);
	t25 = (t29 + 0U);
	t11 = *((int*)t25);
	t30 = (t29 + 8U);
	t19 = *((int*)t30);
	t22 = (t10 - t11);
	t23 = (t22 * t19);
	t28 = (1U * t23);
	t31 = (0 + t28);
	t33 = (t24 + t31);
	t76 = *((unsigned char*)t33);
	memset(t20, t76, t9);
	t37 = (t64 + 56U);
	t38 = *((char**)t37);
	t37 = (t38 + 0);
	t40 = (t6 + 124U);
	t41 = (t40 + 80U);
	t42 = *((char**)t41);
	t43 = (t42 + 12U);
	t36 = *((unsigned int*)t43);
	t36 = (t36 * 1U);
	memcpy(t37, t17, t36);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

char* ieee_p_3499444699_sub_2801562521_3536714472(char*         t1,
                                                  char*         t2,
                                                  unsigned char t3,
                                                  int           t4)
{
	char          t5[240];
	char          t6[16];
	char          t7[16];
	char          t18[16];
	char*         t0;
	int           t8;
	char*         t9;
	char*         t10;
	int           t11;
	unsigned int  t12;
	char*         t13;
	char*         t14;
	char*         t15;
	char*         t16;
	char*         t17;
	char*         t19;
	char*         t20;
	char*         t21;
	char*         t22;
	int           t23;
	char*         t24;
	char*         t25;
	char*         t26;
	char*         t27;
	int           t28;
	char*         t29;
	char*         t30;
	char*         t31;
	char*         t32;
	int           t33;
	char*         t34;
	char*         t35;
	int           t36;
	unsigned int  t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
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
	char*         t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	char*         t57;
	char*         t58;
	char*         t59;
	unsigned int  t60;
	unsigned char t61;
	unsigned char t62;
	unsigned int  t63;
	unsigned int  t64;

LAB0:
	t8                    = (t4 - 1);
	t9                    = (t7 + 0U);
	t10                   = (t9 + 0U);
	*((int*)t10)          = t8;
	t10                   = (t9 + 4U);
	*((int*)t10)          = 0;
	t10                   = (t9 + 8U);
	*((int*)t10)          = -1;
	t11                   = (0 - t8);
	t12                   = (t11 * -1);
	t12                   = (t12 + 1);
	t10                   = (t9 + 12U);
	*((unsigned int*)t10) = t12;
	t10                   = ((IEEE_P_2592010699) + 4024);
	t13                   = (t5 + 4U);
	xsi_create_subtype(t13, ng5, t10, t7, 2);
	t14                   = (t5 + 4U);
	t15                   = (t14 + 80U);
	t16                   = *((char**)t15);
	t17                   = (t16 + 12U);
	t12                   = *((unsigned int*)t17);
	t12                   = (t12 * 1U);
	t19                   = (t5 + 4U);
	t20                   = (t19 + 80U);
	t21                   = *((char**)t20);
	t22                   = (t21 + 0U);
	t23                   = *((int*)t22);
	t24                   = (t5 + 4U);
	t25                   = (t24 + 80U);
	t26                   = *((char**)t25);
	t27                   = (t26 + 4U);
	t28                   = *((int*)t27);
	t29                   = (t5 + 4U);
	t30                   = (t29 + 80U);
	t31                   = *((char**)t30);
	t32                   = (t31 + 8U);
	t33                   = *((int*)t32);
	t34                   = (t18 + 0U);
	t35                   = (t34 + 0U);
	*((int*)t35)          = t23;
	t35                   = (t34 + 4U);
	*((int*)t35)          = t28;
	t35                   = (t34 + 8U);
	*((int*)t35)          = t33;
	t36                   = (t28 - t23);
	t37                   = (t36 * t33);
	t37                   = (t37 + 1);
	t35                   = (t34 + 12U);
	*((unsigned int*)t35) = t37;
	t35                   = (t5 + 116U);
	t38                   = (t5 + 4U);
	t39                   = (t35 + 88U);
	*((char**)t39)        = t38;
	t40                   = (char*)alloca(t12);
	t41                   = (t35 + 56U);
	*((char**)t41)        = t40;
	xsi_type_set_default_value(t38, t40, 0);
	t42                    = (t35 + 64U);
	t43                    = (t38 + 80U);
	t44                    = *((char**)t43);
	*((char**)t42)         = t44;
	t45                    = (t35 + 80U);
	*((unsigned int*)t45)  = t12;
	t46                    = (t6 + 4U);
	*((unsigned char*)t46) = t3;
	t47                    = (t6 + 5U);
	*((int*)t47)           = t4;
	t48                    = (t5 + 4U);
	t49                    = (t48 + 80U);
	t50                    = *((char**)t49);
	t51                    = (t50 + 12U);
	t37                    = *((unsigned int*)t51);
	t37                    = (t37 * 1U);
	t52                    = xsi_get_transient_memory(t37);
	memset(t52, 0, t37);
	t53 = t52;
	memset(t53, (unsigned char)2, t37);
	t54 = (t35 + 56U);
	t55 = *((char**)t54);
	t54 = (t55 + 0);
	t56 = (t5 + 4U);
	t57 = (t56 + 80U);
	t58 = *((char**)t57);
	t59 = (t58 + 12U);
	t60 = *((unsigned int*)t59);
	t60 = (t60 * 1U);
	memcpy(t54, t52, t60);
	t61                    = ieee_p_3499444699_sub_2035181919_3536714472(t1, t3);
	t9                     = (t35 + 56U);
	t10                    = *((char**)t9);
	t9                     = (t18 + 0U);
	t8                     = *((int*)t9);
	t13                    = (t18 + 8U);
	t11                    = *((int*)t13);
	t23                    = (0 - t8);
	t12                    = (t23 * t11);
	t37                    = (1U * t12);
	t60                    = (0 + t37);
	t14                    = (t10 + t60);
	*((unsigned char*)t14) = t61;
	t9                     = (t35 + 56U);
	t10                    = *((char**)t9);
	t9                     = (t18 + 0U);
	t8                     = *((int*)t9);
	t13                    = (t18 + 8U);
	t11                    = *((int*)t13);
	t23                    = (0 - t8);
	t12                    = (t23 * t11);
	t37                    = (1U * t12);
	t60                    = (0 + t37);
	t14                    = (t10 + t60);
	t61                    = *((unsigned char*)t14);
	t62                    = (t61 == (unsigned char)1);
	if(t62 != 0)
		goto LAB2;

LAB4:
LAB3:
	t9  = (t35 + 56U);
	t10 = *((char**)t9);
	t9  = (t18 + 12U);
	t12 = *((unsigned int*)t9);
	t12 = (t12 * 1U);
	t0  = xsi_get_transient_memory(t12);
	memcpy(t0, t10, t12);
	t13                   = (t18 + 0U);
	t8                    = *((int*)t13);
	t14                   = (t18 + 4U);
	t11                   = *((int*)t14);
	t15                   = (t18 + 8U);
	t23                   = *((int*)t15);
	t16                   = (t2 + 0U);
	t17                   = (t16 + 0U);
	*((int*)t17)          = t8;
	t17                   = (t16 + 4U);
	*((int*)t17)          = t11;
	t17                   = (t16 + 8U);
	*((int*)t17)          = t23;
	t28                   = (t11 - t8);
	t37                   = (t28 * t23);
	t37                   = (t37 + 1);
	t17                   = (t16 + 12U);
	*((unsigned int*)t17) = t37;

LAB1:
	t9 = (t5 + 4U);
	xsi_delete_type(t9, 2);
	return t0;
LAB2:
	t15 = (t5 + 4U);
	t16 = (t15 + 80U);
	t17 = *((char**)t16);
	t19 = (t17 + 12U);
	t63 = *((unsigned int*)t19);
	t63 = (t63 * 1U);
	t20 = xsi_get_transient_memory(t63);
	memset(t20, 0, t63);
	t21 = t20;
	memset(t21, (unsigned char)1, t63);
	t22 = (t35 + 56U);
	t24 = *((char**)t22);
	t22 = (t24 + 0);
	t25 = (t5 + 4U);
	t26 = (t25 + 80U);
	t27 = *((char**)t26);
	t29 = (t27 + 12U);
	t64 = *((unsigned int*)t29);
	t64 = (t64 * 1U);
	memcpy(t22, t20, t64);
	goto LAB3;

LAB5:;
}

char* ieee_p_3499444699_sub_854811550_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = ((IEEE_P_2592010699) + 4024);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = ((IEEE_P_2592010699) + 4024);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_1230020568_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	memset(t20, (unsigned char)2, t9);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t24 + 0);
	t25 = (t6 + 124U);
	t30 = (t25 + 80U);
	t33 = *((char**)t30);
	t37 = (t33 + 12U);
	t23 = *((unsigned int*)t37);
	t23 = (t23 * 1U);
	memcpy(t21, t17, t23);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

char* ieee_p_3499444699_sub_871414444_3536714472(
    char* t1, char* t2, char* t3, char* t4, int t5)
{
	char          t6[480];
	char          t7[24];
	char          t15[8];
	char          t18[16];
	char          t29[16];
	char          t47[16];
	char          t79[16];
	char*         t0;
	char*         t8;
	unsigned int  t9;
	int           t10;
	int           t11;
	char*         t12;
	char*         t13;
	char*         t14;
	char*         t16;
	char*         t17;
	int           t19;
	char*         t20;
	char*         t21;
	int           t22;
	unsigned int  t23;
	char*         t24;
	char*         t25;
	int           t26;
	int           t27;
	unsigned int  t28;
	char*         t30;
	unsigned int  t31;
	int           t32;
	char*         t33;
	char*         t34;
	int           t35;
	unsigned int  t36;
	char*         t37;
	char*         t38;
	char*         t39;
	char*         t40;
	char*         t41;
	char*         t42;
	char*         t43;
	char*         t44;
	char*         t45;
	char*         t46;
	char*         t48;
	char*         t49;
	char*         t50;
	char*         t51;
	int           t52;
	char*         t53;
	char*         t54;
	char*         t55;
	char*         t56;
	int           t57;
	char*         t58;
	char*         t59;
	char*         t60;
	char*         t61;
	int           t62;
	char*         t63;
	char*         t64;
	int           t65;
	unsigned int  t66;
	char*         t67;
	char*         t68;
	char*         t69;
	char*         t70;
	char*         t71;
	char*         t72;
	char*         t73;
	char*         t74;
	char*         t75;
	unsigned char t76;
	char*         t77;
	char*         t78;
	char*         t80;
	char*         t81;
	char*         t82;
	char*         t83;
	unsigned char t84;
	unsigned int  t85;
	unsigned int  t86;

LAB0:
	t8                    = (t4 + 12U);
	t9                    = *((unsigned int*)t8);
	t10                   = ieee_p_3499444699_sub_3409663016_3536714472(t1, ((t9)), t5);
	t11                   = (t10 - 1);
	t12                   = (t6 + 4U);
	t13                   = ((STD_STANDARD) + 384);
	t14                   = (t12 + 88U);
	*((char**)t14)        = t13;
	t16                   = (t12 + 56U);
	*((char**)t16)        = t15;
	*((int*)t15)          = t11;
	t17                   = (t12 + 80U);
	*((unsigned int*)t17) = 4U;
	t19                   = (t5 - 1);
	t20                   = (t18 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t19;
	t21                   = (t20 + 4U);
	*((int*)t21)          = 0;
	t21                   = (t20 + 8U);
	*((int*)t21)          = -1;
	t22                   = (0 - t19);
	t23                   = (t22 * -1);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	t21                   = ((IEEE_P_2592010699) + 4024);
	t24                   = (t6 + 124U);
	xsi_create_subtype(t24, ng5, t21, t18, 2);
	t25                   = (t4 + 12U);
	t23                   = *((unsigned int*)t25);
	t26                   = (t23 - 1);
	t27                   = (0 - t26);
	t28                   = (t27 * -1);
	t28                   = (t28 + 1);
	t28                   = (t28 * 1U);
	t30                   = (t4 + 12U);
	t31                   = *((unsigned int*)t30);
	t32                   = (t31 - 1);
	t33                   = (t29 + 0U);
	t34                   = (t33 + 0U);
	*((int*)t34)          = t32;
	t34                   = (t33 + 4U);
	*((int*)t34)          = 0;
	t34                   = (t33 + 8U);
	*((int*)t34)          = -1;
	t35                   = (0 - t32);
	t36                   = (t35 * -1);
	t36                   = (t36 + 1);
	t34                   = (t33 + 12U);
	*((unsigned int*)t34) = t36;
	t34                   = (t6 + 236U);
	t37                   = ((IEEE_P_2592010699) + 4024);
	t38                   = (t34 + 88U);
	*((char**)t38)        = t37;
	t39                   = (char*)alloca(t28);
	t40                   = (t34 + 56U);
	*((char**)t40)        = t39;
	xsi_type_set_default_value(t37, t39, t29);
	t41                   = (t34 + 64U);
	*((char**)t41)        = t29;
	t42                   = (t34 + 80U);
	*((unsigned int*)t42) = t28;
	t43                   = (t6 + 124U);
	t44                   = (t43 + 80U);
	t45                   = *((char**)t44);
	t46                   = (t45 + 12U);
	t36                   = *((unsigned int*)t46);
	t36                   = (t36 * 1U);
	t48                   = (t6 + 124U);
	t49                   = (t48 + 80U);
	t50                   = *((char**)t49);
	t51                   = (t50 + 0U);
	t52                   = *((int*)t51);
	t53                   = (t6 + 124U);
	t54                   = (t53 + 80U);
	t55                   = *((char**)t54);
	t56                   = (t55 + 4U);
	t57                   = *((int*)t56);
	t58                   = (t6 + 124U);
	t59                   = (t58 + 80U);
	t60                   = *((char**)t59);
	t61                   = (t60 + 8U);
	t62                   = *((int*)t61);
	t63                   = (t47 + 0U);
	t64                   = (t63 + 0U);
	*((int*)t64)          = t52;
	t64                   = (t63 + 4U);
	*((int*)t64)          = t57;
	t64                   = (t63 + 8U);
	*((int*)t64)          = t62;
	t65                   = (t57 - t52);
	t66                   = (t65 * t62);
	t66                   = (t66 + 1);
	t64                   = (t63 + 12U);
	*((unsigned int*)t64) = t66;
	t64                   = (t6 + 356U);
	t67                   = (t6 + 124U);
	t68                   = (t64 + 88U);
	*((char**)t68)        = t67;
	t69                   = (char*)alloca(t36);
	t70                   = (t64 + 56U);
	*((char**)t70)        = t69;
	xsi_type_set_default_value(t67, t69, 0);
	t71                   = (t64 + 64U);
	t72                   = (t67 + 80U);
	t73                   = *((char**)t72);
	*((char**)t71)        = t73;
	t74                   = (t64 + 80U);
	*((unsigned int*)t74) = t36;
	t75                   = (t7 + 4U);
	t76                   = (t3 != 0);
	if(t76 == 1)
		goto LAB3;

LAB2:
	t77            = (t7 + 12U);
	*((char**)t77) = t4;
	t78            = (t7 + 20U);
	*((int*)t78)   = t5;
	t80            = ieee_p_3499444699_sub_1230020568_3536714472(t1, t79, t3, t4);
	t81            = (t34 + 56U);
	t82            = *((char**)t81);
	t81            = (t82 + 0);
	t83            = (t79 + 12U);
	t66            = *((unsigned int*)t83);
	t66            = (t66 * 1U);
	memcpy(t81, t80, t66);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t29 + 8U);
	t11 = *((int*)t14);
	t19 = (0 - t10);
	t9  = (t19 * t11);
	t23 = (1U * t9);
	t28 = (0 + t23);
	t16 = (t13 + t28);
	t76 = *((unsigned char*)t16);
	t84 = (t76 == (unsigned char)1);
	if(t84 != 0)
		goto LAB4;

LAB6:
LAB5:
	t8  = (t6 + 124U);
	t13 = (t8 + 80U);
	t14 = *((char**)t13);
	t16 = (t14 + 12U);
	t9  = *((unsigned int*)t16);
	t9  = (t9 * 1U);
	t17 = xsi_get_transient_memory(t9);
	memset(t17, 0, t9);
	t20 = t17;
	t21 = (t34 + 56U);
	t24 = *((char**)t21);
	t21 = (t29 + 0U);
	t10 = *((int*)t21);
	t25 = (t29 + 0U);
	t11 = *((int*)t25);
	t30 = (t29 + 8U);
	t19 = *((int*)t30);
	t22 = (t10 - t11);
	t23 = (t22 * t19);
	t28 = (1U * t23);
	t31 = (0 + t28);
	t33 = (t24 + t31);
	t76 = *((unsigned char*)t33);
	memset(t20, t76, t9);
	t37 = (t64 + 56U);
	t38 = *((char**)t37);
	t37 = (t38 + 0);
	t40 = (t6 + 124U);
	t41 = (t40 + 80U);
	t42 = *((char**)t41);
	t43 = (t42 + 12U);
	t36 = *((unsigned int*)t43);
	t36 = (t36 * 1U);
	memcpy(t37, t17, t36);
	t8  = (t34 + 56U);
	t13 = *((char**)t8);
	t8  = (t29 + 0U);
	t10 = *((int*)t8);
	t14 = (t12 + 56U);
	t16 = *((char**)t14);
	t11 = *((int*)t16);
	t9  = (t10 - t11);
	t14 = (t29 + 4U);
	t19 = *((int*)t14);
	t17 = (t29 + 8U);
	t22 = *((int*)t17);
	xsi_vhdl_check_range_of_slice(t10, t19, t22, t11, 0, -1);
	t23 = (t9 * 1U);
	t28 = (0 + t23);
	t20 = (t13 + t28);
	t21 = (t64 + 56U);
	t24 = *((char**)t21);
	t21 = (t47 + 0U);
	t26 = *((int*)t21);
	t25 = (t12 + 56U);
	t30 = *((char**)t25);
	t27 = *((int*)t30);
	t31 = (t26 - t27);
	t25 = (t47 + 4U);
	t32 = *((int*)t25);
	t33 = (t47 + 8U);
	t35 = *((int*)t33);
	xsi_vhdl_check_range_of_slice(t26, t32, t35, t27, 0, -1);
	t36 = (t31 * 1U);
	t66 = (0 + t36);
	t37 = (t24 + t66);
	t38 = (t12 + 56U);
	t40 = *((char**)t38);
	t52 = *((int*)t40);
	t57 = (0 - t52);
	t85 = (t57 * -1);
	t85 = (t85 + 1);
	t86 = (1U * t85);
	memcpy(t37, t20, t86);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;

LAB1:
	t8 = (t6 + 124U);
	xsi_delete_type(t8, 2);
	return t0;
LAB3:
	*((char**)t75) = t3;
	goto LAB2;

LAB4:
	t17 = (t6 + 124U);
	t20 = (t17 + 80U);
	t21 = *((char**)t20);
	t24 = (t21 + 12U);
	t31 = *((unsigned int*)t24);
	t31 = (t31 * 1U);
	t25 = xsi_get_transient_memory(t31);
	memset(t25, 0, t31);
	t30 = t25;
	memset(t30, (unsigned char)1, t31);
	t33 = (t64 + 56U);
	t37 = *((char**)t33);
	t33 = (t37 + 0);
	t38 = (t6 + 124U);
	t40 = (t38 + 80U);
	t41 = *((char**)t40);
	t42 = (t41 + 12U);
	t36 = *((unsigned int*)t42);
	t36 = (t36 * 1U);
	memcpy(t33, t25, t36);
	t8  = (t64 + 56U);
	t13 = *((char**)t8);
	t8  = (t47 + 12U);
	t9  = *((unsigned int*)t8);
	t9  = (t9 * 1U);
	t0  = xsi_get_transient_memory(t9);
	memcpy(t0, t13, t9);
	t14                   = (t47 + 0U);
	t10                   = *((int*)t14);
	t16                   = (t47 + 4U);
	t11                   = *((int*)t16);
	t17                   = (t47 + 8U);
	t19                   = *((int*)t17);
	t20                   = (t2 + 0U);
	t21                   = (t20 + 0U);
	*((int*)t21)          = t10;
	t21                   = (t20 + 4U);
	*((int*)t21)          = t11;
	t21                   = (t20 + 8U);
	*((int*)t21)          = t19;
	t22                   = (t11 - t10);
	t23                   = (t22 * t19);
	t23                   = (t23 + 1);
	t21                   = (t20 + 12U);
	*((unsigned int*)t21) = t23;
	goto LAB1;

LAB7:
	goto LAB5;

LAB8:;
}

extern void ieee_p_3499444699_init()
{
	static char* se[] = {(void*)ieee_p_3499444699_sub_3141295106_3536714472,
	                     (void*)ieee_p_3499444699_sub_3409386410_3536714472,
	                     (void*)ieee_p_3499444699_sub_3409663016_3536714472,
	                     (void*)ieee_p_3499444699_sub_2035181919_3536714472,
	                     (void*)ieee_p_3499444699_sub_3292431343_3536714472,
	                     (void*)ieee_p_3499444699_sub_211906012_3536714472,
	                     (void*)ieee_p_3499444699_sub_3176690709_3536714472,
	                     (void*)ieee_p_3499444699_sub_96165378_3536714472,
	                     (void*)ieee_p_3499444699_sub_1230020568_3536714472,
	                     (void*)ieee_p_3499444699_sub_1791835871_3536714472,
	                     (void*)ieee_p_3499444699_sub_1676095237_3536714472,
	                     (void*)ieee_p_3499444699_sub_3823682755_3536714472,
	                     (void*)ieee_p_3499444699_sub_2116600214_3536714472,
	                     (void*)ieee_p_3499444699_sub_230791002_3536714472,
	                     (void*)ieee_p_3499444699_sub_2172687853_3536714472,
	                     (void*)ieee_p_3499444699_sub_2888649822_3536714472,
	                     (void*)ieee_p_3499444699_sub_1598393164_3536714472,
	                     (void*)ieee_p_3499444699_sub_1658551380_3536714472,
	                     (void*)ieee_p_3499444699_sub_3258556147_3536714472,
	                     (void*)ieee_p_3499444699_sub_2026593007_3536714472,
	                     (void*)ieee_p_3499444699_sub_589026959_3536714472,
	                     (void*)ieee_p_3499444699_sub_3138463120_3536714472,
	                     (void*)ieee_p_3499444699_sub_1704181104_3536714472,
	                     (void*)ieee_p_3499444699_sub_3254203762_3536714472,
	                     (void*)ieee_p_3499444699_sub_2938610218_3536714472,
	                     (void*)ieee_p_3499444699_sub_258058432_3536714472,
	                     (void*)ieee_p_3499444699_sub_173946173_3536714472,
	                     (void*)ieee_p_3499444699_sub_373799074_3536714472,
	                     (void*)ieee_p_3499444699_sub_58205530_3536714472,
	                     (void*)ieee_p_3499444699_sub_2254111597_3536714472,
	                     (void*)ieee_p_3499444699_sub_3158760445_3536714472,
	                     (void*)ieee_p_3499444699_sub_2683234343_3536714472,
	                     (void*)ieee_p_3499444699_sub_3006065631_3536714472,
	                     (void*)ieee_p_3499444699_sub_1438093509_3536714472,
	                     (void*)ieee_p_3499444699_sub_1350516001_3536714472,
	                     (void*)ieee_p_3499444699_sub_2783551994_3536714472,
	                     (void*)ieee_p_3499444699_sub_3401658142_3536714472,
	                     (void*)ieee_p_3499444699_sub_1819668549_3536714472,
	                     (void*)ieee_p_3499444699_sub_1347574249_3536714472,
	                     (void*)ieee_p_3499444699_sub_3645364408_3536714472,
	                     (void*)ieee_p_3499444699_sub_2850438820_3536714472,
	                     (void*)ieee_p_3499444699_sub_723876666_3536714472,
	                     (void*)ieee_p_3499444699_sub_278355757_3536714472,
	                     (void*)ieee_p_3499444699_sub_4097796951_3536714472,
	                     (void*)ieee_p_3499444699_sub_125660943_3536714472,
	                     (void*)ieee_p_3499444699_sub_4232465333_3536714472,
	                     (void*)ieee_p_3499444699_sub_4144887825_3536714472,
	                     (void*)ieee_p_3499444699_sub_4198114602_3536714472,
	                     (void*)ieee_p_3499444699_sub_521253454_3536714472,
	                     (void*)ieee_p_3499444699_sub_289433618_3536714472,
	                     (void*)ieee_p_3499444699_sub_4112306614_3536714472,
	                     (void*)ieee_p_3499444699_sub_764959720_3536714472,
	                     (void*)ieee_p_3499444699_sub_4265001428_3536714472,
	                     (void*)ieee_p_3499444699_sub_2254183471_3536714472,
	                     (void*)ieee_p_3499444699_sub_3158832319_3536714472,
	                     (void*)ieee_p_3499444699_sub_2683306217_3536714472,
	                     (void*)ieee_p_3499444699_sub_3006137505_3536714472,
	                     (void*)ieee_p_3499444699_sub_1438165383_3536714472,
	                     (void*)ieee_p_3499444699_sub_1350587875_3536714472,
	                     (void*)ieee_p_3499444699_sub_2783623868_3536714472,
	                     (void*)ieee_p_3499444699_sub_3401730016_3536714472,
	                     (void*)ieee_p_3499444699_sub_1960687613_3536714472,
	                     (void*)ieee_p_3499444699_sub_1413961257_3536714472,
	                     (void*)ieee_p_3499444699_sub_3645436282_3536714472,
	                     (void*)ieee_p_3499444699_sub_2850510694_3536714472,
	                     (void*)ieee_p_3499444699_sub_723948540_3536714472,
	                     (void*)ieee_p_3499444699_sub_278427631_3536714472,
	                     (void*)ieee_p_3499444699_sub_4097868825_3536714472,
	                     (void*)ieee_p_3499444699_sub_125732817_3536714472,
	                     (void*)ieee_p_3499444699_sub_4232537207_3536714472,
	                     (void*)ieee_p_3499444699_sub_4144959699_3536714472,
	                     (void*)ieee_p_3499444699_sub_4198186476_3536714472,
	                     (void*)ieee_p_3499444699_sub_521325328_3536714472,
	                     (void*)ieee_p_3499444699_sub_460092141_3536714472,
	                     (void*)ieee_p_3499444699_sub_4208333081_3536714472,
	                     (void*)ieee_p_3499444699_sub_765031594_3536714472,
	                     (void*)ieee_p_3499444699_sub_4265073302_3536714472,
	                     (void*)ieee_p_3499444699_sub_1427366415_3536714472,
	                     (void*)ieee_p_3499444699_sub_2708953618_3536714472,
	                     (void*)ieee_p_3499444699_sub_2998320402_3536714472,
	                     (void*)ieee_p_3499444699_sub_3466875835_3536714472,
	                     (void*)ieee_p_3499444699_sub_4192098780_3536714472,
	                     (void*)ieee_p_3499444699_sub_4123516226_3536714472,
	                     (void*)ieee_p_3499444699_sub_145293660_3536714472,
	                     (void*)ieee_p_3499444699_sub_613849093_3536714472,
	                     (void*)ieee_p_3499444699_sub_1577414374_3536714472,
	                     (void*)ieee_p_3499444699_sub_1358488199_3536714472,
	                     (void*)ieee_p_3499444699_sub_3678644199_3536714472,
	                     (void*)ieee_p_3499444699_sub_298816126_3536714472,
	                     (void*)ieee_p_3499444699_sub_2519015672_3536714472,
	                     (void*)ieee_p_3499444699_sub_2764363535_3536714472,
	                     (void*)ieee_p_3499444699_sub_2591093089_3536714472,
	                     (void*)ieee_p_3499444699_sub_2145572180_3536714472,
	                     (void*)ieee_p_3499444699_sub_1670046078_3536714472,
	                     (void*)ieee_p_3499444699_sub_1992877366_3536714472,
	                     (void*)ieee_p_3499444699_sub_2368579451_3536714472,
	                     (void*)ieee_p_3499444699_sub_2235775063_3536714472,
	                     (void*)ieee_p_3499444699_sub_1770363729_3536714472,
	                     (void*)ieee_p_3499444699_sub_2388469877_3536714472,
	                     (void*)ieee_p_3499444699_sub_3950470366_3536714472,
	                     (void*)ieee_p_3499444699_sub_3504949457_3536714472,
	                     (void*)ieee_p_3499444699_sub_3029423355_3536714472,
	                     (void*)ieee_p_3499444699_sub_3352254643_3536714472,
	                     (void*)ieee_p_3499444699_sub_3727956728_3536714472,
	                     (void*)ieee_p_3499444699_sub_3595152340_3536714472,
	                     (void*)ieee_p_3499444699_sub_3129741006_3536714472,
	                     (void*)ieee_p_3499444699_sub_3747847154_3536714472,
	                     (void*)ieee_p_3499444699_sub_2591164963_3536714472,
	                     (void*)ieee_p_3499444699_sub_2145644054_3536714472,
	                     (void*)ieee_p_3499444699_sub_1670117952_3536714472,
	                     (void*)ieee_p_3499444699_sub_1992949240_3536714472,
	                     (void*)ieee_p_3499444699_sub_2368651325_3536714472,
	                     (void*)ieee_p_3499444699_sub_2235846937_3536714472,
	                     (void*)ieee_p_3499444699_sub_1770435603_3536714472,
	                     (void*)ieee_p_3499444699_sub_2388541751_3536714472,
	                     (void*)ieee_p_3499444699_sub_3952842208_3536714472,
	                     (void*)ieee_p_3499444699_sub_3507321299_3536714472,
	                     (void*)ieee_p_3499444699_sub_3031795197_3536714472,
	                     (void*)ieee_p_3499444699_sub_3354626485_3536714472,
	                     (void*)ieee_p_3499444699_sub_3730328570_3536714472,
	                     (void*)ieee_p_3499444699_sub_3597524182_3536714472,
	                     (void*)ieee_p_3499444699_sub_3132112848_3536714472,
	                     (void*)ieee_p_3499444699_sub_3750218996_3536714472,
	                     (void*)ieee_p_3499444699_sub_3375251984_3536714472,
	                     (void*)ieee_p_3499444699_sub_3385499474_3536714472,
	                     (void*)ieee_p_3499444699_sub_2591129026_3536714472,
	                     (void*)ieee_p_3499444699_sub_2145608117_3536714472,
	                     (void*)ieee_p_3499444699_sub_1670082015_3536714472,
	                     (void*)ieee_p_3499444699_sub_1992913303_3536714472,
	                     (void*)ieee_p_3499444699_sub_2368615388_3536714472,
	                     (void*)ieee_p_3499444699_sub_2235811000_3536714472,
	                     (void*)ieee_p_3499444699_sub_1770399666_3536714472,
	                     (void*)ieee_p_3499444699_sub_2388505814_3536714472,
	                     (void*)ieee_p_3499444699_sub_3935053393_3536714472,
	                     (void*)ieee_p_3499444699_sub_3489532484_3536714472,
	                     (void*)ieee_p_3499444699_sub_3014006382_3536714472,
	                     (void*)ieee_p_3499444699_sub_3336837670_3536714472,
	                     (void*)ieee_p_3499444699_sub_3712539755_3536714472,
	                     (void*)ieee_p_3499444699_sub_3579735367_3536714472,
	                     (void*)ieee_p_3499444699_sub_3114324033_3536714472,
	                     (void*)ieee_p_3499444699_sub_3732430181_3536714472,
	                     (void*)ieee_p_3499444699_sub_1904283970_3536714472,
	                     (void*)ieee_p_3499444699_sub_3265085561_3536714472,
	                     (void*)ieee_p_3499444699_sub_1775521082_3536714472,
	                     (void*)ieee_p_3499444699_sub_3327266423_3536714472,
	                     (void*)ieee_p_3499444699_sub_252593879_3536714472,
	                     (void*)ieee_p_3499444699_sub_403572219_3536714472,
	                     (void*)ieee_p_3499444699_sub_879098320_3536714472,
	                     (void*)ieee_p_3499444699_sub_829756913_3536714472,
	                     (void*)ieee_p_3499444699_sub_2169654707_3536714472,
	                     (void*)ieee_p_3499444699_sub_2251616255_3536714472,
	                     (void*)ieee_p_3499444699_sub_2191728911_3536714472,
	                     (void*)ieee_p_3499444699_sub_2596859466_3536714472,
	                     (void*)ieee_p_3499444699_sub_111358101_3536714472,
	                     (void*)ieee_p_3499444699_sub_112481205_3536714472,
	                     (void*)ieee_p_3499444699_sub_492870835_3536714472,
	                     (void*)ieee_p_3499444699_sub_17676902_3536714472,
	                     (void*)ieee_p_3499444699_sub_2213602152_3536714472,
	                     (void*)ieee_p_3499444699_sub_2930370427_3536714472,
	                     (void*)ieee_p_3499444699_sub_2237018233_3536714472,
	                     (void*)ieee_p_3499444699_sub_2801562521_3536714472,
	                     (void*)ieee_p_3499444699_sub_854811550_3536714472,
	                     (void*)ieee_p_3499444699_sub_871414444_3536714472};
	xsi_register_didat("ieee_p_3499444699",
	                   "isim/precompiled.exe.sim/ieee/p_3499444699.didat");
	xsi_register_subprogram_executes(se);
}
