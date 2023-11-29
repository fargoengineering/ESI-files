#ifndef CUSTOM_PDO_NAME_H
#define CUSTOM_PDO_NAME_H

//-------------------------------------------------------------------//
//                                                                   //
//     This file has been created by the Easy Configurator tool      //
//                                                                   //
//     Easy Configurator project FEI_256.prj
//                                                                   //
//-------------------------------------------------------------------//


#define CUST_BYTE_NUM_OUT	256
#define CUST_BYTE_NUM_IN	256
#define TOT_BYTE_NUM_ROUND_OUT	256
#define TOT_BYTE_NUM_ROUND_IN	256


typedef union												//---- output buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_OUT];
	struct
	{
		uint64_t    extra1;
		uint64_t    extra2;
		uint64_t    extra3;
		uint64_t    extra4;
		uint64_t    extra5;
		uint64_t    extra6;
		uint64_t    extra7;
		uint64_t    extra8;
		uint32_t    Slot1Data;
		uint32_t    Slot2Data;
		uint32_t    Slot3Data;
		uint32_t    Slot4Data;
		uint32_t    Slot5Data;
		uint32_t    Slot6Data;
		uint32_t    Slot7Data;
		uint32_t    Slot8Data;
		uint32_t    Slot9Data;
		uint32_t    Slot10Data;
		uint32_t    Slot11Data;
		uint32_t    Slot12Data;
		uint32_t    Slot13Data;
		uint32_t    Slot14Data;
		uint32_t    Slot15Data;
		uint32_t    Slot16Data;
		uint32_t    Slot17Data;
		uint32_t    Slot18Data;
		uint32_t    Slot19Data;
		uint32_t    Slot20Data;
		uint32_t    Slot21Data;
		uint32_t    Slot22Data;
		uint32_t    Slot23Data;
		uint32_t    Slot24Data;
		uint32_t    Slot25Data;
		uint32_t    Slot26Data;
		uint32_t    Slot27Data;
		uint32_t    Slot28Data;
		uint32_t    Slot29Data;
		uint32_t    Slot30Data;
		uint32_t    Slot31Data;
		uint32_t    Slot32Data;
		uint8_t     Slot17Command;
		uint8_t     Slot18Command;
		uint8_t     Slot19Command;
		uint8_t     Slot20Command;
		uint8_t     Slot21Command;
		uint8_t     Slot22Command;
		uint8_t     Slot23Command;
		uint8_t     Slot24Command;
		uint8_t     Slot25Command;
		uint8_t     Slot26Command;
		uint8_t     Slot27Command;
		uint8_t     Slot28Command;
		uint8_t     Slot29Command;
		uint8_t     Slot30Command;
		uint8_t     Slot31Command;
		uint8_t     Slot32Command;
		uint8_t     Slot9Command;
		uint8_t     Slot10Command;
		uint8_t     Slot11Command;
		uint8_t     Slot12Command;
		uint8_t     Slot13Command;
		uint8_t     Slot14Command;
		uint8_t     Slot15Command;
		uint8_t     Slot16Command;
		uint8_t     Slot1Aux;
		uint8_t     Slot2Aux;
		uint8_t     Slot3Aux;
		uint8_t     Slot4Aux;
		uint8_t     Slot5Aux;
		uint8_t     Slot6Aux;
		uint8_t     Slot7Aux;
		uint8_t     Slot8Aux;
		uint8_t     Slot9Aux;
		uint8_t     Slot10Aux;
		uint8_t     Slot11Aux;
		uint8_t     Slot12Aux;
		uint8_t     Slot13Aux;
		uint8_t     Slot14Aux;
		uint8_t     Slot15Aux;
		uint8_t     Slot16Aux;
		uint8_t     Slot17Aux;
		uint8_t     Slot18Aux;
		uint8_t     Slot19Aux;
		uint8_t     Slot20Aux;
		uint8_t     Slot21Aux;
		uint8_t     Slot22Aux;
		uint8_t     Slot23Aux;
		uint8_t     Slot24Aux;
		uint8_t     Slot25Aux;
		uint8_t     Slot26Aux;
		uint8_t     Slot27Aux;
		uint8_t     Slot28Aux;
		uint8_t     Slot29Aux;
		uint8_t     Slot30Aux;
		uint8_t     Slot31Aux;
		uint8_t     Slot32Aux;
		uint8_t     Slot1Command;
		uint8_t     Slot2Command;
		uint8_t     Slot3Command;
		uint8_t     Slot4Command;
		uint8_t     Slot5Command;
		uint8_t     Slot6Command;
		uint8_t     Slot7Command;
		uint8_t     Slot8Command;
	}Cust;
} PROCBUFFER_OUT;


typedef union												//---- input buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_IN];
	struct
	{
		uint64_t    extra1;
		uint64_t    extra2;
		uint64_t    extra3;
		uint64_t    extra4;
		uint64_t    extra5;
		uint64_t    extra6;
		uint64_t    extra7;
		uint64_t    extra8;
		uint32_t    Slot1Data;
		uint32_t    Slot2Data;
		uint32_t    Slot3Data;
		uint32_t    Slot4Data;
		uint32_t    Slot5Data;
		uint32_t    Slot6Data;
		uint32_t    Slot7Data;
		uint32_t    Slot8Data;
		uint32_t    Slot9Data;
		uint32_t    Slot10Data;
		uint32_t    Slot11Data;
		uint32_t    Slot12Data;
		uint32_t    Slot13Data;
		uint32_t    Slot14Data;
		uint32_t    Slot15Data;
		uint32_t    Slot16Data;
		uint32_t    Slot17Data;
		uint32_t    Slot18Data;
		uint32_t    Slot19Data;
		uint32_t    Slot20Data;
		uint32_t    Slot21Data;
		uint32_t    Slot22Data;
		uint32_t    Slot23Data;
		uint32_t    Slot24Data;
		uint32_t    Slot25Data;
		uint32_t    Slot26Data;
		uint32_t    Slot27Data;
		uint32_t    Slot28Data;
		uint32_t    Slot29Data;
		uint32_t    Slot30Data;
		uint32_t    Slot31Data;
		uint32_t    Slot32Data;
		uint8_t     Slot17Command;
		uint8_t     Slot18Command;
		uint8_t     Slot19Command;
		uint8_t     Slot20Command;
		uint8_t     Slot21Command;
		uint8_t     Slot22Command;
		uint8_t     Slot23Command;
		uint8_t     Slot24Command;
		uint8_t     Slot25Command;
		uint8_t     Slot26Command;
		uint8_t     Slot27Command;
		uint8_t     Slot28Command;
		uint8_t     Slot29Command;
		uint8_t     Slot30Command;
		uint8_t     Slot31Command;
		uint8_t     Slot32Command;
		uint8_t     Slot9Command;
		uint8_t     Slot10Command;
		uint8_t     Slot11Command;
		uint8_t     Slot12Command;
		uint8_t     Slot13Command;
		uint8_t     Slot14Command;
		uint8_t     Slot15Command;
		uint8_t     Slot16Command;
		uint8_t     Slot1Aux;
		uint8_t     Slot2Aux;
		uint8_t     Slot3Aux;
		uint8_t     Slot4Aux;
		uint8_t     Slot5Aux;
		uint8_t     Slot6Aux;
		uint8_t     Slot7Aux;
		uint8_t     Slot8Aux;
		uint8_t     Slot9Aux;
		uint8_t     Slot10Aux;
		uint8_t     Slot11Aux;
		uint8_t     Slot12Aux;
		uint8_t     Slot13Aux;
		uint8_t     Slot14Aux;
		uint8_t     Slot15Aux;
		uint8_t     Slot16Aux;
		uint8_t     Slot17Aux;
		uint8_t     Slot18Aux;
		uint8_t     Slot19Aux;
		uint8_t     Slot20Aux;
		uint8_t     Slot21Aux;
		uint8_t     Slot22Aux;
		uint8_t     Slot23Aux;
		uint8_t     Slot24Aux;
		uint8_t     Slot25Aux;
		uint8_t     Slot26Aux;
		uint8_t     Slot27Aux;
		uint8_t     Slot28Aux;
		uint8_t     Slot29Aux;
		uint8_t     Slot30Aux;
		uint8_t     Slot31Aux;
		uint8_t     Slot32Aux;
		uint8_t     Slot1Command;
		uint8_t     Slot2Command;
		uint8_t     Slot3Command;
		uint8_t     Slot4Command;
		uint8_t     Slot5Command;
		uint8_t     Slot6Command;
		uint8_t     Slot7Command;
		uint8_t     Slot8Command;
	}Cust;
} PROCBUFFER_IN;

#endif