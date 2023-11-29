#ifndef CUSTOM_PDO_NAME_H
#define CUSTOM_PDO_NAME_H

//-------------------------------------------------------------------//
//                                                                   //
//     This file has been created by the Easy Configurator tool      //
//                                                                   //
//     Easy Configurator project FEI_1.prj
//                                                                   //
//-------------------------------------------------------------------//


#define CUST_BYTE_NUM_OUT	128
#define CUST_BYTE_NUM_IN	128
#define TOT_BYTE_NUM_ROUND_OUT	128
#define TOT_BYTE_NUM_ROUND_IN	128


typedef union												//---- output buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_OUT];
	struct
	{
		uint64_t    Output1;
		uint64_t    Output2;
		uint64_t    Output3;
		uint64_t    Output4;
		uint64_t    Output5;
		uint64_t    Output6;
		uint64_t    Output7;
		uint64_t    Output8;
		uint64_t    Output9;
		uint64_t    Output10;
		uint64_t    Output11;
		uint64_t    Output12;
		uint64_t    Output13;
		uint64_t    Output14;
		uint64_t    Output15;
		uint64_t    Output16;
	}Cust;
} PROCBUFFER_OUT;


typedef union												//---- input buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_IN];
	struct
	{
		uint64_t    Input1;
		uint64_t    Input2;
		uint64_t    Input3;
		uint64_t    Input4;
		uint64_t    Input5;
		uint64_t    Input6;
		uint64_t    Input7;
		uint64_t    Input8;
		uint64_t    Input9;
		uint64_t    Input10;
		uint64_t    Input11;
		uint64_t    Input12;
		uint64_t    Input13;
		uint64_t    Input14;
		uint64_t    Input15;
		uint64_t    Input16;
	}Cust;
} PROCBUFFER_IN;

#endif