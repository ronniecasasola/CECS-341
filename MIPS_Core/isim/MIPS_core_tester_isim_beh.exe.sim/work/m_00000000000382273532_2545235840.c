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
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/Projects/MIPS_Core/MIPS_core_tester.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {32, 0};
static int ng4[] = {256, 0};
static unsigned int ng5[] = {47052836U, 0U};
static int ng6[] = {3, 0};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {4393002U, 0U};
static int ng9[] = {7, 0};
static int ng10[] = {6, 0};
static int ng11[] = {5, 0};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {2391539732U, 0U};
static int ng14[] = {11, 0};
static int ng15[] = {10, 0};
static int ng16[] = {9, 0};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {2885943296U, 0U};
static int ng19[] = {15, 0};
static int ng20[] = {14, 0};
static int ng21[] = {13, 0};
static int ng22[] = {12, 0};
static unsigned int ng23[] = {279379967U, 0U};
static int ng24[] = {19, 0};
static int ng25[] = {18, 0};
static int ng26[] = {17, 0};
static int ng27[] = {16, 0};
static unsigned int ng28[] = {17381410U, 0U};
static int ng29[] = {23, 0};
static int ng30[] = {22, 0};
static int ng31[] = {21, 0};
static int ng32[] = {20, 0};
static unsigned int ng33[] = {135266308U, 0U};
static int ng34[] = {27, 0};
static int ng35[] = {26, 0};
static int ng36[] = {25, 0};
static int ng37[] = {24, 0};
static const char *ng38 = "Test case 1: and $31, $22, $13";
static const char *ng39 = "Expected result: $31 = 0x%h";
static const char *ng40 = "Actual result: $31 = 0x%h";
static int ng41[] = {31, 0};
static const char *ng42 = " ";
static const char *ng43 = "Test case 2: slt $1, $2, $3";
static const char *ng44 = "Test case 3: lw $12, 20($20)";
static const char *ng45 = "Expected result : $12 = 0x%h";
static int ng46[] = {43, 0};
static int ng47[] = {42, 0};
static int ng48[] = {41, 0};
static int ng49[] = {40, 0};
static const char *ng50 = "Actual result: $12 = 0x%h";
static const char *ng51 = "Test case 4: sw $4, 0($0)";
static const char *ng52 = "Expected result: $4 = 0x%h";
static const char *ng53 = "Expected result : $4 = 0x%h";
static const char *ng54 = "Test case 5: beq $5, $6, 0xffff";
static const char *ng55 = "Expected results:   ";
static const char *ng56 = "Zero = 0";
static const char *ng57 = "Branch = 1";
static const char *ng58 = "SEImm = 0xffffffff";
static const char *ng59 = "Actual results:   ";
static const char *ng60 = "Zero = %b";
static const char *ng61 = "Branch = %b";
static const char *ng62 = "SEImm = 0x%h";
static const char *ng63 = "Test case 6: sub $7, $8, $9";
static const char *ng64 = "Expected result: $7 = 0x%h";
static const char *ng65 = "Actual result: $7 = 0x%h";
static const char *ng66 = "  ";
static const char *ng67 = "Test case 7: jump to IMEM address 0x00400010";
static const char *ng68 = "Expected result: JumpValue = 0x0100004";
static const char *ng69 = "Actual result: JumpValue = 0x%h";
static const char *ng70 = "Invalid test case.";



static void Always_26_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_28_1(char *t0)
{
    char t6[8];
    char t18[8];
    char t19[8];
    char t42[8];
    char t54[8];
    char t55[8];
    char t77[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    char *t52;
    char *t53;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    char *t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    char *t75;
    char *t76;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    int t90;
    char *t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB10:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5892);
    t4 = *((char **)t3);
    t5 = (t0 + 5916);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 5940);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB15;

LAB16:    t24 = (t0 + 5964);
    t25 = *((char **)t24);
    t26 = (t0 + 5988);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 6012);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB17;

LAB18:    t52 = (t0 + 6036);
    t53 = *((char **)t52);
    t56 = (t0 + 6060);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 6084);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB19;

LAB20:    t75 = (t0 + 6108);
    t76 = *((char **)t75);
    t79 = (t0 + 6132);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 6156);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6180);
    t4 = *((char **)t3);
    t5 = (t0 + 6204);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 6228);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB23;

LAB24:    t24 = (t0 + 6252);
    t25 = *((char **)t24);
    t26 = (t0 + 6276);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 6300);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB25;

LAB26:    t52 = (t0 + 6324);
    t53 = *((char **)t52);
    t56 = (t0 + 6348);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 6372);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB27;

LAB28:    t75 = (t0 + 6396);
    t76 = *((char **)t75);
    t79 = (t0 + 6420);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 6444);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6468);
    t4 = *((char **)t3);
    t5 = (t0 + 6492);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 6516);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB31;

LAB32:    t24 = (t0 + 6540);
    t25 = *((char **)t24);
    t26 = (t0 + 6564);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 6588);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB33;

LAB34:    t52 = (t0 + 6612);
    t53 = *((char **)t52);
    t56 = (t0 + 6636);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 6660);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB35;

LAB36:    t75 = (t0 + 6684);
    t76 = *((char **)t75);
    t79 = (t0 + 6708);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 6732);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6756);
    t4 = *((char **)t3);
    t5 = (t0 + 6780);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 6804);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB39;

LAB40:    t24 = (t0 + 6828);
    t25 = *((char **)t24);
    t26 = (t0 + 6852);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 6876);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB41;

LAB42:    t52 = (t0 + 6900);
    t53 = *((char **)t52);
    t56 = (t0 + 6924);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 6948);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB43;

LAB44:    t75 = (t0 + 6972);
    t76 = *((char **)t75);
    t79 = (t0 + 6996);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 7020);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 7044);
    t4 = *((char **)t3);
    t5 = (t0 + 7068);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 7092);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB47;

LAB48:    t24 = (t0 + 7116);
    t25 = *((char **)t24);
    t26 = (t0 + 7140);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 7164);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB49;

LAB50:    t52 = (t0 + 7188);
    t53 = *((char **)t52);
    t56 = (t0 + 7212);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 7236);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB51;

LAB52:    t75 = (t0 + 7260);
    t76 = *((char **)t75);
    t79 = (t0 + 7284);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 7308);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng27)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 7332);
    t4 = *((char **)t3);
    t5 = (t0 + 7356);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 7380);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng29)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB55;

LAB56:    t24 = (t0 + 7404);
    t25 = *((char **)t24);
    t26 = (t0 + 7428);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 7452);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng30)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB57;

LAB58:    t52 = (t0 + 7476);
    t53 = *((char **)t52);
    t56 = (t0 + 7500);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 7524);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng31)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB59;

LAB60:    t75 = (t0 + 7548);
    t76 = *((char **)t75);
    t79 = (t0 + 7572);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 7596);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng32)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 7620);
    t4 = *((char **)t3);
    t5 = (t0 + 7644);
    t7 = *((char **)t5);
    t13 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 7668);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 64U);
    t20 = *((char **)t17);
    t21 = ((char*)((ng34)));
    xsi_vlog_generic_convert_array_indices(t6, t18, t14, t20, 2, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t33 = (!(t8));
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t36 = (!(t9));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB63;

LAB64:    t24 = (t0 + 7692);
    t25 = *((char **)t24);
    t26 = (t0 + 7716);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 7740);
    t31 = *((char **)t30);
    t34 = ((((char*)(t31))) + 64U);
    t43 = *((char **)t34);
    t44 = ((char*)((ng35)));
    xsi_vlog_generic_convert_array_indices(t19, t42, t29, t43, 2, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t12 = *((unsigned int *)t45);
    t46 = (!(t12));
    t47 = (t42 + 4);
    t32 = *((unsigned int *)t47);
    t48 = (!(t32));
    t49 = (t46 && t48);
    if (t49 == 1)
        goto LAB65;

LAB66:    t52 = (t0 + 7764);
    t53 = *((char **)t52);
    t56 = (t0 + 7788);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 7812);
    t61 = *((char **)t60);
    t62 = ((((char*)(t61))) + 64U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng36)));
    xsi_vlog_generic_convert_array_indices(t54, t55, t59, t63, 2, 1, t64, 32, 1);
    t65 = (t54 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t55 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB67;

LAB68:    t75 = (t0 + 7836);
    t76 = *((char **)t75);
    t79 = (t0 + 7860);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 7884);
    t84 = *((char **)t83);
    t85 = ((((char*)(t84))) + 64U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng37)));
    xsi_vlog_generic_convert_array_indices(t77, t78, t82, t86, 2, 1, t87, 32, 1);
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    t94 = (t90 && t93);
    if (t94 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB71:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB112;

LAB1:    return;
LAB6:    xsi_set_current_line(35, ng0);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5748);
    t17 = *((char **)t16);
    t20 = (t0 + 5772);
    t21 = *((char **)t20);
    t22 = ((((char*)(t21))) + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 5796);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t18, t19, t23, t27, 2, 1, t30, 32, 1);
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t19 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB8:    t38 = *((unsigned int *)t18);
    t39 = *((unsigned int *)t19);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t17)), t15, 0, *((unsigned int *)t19), t41);
    goto LAB9;

LAB11:    xsi_set_current_line(39, ng0);
    *((int *)t18) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t13 = (t18 + 4);
    *((int *)t13) = 0;
    t14 = (t0 + 5820);
    t15 = *((char **)t14);
    t16 = (t0 + 5844);
    t17 = *((char **)t16);
    t20 = ((((char*)(t17))) + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 5868);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2408);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t19, t42, t21, t25, 2, 1, t28, 32, 1);
    t29 = (t19 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (!(t32));
    t30 = (t42 + 4);
    t35 = *((unsigned int *)t30);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB13:    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t42);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t15)), t18, 0, *((unsigned int *)t42), t41);
    goto LAB14;

LAB15:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB16;

LAB17:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB18;

LAB19:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB20;

LAB21:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB22;

LAB23:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB24;

LAB25:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB26;

LAB27:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB28;

LAB29:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB30;

LAB31:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB32;

LAB33:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB34;

LAB35:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB36;

LAB37:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB38;

LAB39:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB40;

LAB41:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB42;

LAB43:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB44;

LAB45:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB46;

LAB47:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB48;

LAB49:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB50;

LAB51:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB52;

LAB53:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB54;

LAB55:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB56;

LAB57:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB58;

LAB59:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB60;

LAB61:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB62;

LAB63:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t40 = (t10 - t11);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t18), t41);
    goto LAB64;

LAB65:    t35 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t42);
    t50 = (t35 - t38);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(((char*)(t25)), t2, 8, *((unsigned int *)t42), t51);
    goto LAB66;

LAB67:    t71 = *((unsigned int *)t54);
    t72 = *((unsigned int *)t55);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(((char*)(t53)), t2, 16, *((unsigned int *)t55), t74);
    goto LAB68;

LAB69:    t95 = *((unsigned int *)t77);
    t96 = *((unsigned int *)t78);
    t97 = (t95 - t96);
    t98 = (t97 + 1);
    xsi_vlogvar_assign_value(((char*)(t76)), t2, 24, *((unsigned int *)t78), t98);
    goto LAB70;

LAB72:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 3896);
    *((int *)t13) = 1;
    t14 = (t0 + 3608);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    xsi_set_current_line(66, ng0);

LAB75:    xsi_set_current_line(67, ng0);
    t15 = (t0 + 2408);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t20 = ((char*)((ng12)));
    memset(t18, 0, 8);
    xsi_vlog_signed_multiply(t18, 32, t17, 32, t20, 32);
    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t18, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 6000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB76:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB77:    t5 = ((char*)((ng1)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t33 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng2)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng7)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng6)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng12)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng11)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng10)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB90;

LAB91:
LAB93:
LAB92:    xsi_set_current_line(139, ng0);

LAB111:    xsi_set_current_line(140, ng0);
    xsi_vlogfile_write(1, 0, 0, ng70, 1, t0);

LAB94:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t7, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    goto LAB71;

LAB78:    xsi_set_current_line(72, ng0);

LAB95:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7908);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 7932);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 7956);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng30)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 7980);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 8004);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t34 = (t0 + 8028);
    t43 = *((char **)t34);
    t44 = ((((char*)(t43))) + 64U);
    t45 = *((char **)t44);
    t47 = ((char*)((ng21)));
    xsi_vlog_generic_get_array_select_value(t18, 32, t27, t31, t45, 2, 1, t47, 32, 1);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t18);
    t10 = (t8 & t9);
    *((unsigned int *)t19) = t10;
    t52 = (t6 + 4);
    t53 = (t18 + 4);
    t56 = (t19 + 4);
    t11 = *((unsigned int *)t52);
    t12 = *((unsigned int *)t53);
    t32 = (t11 | t12);
    *((unsigned int *)t56) = t32;
    t35 = *((unsigned int *)t56);
    t38 = (t35 != 0);
    if (t38 == 1)
        goto LAB96;

LAB97:
LAB98:    xsi_vlogfile_write(1, 0, 0, ng39, 2, t0, (char)118, t19, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8052);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8076);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8100);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng41)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng40, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);
    goto LAB94;

LAB80:    xsi_set_current_line(80, ng0);

LAB99:    xsi_set_current_line(81, ng0);
    xsi_vlogfile_write(1, 0, 0, ng43, 1, t0);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 8124);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8148);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8172);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 8196);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 8220);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t34 = (t0 + 8244);
    t43 = *((char **)t34);
    t44 = ((((char*)(t43))) + 64U);
    t45 = *((char **)t44);
    t47 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t18, 32, t27, t31, t45, 2, 1, t47, 32, 1);
    memset(t19, 0, 8);
    t52 = (t6 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB101;

LAB100:    t53 = (t18 + 4);
    if (*((unsigned int *)t53) != 0)
        goto LAB101;

LAB104:    if (*((unsigned int *)t6) < *((unsigned int *)t18))
        goto LAB102;

LAB103:    xsi_vlogfile_write(1, 0, 0, ng39, 2, t0, (char)118, t19, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8268);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8292);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8316);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng40, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);
    goto LAB94;

LAB82:    xsi_set_current_line(87, ng0);

LAB105:    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 8340);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8364);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8388);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng46)));
    xsi_vlog_generic_get_array_select_value(t18, 8, t7, t16, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 8412);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 8436);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t34 = (t0 + 8460);
    t43 = *((char **)t34);
    t44 = ((((char*)(t43))) + 64U);
    t45 = *((char **)t44);
    t47 = ((char*)((ng47)));
    xsi_vlog_generic_get_array_select_value(t19, 8, t27, t31, t45, 2, 1, t47, 32, 1);
    t52 = (t0 + 8484);
    t53 = *((char **)t52);
    t56 = ((((char*)(t53))) + 56U);
    t57 = *((char **)t56);
    t58 = (t0 + 8508);
    t59 = *((char **)t58);
    t60 = ((((char*)(t59))) + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 8532);
    t63 = *((char **)t62);
    t64 = ((((char*)(t63))) + 64U);
    t65 = *((char **)t64);
    t67 = ((char*)((ng48)));
    xsi_vlog_generic_get_array_select_value(t42, 8, t57, t61, t65, 2, 1, t67, 32, 1);
    t75 = (t0 + 8556);
    t76 = *((char **)t75);
    t79 = ((((char*)(t76))) + 56U);
    t80 = *((char **)t79);
    t81 = (t0 + 8580);
    t82 = *((char **)t81);
    t83 = ((((char*)(t82))) + 72U);
    t84 = *((char **)t83);
    t85 = (t0 + 8604);
    t86 = *((char **)t85);
    t87 = ((((char*)(t86))) + 64U);
    t88 = *((char **)t87);
    t91 = ((char*)((ng49)));
    xsi_vlog_generic_get_array_select_value(t54, 8, t80, t84, t88, 2, 1, t91, 32, 1);
    xsi_vlogtype_concat(t6, 32, 32, 4U, t54, 8, t42, 8, t19, 8, t18, 8);
    xsi_vlogfile_write(1, 0, 0, ng45, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8628);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8652);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8676);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng50, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);
    goto LAB94;

LAB84:    xsi_set_current_line(98, ng0);

LAB106:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng51, 1, t0);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8700);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8724);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8748);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng52, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB86:    xsi_set_current_line(111, ng0);

LAB108:    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng54, 1, t0);
    xsi_set_current_line(113, ng0);
    xsi_vlogfile_write(1, 0, 0, ng55, 1, t0);
    xsi_set_current_line(114, ng0);
    xsi_vlogfile_write(1, 0, 0, ng56, 1, t0);
    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng57, 1, t0);
    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng58, 1, t0);
    xsi_set_current_line(117, ng0);
    xsi_vlogfile_write(1, 0, 0, ng59, 1, t0);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng60, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng61, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng62, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(121, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);
    goto LAB94;

LAB88:    xsi_set_current_line(124, ng0);

LAB109:    xsi_set_current_line(125, ng0);
    xsi_vlogfile_write(1, 0, 0, ng63, 1, t0);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 9060);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 9084);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 9108);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 9132);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 9156);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t34 = (t0 + 9180);
    t43 = *((char **)t34);
    t44 = ((((char*)(t43))) + 64U);
    t45 = *((char **)t44);
    t47 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t18, 32, t27, t31, t45, 2, 1, t47, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t6, 32, t18, 32);
    xsi_vlogfile_write(1, 0, 0, ng64, 2, t0, (char)118, t19, 32);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 9204);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 9228);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 9252);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t7, t16, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng65, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng66, 1, t0);
    goto LAB94;

LAB90:    xsi_set_current_line(132, ng0);

LAB110:    xsi_set_current_line(133, ng0);
    xsi_vlogfile_write(1, 0, 0, ng67, 1, t0);
    xsi_set_current_line(134, ng0);
    xsi_vlogfile_write(1, 0, 0, ng68, 1, t0);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng69, 2, t0, (char)118, t3, 26);
    xsi_set_current_line(136, ng0);
    xsi_vlogfile_write(1, 0, 0, ng66, 1, t0);
    goto LAB94;

LAB96:    t39 = *((unsigned int *)t19);
    t68 = *((unsigned int *)t56);
    *((unsigned int *)t19) = (t39 | t68);
    t57 = (t6 + 4);
    t58 = (t18 + 4);
    t71 = *((unsigned int *)t6);
    t72 = (~(t71));
    t89 = *((unsigned int *)t57);
    t92 = (~(t89));
    t95 = *((unsigned int *)t18);
    t96 = (~(t95));
    t99 = *((unsigned int *)t58);
    t100 = (~(t99));
    t33 = (t72 & t92);
    t36 = (t96 & t100);
    t101 = (~(t33));
    t102 = (~(t36));
    t103 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t103 & t101);
    t104 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t104 & t102);
    t105 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t105 & t101);
    t106 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t106 & t102);
    goto LAB98;

LAB101:    t56 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB103;

LAB102:    *((unsigned int *)t19) = 1;
    goto LAB103;

LAB107:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 8772);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t7 = *((char **)t5);
    t13 = (t0 + 8796);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 8820);
    t20 = *((char **)t17);
    t21 = ((((char*)(t20))) + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t18, 8, t7, t16, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 8844);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 8868);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t34 = (t0 + 8892);
    t43 = *((char **)t34);
    t44 = ((((char*)(t43))) + 64U);
    t45 = *((char **)t44);
    t47 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t19, 8, t27, t31, t45, 2, 1, t47, 32, 1);
    t52 = (t0 + 8916);
    t53 = *((char **)t52);
    t56 = ((((char*)(t53))) + 56U);
    t57 = *((char **)t56);
    t58 = (t0 + 8940);
    t59 = *((char **)t58);
    t60 = ((((char*)(t59))) + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 8964);
    t63 = *((char **)t62);
    t64 = ((((char*)(t63))) + 64U);
    t65 = *((char **)t64);
    t67 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t42, 8, t57, t61, t65, 2, 1, t67, 32, 1);
    t75 = (t0 + 8988);
    t76 = *((char **)t75);
    t79 = ((((char*)(t76))) + 56U);
    t80 = *((char **)t79);
    t81 = (t0 + 9012);
    t82 = *((char **)t81);
    t83 = ((((char*)(t82))) + 72U);
    t84 = *((char **)t83);
    t85 = (t0 + 9036);
    t86 = *((char **)t85);
    t87 = ((((char*)(t86))) + 64U);
    t88 = *((char **)t87);
    t91 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t54, 8, t80, t84, t88, 2, 1, t91, 32, 1);
    xsi_vlogtype_concat(t6, 32, 32, 4U, t54, 8, t42, 8, t19, 8, t18, 8);
    xsi_vlogfile_write(1, 0, 0, ng53, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(107, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);
    goto LAB94;

LAB112:    xsi_set_current_line(146, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000382273532_2545235840_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Initial_28_1};
	xsi_register_didat("work_m_00000000000382273532_2545235840", "isim/MIPS_core_tester_isim_beh.exe.sim/work/m_00000000000382273532_2545235840.didat");
	xsi_register_executes(pe);
}
