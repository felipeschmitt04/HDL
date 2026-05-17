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
static const char *ng0 = "/home/ise/ise_projs/trabalho_1/projeto3/projeto_3.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2503066338_2773004810_p_0(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;

LAB0:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 5136U);
    t2 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t3, t1, 16);
    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 5136U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t13, t3, t1, 1);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (5U != t15);
    if (t2 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 3328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t8);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(20, ng0);
    t3 = xsi_get_transient_memory(5U);
    memset(t3, 0, 5U);
    t7 = t3;
    memset(t7, (unsigned char)2, 5U);
    t8 = (t0 + 3328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 5U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(23, ng0);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t7 = t4;
    memset(t7, (unsigned char)2, 5U);
    t8 = (t0 + 3328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

LAB11:    xsi_size_not_matching(5U, t15, 0);
    goto LAB12;

}

static void work_a_2503066338_2773004810_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(31, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3248);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2503066338_2773004810_init()
{
	static char *pe[] = {(void *)work_a_2503066338_2773004810_p_0,(void *)work_a_2503066338_2773004810_p_1};
	xsi_register_didat("work_a_2503066338_2773004810", "isim/projeto3_tb_isim_beh.exe.sim/work/a_2503066338_2773004810.didat");
	xsi_register_executes(pe);
}
