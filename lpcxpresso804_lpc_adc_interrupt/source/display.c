
#include"Display.h"

//const unsigned int uiDigits[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
const unsigned long int uiDigits[10]={DIGIT_0,DIGIT_1,DIGIT_2,DIGIT_3,DIGIT_4,DIGIT_5,DIGIT_6,DIGIT_7,DIGIT_8,DIGIT_9};
const unsigned long int uiDigitsD[10]={DIGIT_0_D,DIGIT_1_D,DIGIT_2_D,DIGIT_3_D,DIGIT_4_D,DIGIT_5_D,DIGIT_6_D,DIGIT_7_D,DIGIT_8_D,DIGIT_9_D};
const unsigned int uiCom[4]={dig1,dig2,dig3,dig4};
unsigned int uiTemp0,uiTemp1,uiTemp2,uiTemp3;
volatile unsigned char s1,s2,s3,s4;
void display(unsigned int ,unsigned char );
void display_ans(float );
void disp_PTP(void);
void disp_PTS(void);
int aa=0;
/*******************************************************************************
 * Display function prints unsigned val(sel=0)
 ******************************************************************************/
void display(unsigned int disp,unsigned char sel)
{
  unsigned char a,b,c,d;

  a = disp/1000;
  disp = disp%1000;
  b = disp/100;
  disp = disp%100;
  c = disp/10;
  d = disp%10;


  switch((unsigned int)sel)
  {
  case 0:
	//  aa=sel;
	  uiTemp3=uiDigits[d];
	    uiTemp2=uiDigits[c];
	    uiTemp1=uiDigits[b];
	    uiTemp0=uiDigits[a];
	break;
  case 1:
//	  aa=sel;
	  uiTemp3=uiDigits[d];
	  uiTemp2=uiDigits[c];
	  uiTemp1=uiDigits[b];
	 // a=a|(1UL<<DP);
	 // uiTemp0=uiDigits[a] | (1UL<<DP);
	  uiTemp0=uiDigitsD[a];
	  break;
  case 2:
	//  aa=sel;
	  uiTemp3=uiDigits[d];
	  	  uiTemp2=uiDigits[c];
	  	//  uiTemp1=uiDigits[b] | (1UL<<DP);
	  	  uiTemp1=uiDigitsD[b];
	  	  uiTemp0=uiDigits[a];
  	  break;
  case 3:
	 // aa=sel;
	      uiTemp3=uiDigits[d];
	  	//  uiTemp2=uiDigits[c] | (1UL<<DP);
	  	 uiTemp2=uiDigitsD[c];
	  	  uiTemp1=uiDigits[b];
	  	  uiTemp0=uiDigits[a];
  	  break;
  case 4:
	 // aa=sel;
	  //uiTemp3=uiDigits[d] | (1UL<<DP);
	  uiTemp3=uiDigitsD[d];
	  	  uiTemp2=uiDigits[c];
	  	  uiTemp1=uiDigits[b];
	  	  uiTemp0=uiDigits[a];
  	  break;
  default:break;
  }
  s1=d;
  s2=c;
  s3=b;
  s4=a;
}
/*******************************************************************************
 *Display function prints float value
 ******************************************************************************/
void  display_ans(float disp_val)
{
  if(disp_val<0)
  {
    disp_val=(-1)*disp_val;
  }
  else
  {
  }

  if(disp_val>=0)
  {
    if((disp_val>=0.000)&&(disp_val<10.00))
    {
      disp_val=disp_val*1000;
      display((unsigned  int)disp_val,1);
    }
    else if((disp_val>=10.00)&&(disp_val<100.00))
    {
      disp_val=disp_val*100;
      display((unsigned  int)(disp_val),2);
    }
    else if((disp_val>=100.00)&&(disp_val<1000.00))
    {
      disp_val=disp_val*10;
      display((unsigned  int)(disp_val),3);
    }
    else if((disp_val>=1000.00)&&(disp_val<10000.00))
    {
      disp_val=disp_val*1;
      display((unsigned  int)(disp_val),0);
    }
    else
    {
      disp_val/=1000.0;
      display((unsigned  int)(disp_val),1);
    }
  }
}
/*******************************************************************************
 * print Pt-P
 ******************************************************************************/
void disp_PTP()
{
	/*uiTemp0=CHAR_P;
	uiTemp1=CHAR_T;
	uiTemp2=CHAR_DASH;
	uiTemp3=CHAR_P;*/

	uiTemp0=CHAR_P;
	uiTemp1=CHAR_T;
	uiTemp2=CHAR_P;
	uiTemp3=CHAR_P;
}
/*******************************************************************************
 * Print Pt-S
 ******************************************************************************/
void disp_PTS()
{
	/*uiTemp0=CHAR_P;
	uiTemp1=CHAR_T;
	uiTemp2=CHAR_DASH;
	uiTemp3=CHAR_S;*/

	uiTemp0=CHAR_P;
		uiTemp1=CHAR_T;
		uiTemp2=CHAR_S;
		uiTemp3=CHAR_S;
}


