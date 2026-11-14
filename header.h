#include<lpc21xx.h>

extern void uart0_init(unsigned int);
extern void uart0_tx(unsigned char);
extern unsigned char uart0_rx(void);
extern void uart0_string(char *p);
extern void uart0_integer(int);
extern void uart0_float(float);

extern void adc_init(void);
extern unsigned char adc_read(unsigned int ch_num);

extern void timer0_intr_init(void);
extern void config_VIC_for_timer0(void);
extern void TIMER0_HANDLER(void)__irq;
