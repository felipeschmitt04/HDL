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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ise_projs/trabalho_4/projeto_1/mult_div.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0945777706_1345475044_p_0(char *t0)
{
    char t15[16];
    char t28[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB12;

LAB13:    t1 = (unsigned char)0;

LAB14:    if (t1 != 0)
        goto LAB10;

LAB11:
LAB3:    t2 = (t0 + 4312);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t2 = xsi_get_transient_memory(33U);
    memset(t2, 0, 33U);
    t9 = t2;
    memset(t9, (unsigned char)2, 33U);
    t10 = (t0 + 4408);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 33U);
    xsi_driver_first_trans_delta(t10, 0U, 33U, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_delta(t2, 33U, 32U, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t6 = ((IEEE_P_2592010699) + 4000);
    t9 = (t0 + 7096U);
    t2 = xsi_base_array_concat(t2, t15, t6, (char)99, (unsigned char)2, (char)97, t3, t9, (char)101);
    t16 = (1U + 32U);
    t1 = (33U != t16);
    if (t1 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 4472);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 33U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4536);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(83, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    memset(t3, (unsigned char)2, 64U);
    t6 = (t0 + 4664);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 64U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)0);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_size_not_matching(33U, t16, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1992U);
    t9 = *((char **)t3);
    t17 = *((unsigned char *)t9);
    t18 = (t17 == (unsigned char)2);
    if (t18 == 1)
        goto LAB18;

LAB19:    t8 = (unsigned char)0;

LAB20:    if (t8 != 0)
        goto LAB15;

LAB17:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)1);
    if (t4 != 0)
        goto LAB23;

LAB24:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB27;

LAB28:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)4);
    if (t4 != 0)
        goto LAB29;

LAB30:
LAB16:    goto LAB3;

LAB12:    t3 = (t0 + 1032U);
    t6 = *((char **)t3);
    t5 = *((unsigned char *)t6);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB14;

LAB15:    xsi_set_current_line(86, ng0);
    t11 = (t0 + 2152U);
    t12 = *((char **)t11);
    t24 = (32 * 2);
    t25 = (64 - t24);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t11 = (t12 + t27);
    t13 = (t28 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 64;
    t14 = (t13 + 4U);
    *((int *)t14) = 32;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t29 = (32 - 64);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t30;
    t14 = (t0 + 2312U);
    t31 = *((char **)t14);
    t14 = (t0 + 7160U);
    t32 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t11, t28, t31, t14);
    t33 = (t15 + 12U);
    t30 = *((unsigned int *)t33);
    t34 = (1U * t30);
    t35 = (33U != t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    t36 = (t0 + 4408);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t32, 33U);
    xsi_driver_first_trans_delta(t36, 0U, 33U, 0LL);
    goto LAB16;

LAB18:    t3 = (t0 + 2152U);
    t10 = *((char **)t3);
    t19 = (0 - 64);
    t16 = (t19 * -1);
    t20 = (1U * t16);
    t21 = (0 + t20);
    t3 = (t10 + t21);
    t22 = *((unsigned char *)t3);
    t23 = (t22 == (unsigned char)3);
    t8 = t23;
    goto LAB20;

LAB21:    xsi_size_not_matching(33U, t34, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t19 = (32 * 2);
    t16 = (64 - t19);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t2 = (t6 + t21);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t28 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 64;
    t12 = (t11 + 4U);
    *((int *)t12) = 1;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t24 = (1 - 64);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t25;
    t9 = xsi_base_array_concat(t9, t15, t10, (char)99, (unsigned char)2, (char)97, t2, t28, (char)101);
    t25 = (1U + 64U);
    t5 = (65U != t25);
    if (t5 == 1)
        goto LAB25;

LAB26:    t12 = (t0 + 4408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t31 = (t14 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t9, 65U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t19 = *((int *)t3);
    t24 = (t19 + 1);
    t2 = (t0 + 4536);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t24;
    xsi_driver_first_trans_fast(t2);
    goto LAB16;

LAB25:    xsi_size_not_matching(65U, t25, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t19 = (32 * 2);
    t24 = (t19 - 1);
    t16 = (64 - t24);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t2 = (t6 + t21);
    t9 = (t0 + 4664);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 64U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB16;

LAB29:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4600);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB16;

}

static void work_a_0945777706_1345475044_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    static char *nl0[] = {&&LAB11, &&LAB13, &&LAB12, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 4728);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(108, ng0);
    t7 = (t0 + 4728);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB10;

LAB12:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 32);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB10;

LAB14:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4728);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_0945777706_1345475044_init()
{
	static char *pe[] = {(void *)work_a_0945777706_1345475044_p_0,(void *)work_a_0945777706_1345475044_p_1};
	xsi_register_didat("work_a_0945777706_1345475044", "isim/MIPS_S_withBRAMs_noPer_tb_isim_beh.exe.sim/work/a_0945777706_1345475044.didat");
	xsi_register_executes(pe);
}
