/************************************************************************/
/*    File Version: V1.04                                               */
/*    Date Generated: 02/09/2021                                        */
/************************************************************************/

    /*reset_program.asm*/

    .list
    .section .text
    
    .extern _HardwareSetup  /*external Sub-routine to initialise Hardware*/
    .extern _data
    .extern _mdata
    .extern _ebss
    .extern _bss
    .extern _edata
    .extern _main 
    .extern _ustack
    .extern _istack
    .extern _rvectors
    
    .global _PowerON_Reset    /*global Start routine */
	.type   _PowerON_Reset,@function
_PowerON_Reset :
/* initialise user stack pointer */
    mvtc    #_ustack,USP

/* initialise interrupt stack pointer */
    mvtc    #_istack,ISP

#ifdef __RXv2__
/* setup exception vector */
    mvtc    #_ExceptVectors, extb    /* EXCEPTION VECTOR ADDRESS    */
#endif
/* setup intb */
    mvtc    #_rvectors_start, intb    /* INTERRUPT VECTOR ADDRESS  definition    */

/* setup FPSW */
    mvtc    #100h, fpsw    

/* load data section from ROM to RAM */

    mov     #_mdata,r2      /* src ROM address of data section in R2 */
    mov     #_data,r1       /* dest start RAM address of data section in R1 */
    mov     #_edata,r3      /* end RAM address of data section in R3 */
    sub    r1,r3            /* size of data section in R3 (R3=R3-R1) */
#ifdef __RX_ALLOW_STRING_INSNS__
    smovf                   /* block copy R3 bytes from R2 to R1 */
#else
    cmp     #0, r3
    beq     2f

1:  mov.b   [r2+], r5
    mov.b   r5, [r1+]
    sub     #1, r3
    bne     1b
2:
#endif


/* bss initialisation : zero out bss */

    mov    #00h,r2      /* load R2 reg with zero */
    mov    #_ebss, r3   /* store the end address of bss in R3 */
    mov    #_bss, r1    /* store the start address of bss in R1 */
#ifdef __RX_ALLOW_STRING_INSNS__
    sub r1,r3           /* size of bss section in R3 (R3=R3-R1) */
    sstr.b
#else
1:	cmp     r1, r3
	beq     2f
	mov.b   r2, [r1+]
	bra     1b
2:
#endif


/* call the hardware initialiser */
    mov    #_HardwareSetup,r7
    jsr    r7
    nop

/* setup PSW */
    mvtc    #10000h, psw            /* Set Ubit & Ibit for PSW */

/* change PSW PM to user-mode */
    MVFC   PSW,R1
    OR     #00100000h,R1
    PUSH.L R1
    MVFC   PC,R1
    ADD    #10,R1
    PUSH.L R1
    RTE
    NOP
    NOP


/* start user program */
    mov    #_main,r7
    jsr    r7
    mov    #_exit,r7
    jsr    r7

    .global __rx_fini 
    .type   __rx_fini,@function
__rx_fini: 
    rts 

    .global _exit
    .type   _exit,@function
/* call to exit*/
_exit:
    mov #0, r2
    mov #___call_exitprocs, r7
    jsr r7
_loop_here:
    bra _loop_here
    
    .text    
    .end
