/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PhysCellIdRangeUTRA_FDD_r9_H_
#define	_PhysCellIdRangeUTRA_FDD_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdUTRA-FDD.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellIdRangeUTRA-FDD-r9 */
typedef struct PhysCellIdRangeUTRA_FDD_r9 {
	PhysCellIdUTRA_FDD_t	 start_r9;
	long	*range_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysCellIdRangeUTRA_FDD_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellIdRangeUTRA_FDD_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellIdRangeUTRA_FDD_r9_H_ */
#include <asn_internal.h>
