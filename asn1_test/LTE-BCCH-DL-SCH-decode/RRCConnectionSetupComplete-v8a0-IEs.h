/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RRCConnectionSetupComplete_v8a0_IEs_H_
#define	_RRCConnectionSetupComplete_v8a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionSetupComplete_v1020_IEs;

/* RRCConnectionSetupComplete-v8a0-IEs */
typedef struct RRCConnectionSetupComplete_v8a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionSetupComplete_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v8a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v8a0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionSetupComplete-v1020-IEs.h"

#endif	/* _RRCConnectionSetupComplete_v8a0_IEs_H_ */
#include <asn_internal.h>
