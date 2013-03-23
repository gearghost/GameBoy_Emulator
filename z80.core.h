#include "MMU.h"

struct clock{
		byte m;
		byte t;
	
};

// 8 bits Register set

struct registers{
	byte ime;
	byte a;   //Register a.
	byte b;   //Register b.
	byte c;   //Register c.
	byte d;  //Register d.
	byte e;  // Register e.
	byte h;  //Register h.
	byte l; //Register l.
	byte f; //Register f That is the Flag Register for the value caculating result.
	byte m; 
	byte t;  //Clock for the last instruction.
	word pc; //program pointer  16 bits 
	word sp; //stack pointer   16 bits
};

// the structure of the z80.

class z80{

public: 
		z80();
		void (z80::*_map[255])();

        void reset();
	    void print_status();
		/*  Load/store */
		void LDrr_bb();
		void LDrr_bc();
		void LDrr_bd();
		void LDrr_be();
		void LDrr_bh();
		void LDrr_bl();
		void LDrr_ba();
		void LDrr_cb();
		void LDrr_cc();
		void LDrr_cd();
		void LDrr_ce();
		void LDrr_ch();
		void LDrr_cl();
		void LDrr_ca();
		void LDrr_db();
		void LDrr_dc();
		void LDrr_dd();
		void LDrr_de();
		void LDrr_dh();
		void LDrr_dl();
		void LDrr_da();
		void LDrr_ec();
		void LDrr_eb();
		void LDrr_ed();
		void LDrr_ee();
		void LDrr_eh();
		void LDrr_el();
		void LDrr_ea();
		void LDrr_hd();
		void LDrr_hb();
		void LDrr_hc();
		void LDrr_he();
		void LDrr_hh();
		void LDrr_hl();
		void LDrr_ha();
		void LDrr_lb();
		void LDrr_lc();
		void LDrr_le();
		void LDrr_ld();
		void LDrr_lh();
		void LDrr_ll();
		void LDrr_la();
		void LDrr_ab();
		void LDrr_ac();
		void LDrr_ad();
		void LDrr_ae();
		void LDrr_ah();
		void LDrr_al();
		void LDrr_aa();
	  /*--------------*/
		void LDrHLm_b();
		void LDrHLm_c();
		void LDrHLm_d();
		void LDrHLm_e();
		void LDrHLm_h();
		void LDrHLm_l();
		void LDrHLm_a();
	/*------------------*/
		void LDHLmr_b();
		void LDHLmr_c();
		void LDHLmr_d();
		void LDHLmr_e();
		void LDHLmr_h();
		void LDHLmr_l();
		void LDHLmr_a();

    /*-----------------*/
		void LDrn_b();
		void LDrn_c();
		void LDrn_d();
		void LDrn_e();
		void LDrn_h();
		void LDrn_l();
		void LDrn_a();
    /*------------------*/

	   void LDHLmn();
	   void LDBCmA();
	   void LDDEmA();
	   void LDmmA();
	   void LDABCm();
	   void LDADEm();
	   void LDAmm();
	   void LDBCnn();
	   void LDDEnn();
	   void LDHLnn();
	   void LDSPnn();
	   void LDHLmm();
	   void LDmmHL();
	   void LDHLIA();
	   void LDAHLI();
	   void LDHLDA();
	   void LDAHLD();
	   void LDAIOn();
	   void LDIOnA();
	   void LDAIOC();
	   void LDIOCA();
	   void LDHLSPn();
   /*-----------------*/
       void SWAPr_b();
	   void SWAPr_c();
	   void SWAPr_d();
	   void SWAPr_e();
	   void SWAPr_h();
	   void SWAPr_l();
	   void SWAPr_a();

  /*--------Data  Processing---------*/


	   void ADDr_a();
	   void ADDr_b();
	   void ADDr_c();
	   void ADDr_d();
	   void ADDr_e();
       void ADDr_h();
	   void ADDr_l();
 /*------------------------------*/
	   void ADDHL();
	   void ADDn();
	   void ADDHLBC();
	   void ADDHLDE();
	   void ADDHLHL();
	   void ADDHLSP();
	   void ADDSPn();
	   void ADCr_b();
	   void ADCr_c();
	   void ADCr_d();
	   void ADCr_e();
	   void ADCr_h();
	   void ADCr_l();
	   void ADCr_a();
	   void ADCHL();
	   void ADCn();

/*----------------------------------*/
	   void SUBr_b();
	   void SUBr_c();
	   void SUBr_d();
	   void SUBr_e();
	   void SUBr_h();
	   void SUBr_l();
	   void SUBr_a();
	   void SUBn();
	   void SUBHL();

  /*------------------------*/
	   void SBCr_b();
	   void SBCr_c();
	   void SBCr_d();
	   void SBCr_e();
	   void SBCr_h();
	   void SBCr_l();
	   void SBCr_a();
	   void SBCHL();
	   void SBCn();
 /*----------------------*/
	   void CPr_b();
	   void CPr_c();
	   void CPr_d();
	   void CPr_e();
	   void CPr_h();
	   void CPr_l();
	   void CPr_a();
	   void CPHL();
	   void CPn();
/*---------------------*/
	   void ANDr_b();
	   void ANDr_c();
	   void ANDr_d();
	   void ANDr_e();
	   void ANDr_h();
	   void ANDr_l();
	   void ANDr_a();
	   void ANDHL();
	   void ANDn();
/*----------------------*/
	   void ORr_b();
	   void ORr_c();
	   void ORr_d();
	   void ORr_e();
	   void ORr_h();
	   void ORr_l();
	   void ORr_a();
	   void ORHL();
	   void ORn();

/*----------------------*/
	   void XORr_b();
	   void XORr_c();
	   void XORr_d();
	   void XORr_e();
	   void XORr_h();
	   void XORr_l();
	   void XORr_a();
	   void XORHL();
	   void XORn();

/*-------------------------*/
	   void INCr_b();
	   void INCr_c();
	   void INCr_d();
	   void INCr_e();
	   void INCr_h();
	   void INCr_l();
	   void INCr_a();
	   void INCHLm();

/*--------------------------*/
	   void DECr_b();
	   void DECr_c();
	   void DECr_d();
	   void DECr_e();
	   void DECr_h();
	   void DECr_l();
	   void DECr_a();
	   void DECHLm();

/*--------------------------*/
	   void INCBC();
	   void INCDE();
	   void INCHL();
	   void INCSP();

/*---------------------------*/
	   void DECBC();
	   void DECDE();
	   void DECHL();
	   void DECSP();

/*--------Bit Manipulation-------*/
	   void BIT0b();
	   void BIT0c();
	   void BIT0d();
	   void BIT0e();
	   void BIT0h();
	   void BIT0l();
	   void BIT0a();
	   void BIT0m();

	   void BIT1b();
	   void BIT1c();
	   void BIT1d();
	   void BIT1e();
	   void BIT1h();
	   void BIT1l();
	   void BIT1a();
	   void BIT1m();

	   void BIT2b();
	   void BIT2c();
	   void BIT2d();
	   void BIT2e();
	   void BIT2h();
	   void BIT2l();
	   void BIT2a();
	   void BIT2m();

	   void BIT3b();
	   void BIT3c();
	   void BIT3d();
	   void BIT3e();
	   void BIT3h();
	   void BIT3l();
	   void BIT3a();
	   void BIT3m();

	   void BIT4b();
	   void BIT4c();
	   void BIT4d();
	   void BIT4e();
	   void BIT4h();
	   void BIT4l();
	   void BIT4a();
	   void BIT4m();

	   void BIT5b();
	   void BIT5c();
	   void BIT5d();
	   void BIT5e();
	   void BIT5h();
	   void BIT5l();
	   void BIT5a();
	   void BIT5m();

	   void BIT6b();
	   void BIT6c();
	   void BIT6d();
	   void BIT6e();
	   void BIT6h();
	   void BIT6l();
	   void BIT6a();
	   void BIT6m();

	   void BIT7b();
	   void BIT7c();
	   void BIT7d();
	   void BIT7e();
	   void BIT7h();
	   void BIT7l();
	   void BIT7a();
	   void BIT7m();

/*-----------------------*/
	   void RLA();
	   void RLCA();
	   void RRA();
	   void RRCA();

	   void RLr_b();
	   void RLr_c();
	   void RLr_d();
	   void RLr_e();
	   void RLr_h();
	   void RLr_l();
	   void RLr_a();
	   void RLHL();

/*----------------------------*/
	   void RLCr_b();
	   void RLCr_c();
	   void RLCr_d();
	   void RLCr_e();
	   void RLCr_h();
	   void RLCr_l();
	   void RLCr_a();
	   void RLCHL();

/*------------------------------*/
	   void RRr_b();
	   void RRr_c();
	   void RRr_d();
	   void RRr_e();
	   void RRr_h();
	   void RRr_l();
	   void RRr_a();
	   void RRHL();

/*----------------------------------*/
	   void RRCr_b();
	   void RRCr_c();
	   void RRCr_d();
	   void RRCr_e();
	   void RRCr_h();
	   void RRCr_l();
	   void RRCr_a();
	   void RRCHL();

/*----------------------------*/
	   void SLAr_b();
	   void SLAr_c();
	   void SLAr_d();
	   void SLAr_e();
	   void SLAr_h();
	   void SLAr_l();
	   void SLAr_a();


/*--------------------------*/
	   void SLLr_b();
	   void SLLr_c();
	   void SLLr_d();
	   void SLLr_e();
	   void SLLr_h();
	   void SLLr_l();
	   void SLLr_a();

/*----------------------------------------*/
	   void SRAr_b();
	   void SRAr_c();
	   void SRAr_d();
	   void SRAr_e();
	   void SRAr_h();
	   void SRAr_l();
	   void SRAr_a();

/*------------------------------------------*/
	   void SRLr_b();
	   void SRLr_c();
	   void SRLr_d();
	   void SRLr_e();
	   void SRLr_h();
	   void SRLr_l();
	   void SRLr_a();

/*------------------------------------------------*/
	   void CPL();
	   void NEG();
	   void CCF();
	   void SCF();

/*---------------Stack-----------------------*/

	   void PUSHBC();
	   void PUSHDE();
	   void PUSHHL();
	   void PUSHAF();

	   void POPBC();
	   void POPDE();
	   void POPHL();
	   void POPAF();
	   
/*--------------Jump--------------*/
	   void JPnn();
	   void JPHL();
	   void JPNZnn();
	   void JPZnn();
	   void JPNCnn();
	   void JPCnn();

	   void JRn();
	   void JRNZn();
	   void JRZn();
	   void JRNCn();
	   void JRCn();

	   void DJNZn();

	   void CALLnn();
	   void CALLNZnn();
	   void CALLZnn();
	   void CAllNCnn();
	   void CALLCnn();

	   void RET();
	   void RETI();
	   void RETNZ();
	   void RETZ();
	   void RETNC();
	   void RETC();

	   void RST00();
	   void RST08();
	   void RST10();
	   void RST18();
	   void RST20();
	   void RST28();
	   void RST30();
	   void RST38();
	   void RST40();
	   void RST48();
	   void RST50();
	   void RST58();
	   void RST60();

/*----------------------------------------*/
	   void HALT();
	   void DI();
	   void EI();

       
/*-----------Helper  functions-------------------------*/
       void fz(byte i);
	   void fz(byte i,byte as);
	   void MAPcb();
	   void XX();
	   void NOP();
	   
private:
	    MMU _mmu;
		clock _clock;
		registers _r;
		byte _halt;
		

};