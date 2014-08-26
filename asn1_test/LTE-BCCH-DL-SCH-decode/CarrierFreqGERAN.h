/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CarrierFreqGERAN_H_
#define	_CarrierFreqGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueGERAN.h"
#include "BandIndicatorGERAN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqGERAN */
typedef struct CarrierFreqGERAN {
	ARFCN_ValueGERAN_t	 arfcn;
	BandIndicatorGERAN_t	 bandIndicator;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqGERAN_H_ */
#include <asn_internal.h>
