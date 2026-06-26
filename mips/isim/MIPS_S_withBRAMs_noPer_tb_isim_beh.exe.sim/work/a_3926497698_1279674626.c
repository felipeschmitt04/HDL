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
static const char *ng0 = "/home/ise/ise_projs/mips/mult_div.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3926497698_1279674626_p_0(char *t0)
{
    char t1[16];
    char t8[16];
    char t16[16];
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(162, ng0);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = (32 * 2);
    t5 = (64 - t4);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 64;
    t10 = (t9 + 4U);
    *((int *)t10) = 32;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (32 - 64);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t0 + 2472U);
    t13 = *((char **)t10);
    t12 = (32 - 32);
    t14 = (t12 * 1U);
    t15 = (0 + t14);
    t10 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 32;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 32);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t1, t2, t8, t10, t16);
    t21 = (t1 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (33U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 4992);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 33U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 4880);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t22, 0);
    goto LAB6;

}

static void work_a_3926497698_1279674626_p_1(char *t0)
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
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(166, ng0);
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
LAB3:    t2 = (t0 + 4896);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(169, ng0);
    t2 = xsi_get_transient_memory(33U);
    memset(t2, 0, 33U);
    t9 = t2;
    memset(t9, (unsigned char)2, 33U);
    t10 = (t0 + 5056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 33U);
    xsi_driver_first_trans_delta(t10, 0U, 33U, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5056);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_delta(t2, 33U, 32U, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t6 = ((IEEE_P_2592010699) + 4000);
    t9 = (t0 + 7744U);
    t2 = xsi_base_array_concat(t2, t15, t6, (char)99, (unsigned char)2, (char)97, t3, t9, (char)101);
    t16 = (1U + 32U);
    t1 = (33U != t16);
    if (t1 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 5120);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 33U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(174, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t3 = t2;
    memset(t3, (unsigned char)2, 32U);
    t6 = (t0 + 5312);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(175, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t3 = t2;
    memset(t3, (unsigned char)2, 32U);
    t6 = (t0 + 5376);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)0);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_size_not_matching(33U, t16, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(177, ng0);
    t3 = (t0 + 2152U);
    t9 = *((char **)t3);
    t8 = *((unsigned char *)t9);
    t17 = (t8 == (unsigned char)1);
    if (t17 != 0)
        goto LAB15;

LAB17:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB20;

LAB21:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB26:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)4);
    if (t4 != 0)
        goto LAB27;

LAB28:
LAB16:    goto LAB3;

LAB12:    t3 = (t0 + 1032U);
    t6 = *((char **)t3);
    t5 = *((unsigned char *)t6);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB14;

LAB15:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 2312U);
    t10 = *((char **)t3);
    t18 = (32 * 2);
    t19 = (t18 - 1);
    t16 = (64 - t19);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t3 = (t10 + t21);
    t11 = (t0 + 2312U);
    t12 = *((char **)t11);
    t22 = (32 * 2);
    t23 = (t22 - 64);
    t24 = (t23 * -1);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t11 = (t12 + t26);
    t27 = *((unsigned char *)t11);
    t14 = ((IEEE_P_2592010699) + 4000);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 63;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 63);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t13 = xsi_base_array_concat(t13, t15, t14, (char)97, t3, t28, (char)99, t27, (char)101);
    t32 = (64U + 1U);
    t33 = (65U != t32);
    if (t33 == 1)
        goto LAB18;

LAB19:    t30 = (t0 + 5056);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t13, 65U);
    xsi_driver_first_trans_fast(t30);
    goto LAB16;

LAB18:    xsi_size_not_matching(65U, t32, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t18 = (32 - 32);
    t16 = (t18 * -1);
    t20 = (1U * t16);
    t21 = (0 + t20);
    t2 = (t6 + t21);
    t5 = *((unsigned char *)t2);
    t7 = (t5 == (unsigned char)3);
    if (t7 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 64U, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 5056);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 33U);
    xsi_driver_first_trans_delta(t2, 0U, 33U, 0LL);

LAB23:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t18 = *((int *)t3);
    t19 = (t18 + 1);
    t2 = (t0 + 5184);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t19;
    xsi_driver_first_trans_fast(t2);
    goto LAB16;

LAB22:    xsi_set_current_line(181, ng0);
    t9 = (t0 + 5056);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_delta(t9, 64U, 1, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t18 = (32 * 2);
    t19 = (t18 - 1);
    t16 = (64 - t19);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t2 = (t6 + t21);
    t9 = (t0 + 5312);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 32U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t18 = (32 - 1);
    t16 = (64 - t18);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t2 = (t3 + t21);
    t6 = (t0 + 5376);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB16;

LAB27:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5248);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB16;

}

static void work_a_3926497698_1279674626_p_2(char *t0)
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
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(202, ng0);
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
LAB3:    t1 = (t0 + 4912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 5440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2152U);
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

LAB11:    xsi_set_current_line(206, ng0);
    t7 = (t0 + 5440);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB10;

LAB12:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 5440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 32);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 5440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB10;

LAB14:    xsi_set_current_line(214, ng0);
    t1 = (t0 + 5440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 5440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 5440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_3926497698_1279674626_init()
{
	static char *pe[] = {(void *)work_a_3926497698_1279674626_p_0,(void *)work_a_3926497698_1279674626_p_1,(void *)work_a_3926497698_1279674626_p_2};
	xsi_register_didat("work_a_3926497698_1279674626", "isim/MIPS_S_withBRAMs_noPer_tb_isim_beh.exe.sim/work/a_3926497698_1279674626.didat");
	xsi_register_executes(pe);
}
