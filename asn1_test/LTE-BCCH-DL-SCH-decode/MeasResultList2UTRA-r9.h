/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasResultList2UTRA_r9_H_
#define	_MeasResultList2UTRA_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResult2UTRA_r9;

/* MeasResultList2UTRA-r9 */
typedef struct MeasResultList2UTRA_r9 {
	A_SEQUENCE_OF(struct MeasResult2UTRA_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultList2UTRA_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultList2UTRA_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResult2UTRA-r9.h"

#endif	/* _MeasResultList2UTRA_r9_H_ */
#include <asn_internal.h>
