#include<reg51.h>

void send(char x);
void main(void)
{
	TMOD = 0x20;
	TH1 = 0xFD;
	SCON = 0x50;
	
	TR1 = 1;
	send('r');
	send('a');
	send('m');
	send('o');
	send('n');
	send('-');
	send('b');
	send('r');
	while(1);
}

void send(char x)
{
	SBUF = x;
	while(TI == 0);
	
	TI = 0;
}
